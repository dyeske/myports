PORTNAME=	pty4j
PORTVERSION=	0.13.2
CATEGORIES=	devel java
PKGNAMEPREFIX=	jetbrains-
DIST_SUBDIR=	jetbrains

MAINTAINER=	dmitry.wagin@ya.ru
COMMENT=	Pty4J's native library
WWW=		https://github.com/JetBrains/pty4j

LICENSE=	EPL
LICENSE_FILE=	${WRKSRC}/LICENSE

ONLY_FOR_ARCHS=	aarch64 amd64 powerpc64le

USES=		gmake

USE_GITHUB=	yes
GH_ACCOUNT=	JetBrains
GH_PROJECT=	pty4j
GH_TAGNAME=	1bc7a1207aca1c2116d8ae0d13f829d465a057a3

MAKEFILE=	Makefile_freebsd
ALL_TARGET=	linux_${ARCH:S/amd64/x86_64/:S/powerpc64le/ppc64le/}
DATADIR=	${PREFIX}/share/jetbrains/${PORTNAME}
EXTRACT_AFTER_ARGS=	--exclude os # Don't extract bundled binaries
BUILD_WRKSRC=	${WRKSRC}/native
PLIST_FILES=	share/jetbrains/${PORTNAME}/${ARCH}/libpty.so

.include <bsd.port.options.mk>

.if ${ARCH} == powerpc64le
BINARY_ALIAS=	powerpc64le-linux-gnu-gcc=cc
.endif

do-install:
	${MKDIR} ${STAGEDIR}${DATADIR}/${ARCH}
	${INSTALL_LIB} \
		${WRKSRC}/os/freebsd/${ARCH:S/amd64/x86-64/:S/powerpc64le/ppc64le/}/libpty.so \
		${STAGEDIR}${DATADIR}/${ARCH}

.include <bsd.port.mk>
