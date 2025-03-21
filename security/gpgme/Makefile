PORTNAME=	gpgme
PORTVERSION=	1.24.2
PORTREVISION?=	0
CATEGORIES?=	security
MASTER_SITES=	GNUPG/gpgme

MAINTAINER=	jhale@FreeBSD.org
COMMENT?=	Library to make access to GnuPG easier
WWW=		https://www.gnupg.org/related_software/gpgme/

LICENSE?=	LGPL21+
LICENSE_FILE?=	${WRKSRC}/COPYING.LESSER

LIB_DEPENDS=	libassuan.so:security/libassuan \
		libgpg-error.so:security/libgpg-error

USES=		compiler:c11 cpe gmake libtool localbase:ldflags pathfix tar:bzip2
USE_LDCONFIG=	yes

GNU_CONFIGURE=	yes
CFLAGS+=	-Wno-suggest-override -Wno-unknown-warning-option
INSTALL_TARGET=	install-strip
TEST_TARGET=	check

CPE_VENDOR=	gnu

.if !defined(_GPGME_BINDING)
CONFIGURE_ARGS+=--enable-languages="cl"

INFO=		gpgme
PORTDOCS=	AUTHORS INSTALL NEWS README

OPTIONS_DEFINE=		DOCS TEST UISERVER
OPTIONS_SINGLE=		GNUPG
OPTIONS_SINGLE_GNUPG=	GNUPG1 GNUPG2
OPTIONS_DEFAULT=	GNUPG2 UISERVER

GNUPG1_DESC=		Build gpgme library for GnuPG 1.x
GNUPG1_BUILD_DEPENDS=	gpgv:security/gnupg1
GNUPG1_RUN_DEPENDS=	gpgv:security/gnupg1

GNUPG2_DESC=		Build gpgme library for GnuPG 2.x
GNUPG2_BUILD_DEPENDS=	gpg2:security/gnupg
GNUPG2_RUN_DEPENDS=	gpg2:security/gnupg

TEST_CONFIGURE_ENABLE=	g13-test gpg-test gpgconf-test gpgsm-test
TEST_PREVENTS=		GNUPG1
TEST_PREVENTS_MSG=	TEST option is mainly designed for use with the GNUPG2 option

UISERVER_DESC=			GnuPG UI server support
UISERVER_CONFIGURE_ENABLE=	fd-passing
.else
LIB_DEPENDS+=	libgpgme.so:security/gpgme
BUILD_WRKSRC=	${WRKSRC}/lang/${_GPGME_BINDING}
INSTALL_WRKSRC=	${WRKSRC}/lang/${_GPGME_BINDING}
TEST_WRKSRC=	${WRKSRC}/lang/${_GPGME_BINDING}/tests

.  if ${_GPGME_BINDING} == "cpp"
USES+=		compiler:c++11-lang
CONFIGURE_ARGS+=--enable-languages="cpp"
NO_TEST=	yes
.  else
OPTIONS_DEFINE+=	TEST
.  endif

.  if ${_GPGME_BINDING} == "qt"
LIB_DEPENDS+=	libgpgmepp.so:security/gpgme-cpp

FLAVORS=		qt5 qt6
FLAVOR?=		${FLAVORS:[1]}
qt5_PKGNAMESUFFIX=	-qt5
qt6_PKGNAMESUFFIX=	-qt6

.    if ${FLAVOR:U} == "qt5"
USES+=		compiler:c++11-lang pkgconfig qt:5
USE_QT=		core \
		buildtools:build
TEST_USE=	QT=testlib:build
PLIST_SUB=	QGPGME_CMAKE_SUFFIX="" \
		QGPGME_INCLUDE_SUFFIX="${FLAVOR}" \
		QGPGME_LIB_SUFFIX=""
.    else
USES+=		compiler:c++17-lang pkgconfig qt:6
USE_CXXSTD=	c++17
USE_QT=		base
PLIST_SUB=	QGPGME_CMAKE_SUFFIX="Qt${FLAVOR:S|qt||}" \
		QGPGME_INCLUDE_SUFFIX="${FLAVOR}" \
		QGPGME_LIB_SUFFIX="${FLAVOR}"
.    endif

CONFIGURE_ARGS+=--enable-languages="cpp ${FLAVOR}"
DOCSDIR=	${PREFIX}/share/doc/${PORTNAME}${PKGNAMESUFFIX}

OPTIONS_DEFINE+=	DOXYGEN
DOXYGEN_BUILD_DEPENDS=	doxygen:devel/doxygen \
			dot:graphics/graphviz
.  endif

.  if ${_GPGME_BINDING} == "python"
BUILD_DEPENDS+=	swig:devel/swig \
		${PY_SETUPTOOLS}
USES+=		python:3.9+
USE_PYTHON=	flavors
CONFIGURE_ARGS+=--enable-languages="python"
CONFIGURE_ENV+=	BSD_PYTHON="${PYTHON_CMD}" \
		BSD_PYTHON_VERSION="${PYTHON_VER}" \
		SWIG="${LOCALBASE}/bin/swig"
PLIST_SUB+=	VERSION=${PORTVERSION}
.  endif
.endif

.include <bsd.port.pre.mk>

post-patch:
.if ${COMPILER_TYPE} == "clang"
	@${REINPLACE_CMD} -e 's|mno-direct-extern-access|fno-direct-access-external-data|g' \
		${WRKSRC}/configure
.endif
.if defined(_GPGME_BINDING)
	@${FIND} ${BUILD_WRKSRC} -name "Makefile.in" -type f | ${XARGS} \
	${REINPLACE_CMD} -e 's|../../../src/libgpgme.la|-lgpgme|g'
.  if ${_GPGME_BINDING} == "qt"
	@${FIND} ${BUILD_WRKSRC} -name "Makefile.in" -type f | ${XARGS} \
	${REINPLACE_CMD} -e 's|../../cpp/src/libgpgmepp.la|-lgpgmepp|g'
.  endif
.endif
	@${REINPLACE_CMD} -e 's|^clfilesdir.*|clfilesdir=$$\(libdir\)/common-lisp/gpgme|g' \
		${WRKSRC}/lang/cl/Makefile.in

post-patch-DOXYGEN-off:
	@${REINPLACE_CMD} -e '/SUBDIRS/s|doc||' \
		${WRKSRC}/lang/qt/Makefile.in

post-patch-TEST-off:
	@${REINPLACE_CMD} -e '/SUBDIRS/s|tests||' \
		${WRKSRC}/lang/python/Makefile.in \
		${WRKSRC}/lang/qt/Makefile.in

# The gnupg programs will create sockets for the tests in a temporary directory
# under /var/run/user/${UID} if it exists. Otherwise, they will try to create
# them in the test build directories. To prevent errors in cases where the test
# build directory path length exceeds the socket path length limitation of 104
# characters, the sockets are redirected to a temporary directory.
pre-build-TEST-on:
	@if [ ! -d "/var/run/user/${UID}" ]; then \
		SOCKETS="dirmngr gpg-agent gpg-agent.browser gpg-agent.extra gpg-agent.ssh scdaemon uiserver"; \
		TESTSUBDIRS="lang/python/tests lang/qt/tests tests/gpg tests/gpgsm"; \
		TMPSOCKETDIR=$$(${MKTEMP} -d -t gpgmetest); \
		${ECHO_CMD} "$${TMPSOCKETDIR}" > ${WRKDIR}/.tmpsocketdir; \
		trap "${RM} -r $${TMPSOCKETDIR}; exit 1" 1 2 3 5 10 13 15; \
			for sock in $${SOCKETS}; do \
				for subdir in $${TESTSUBDIRS}; do \
					${PRINTF} "%%Assuan%%\nsocket=$${TMPSOCKETDIR}/S.$${sock}\n" > ${WRKSRC}/$${subdir}/S.$${sock}; \
				done; \
		  	done; \
	fi

post-build-TEST-on:
	@if [ -f "${WRKDIR}/.tmpsocketdir" ]; then \
		${XARGS} ${RM} -rf < ${WRKDIR}/.tmpsocketdir; \
		${RM} ${WRKDIR}/.tmpsocketdir; \
	fi

pre-test: pre-build-TEST-on

post-test: post-build-TEST-on

.if !defined(_GPGME_BINDING)
post-install-DOCS-on:
	${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${PORTDOCS:S|^|${WRKSRC}/|} ${STAGEDIR}${DOCSDIR}
.endif

post-install-DOXYGEN-on:
	${MKDIR} ${STAGEDIR}${DOCSDIR}/html
	cd ${WRKSRC}/lang/qt/doc/generated/html && \
		${COPYTREE_SHARE} . ${STAGEDIR}${DOCSDIR}/html
	@${FIND} -P ${STAGEDIR}${DOCSDIR} -type f 2>/dev/null | \
		${SED} -ne 's|^${STAGEDIR}${PREFIX}/||p' >> ${TMPPLIST}

.include <bsd.port.post.mk>
