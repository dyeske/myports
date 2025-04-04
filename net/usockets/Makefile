PORTNAME=	usockets
DISTVERSIONPREFIX=	v
DISTVERSION=	0.8.8
PORTREVISION=	1
CATEGORIES=	net devel

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Minuscule eventing, networking, and crypto for async applications
WWW=		https://github.com/uNetworking/uSockets

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE

BROKEN_riscv64=		fails to build: Hard-float 'd' ABI can't be used for a target that doesn't support the D instruction set extension

USES=		compiler:c++17-lang gmake ssl # c++17 only for temp C_++ code, otherwise it is c11
USE_LDCONFIG=	yes

USE_GITHUB=	yes
GH_ACCOUNT=	uNetworking
GH_PROJECT=	uSockets

MAKE_ARGS=	WITH_OPENSSL=1
CFLAGS+=	-fPIC # -fPIC is required for the build to succeed, see https://github.com/uNetworking/uSockets/issues/217
CXXFLAGS+=	-fPIC

ALL_TARGET=	default

SUB_FILES=	libusockets.pc
SUB_LISTS=	VERSION=${DISTVERSION}

PLIST_FILES=	include/libusockets.h \
		lib/libuSockets.so.0 \
		lib/libuSockets.so

do-install:
	${INSTALL_DATA} ${WRKSRC}/src/libusockets.h ${STAGEDIR}${PREFIX}/include
	${INSTALL_LIB} ${WRKSRC}/libuSockets.so.0 ${STAGEDIR}${PREFIX}/lib
	${RLN} ${WRKSRC}/libuSockets.so.0 ${STAGEDIR}${PREFIX}/lib/libuSockets.so
	${INSTALL_DATA} ${WRKDIR}/libusockets.pc ${STAGEDIR}${LOCALBASE}/libdata/pkgconfig

do-test: # tests fail to compile: https://github.com/uNetworking/uSockets/issues/213
	cd ${WRKSRC} && \
		${CC} ${CFLAGS} -o test tests/sni_test.c ${STAGEDIR}${PREFIX}/lib/libuSockets.so && \
		./test

.include <bsd.port.mk>
