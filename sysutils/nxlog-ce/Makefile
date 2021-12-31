# Created by: Sergei Kolobov <sergei@kolobov.com>

PORTNAME=	nxlog-ce
PORTVERSION=	2.11
PORTREVISION=	2190
PORTEPOCH=	1
CATEGORIES=	sysutils
MASTER_SITES=	https://nxlog.co/system/files/products/files/348/
DISTFILES=	${PORTNAME}-${DISTVERSION}.${PORTREVISION}.tar.gz
WRKSRC=		${WRKDIR}/${PORTNAME}-${PORTVERSION}.13
MAINTAINER=	ports@FreeBSD.org
COMMENT=	Modern syslogd replacement with PCRE support
LICENSE=	GPLv2
USES=	gmake libtool
USE_AUTOTOOLS+=		aclocal automake libtool libtoolize
# BUILD_DEPENDS+=	${LOCALBASE}/bin/automake:devel/automake
GNU_CONFIGURE=	yes
# USE_LDCONFIG=   yes
LIB_DEPENDS=	libpcre.so:devel/pcre
CPPFLAGS+=      -I${LOCALBASE}/include
LDFLAGS+=       -L${LOCALBASE}/lib
CONFIGURE_ARGS+=	--disable-xm_perl --disable-documentation
# ile:CONFIGURE_ARGS= --with-configfile=${LOCALBASE}/etc/noffle.conf 
# /usr/ports/devel/libtool/pkg-plist:bin/libtoolize
# USES=		pkgconfig tar:xz USES=  autoreconf localbase uidfix
# +USE_AUTOTOOLS+=    aclocal autoconf autoheader automake libtool libtoolize
# BUILD_DEPENDS+=	libtoolize:devel/libtool
# BUILD_DEPENDS=  ${LOCALBASE}/bin/curl:ftp/curl
#       490:run-autotools-fixup 500:do-configure 700:post-configure \ 850:post-configure-script \
#                           ${_OPTIONS_configure} ${_USES_configure}
#	_BUILD_SEQ=             100:build-message 300:pre-build 450:pre-build-script \

pre-configure:
	(cd ${WRKSRC} && ${SH} autogen.sh)

# pkg-static: Unable to access file /usr/ports/sysutils/nxlog-ce/work/stage/usr/local/man/man5/metalog.conf.5.gz:No such file or directory
# 	pkg-static: Unable to access file /usr/ports/sysutils/nxlog-ce/work/stage/usr/local/man/man8/metalog.8.gz:No such file or directory
# 	pkg-static: Unable to access file /usr/ports/sysutils/nxlog-ce/work/stage/usr/local/sbin/metalog:No such file or directory
# 	pkg-static: Unable to access file /usr/ports/sysutils/nxlog-ce/work/stage/usr/local/etc/metalog.conf.sample:No such file or directory
# pkg-static: Fail to apply keyword 'sample'
# post-install:
# 	${INSTALL_DATA} ${WRKSRC}/metalog.conf ${STAGEDIR}${PREFIX}/etc/metalog.conf.sample

.include <bsd.port.mk>
