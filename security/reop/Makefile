PORTNAME=	reop
PORTVERSION=	2.1.1
PORTREVISION=	2
CATEGORIES=	security
MASTER_SITES=	https://humungus.tedunangst.com/r/reop/d/

MAINTAINER=	bofh@FreeBSD.org
COMMENT=	Reasonable Expectation Of Privacy
WWW=		https://humungus.tedunangst.com

LICENSE=	ISCL

LIB_DEPENDS=	libsodium.so:security/libsodium

USES=		gmake tar:tgz

MAKEFILE=	GNUmakefile
MAKE_ARGS+=	CFLAGS+="-I${LOCALBASE}/include -Iother -Wno-pointer-sign" \
		CPPFLAGS="-D_NSIG=NSIG" \
		PREFIX="${STAGEDIR}${PREFIX}"

PLIST_FILES=	bin/reop \
		share/man/man1/reop.1.gz

do-install:
	${MKDIR} ${STAGEDIR}${PREFIX}/bin
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${STAGEDIR}${PREFIX}/bin
	${MKDIR} ${STAGEDIR}${PREFIX}/share/man/man1
	${INSTALL_MAN} ${WRKSRC}/${PORTNAME}.1 ${STAGEDIR}${PREFIX}/share/man/man1

.include <bsd.port.mk>
