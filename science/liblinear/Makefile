PORTNAME=	liblinear
PORTVERSION=	2.49
CATEGORIES=	science math
MASTER_SITES=	https://www.csie.ntu.edu.tw/~cjlin/liblinear/ \
		https://www.csie.ntu.edu.tw/~cjlin/liblinear/oldfiles/

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Library for Large Linear Classification
WWW=		https://www.csie.ntu.edu.tw/~cjlin/liblinear/

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/COPYRIGHT

PLIST_FILES=	bin/predict bin/train

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/predict ${WRKSRC}/train ${STAGEDIR}${PREFIX}/bin

.include <bsd.port.mk>
