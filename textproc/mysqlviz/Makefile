PORTNAME=	mysqlviz
PORTVERSION=	0.3
PORTREVISION=	1
CATEGORIES=	textproc

MAINTAINER=	tota@FreeBSD.org
COMMENT=	MySQL and SQLite Database Visualisation Tool
WWW=		https://github.com/globalcitizen/mysqlviz

LICENSE=	GPLv3

BROKEN=		Unfetchable
DEPRECATED=	Repo deleted upstream
EXPIRATION_DATE=2025-04-30

NO_BUILD=	yes
USES=	php:cli tar:bzip2
USE_GITHUB=	yes
GH_ACCOUNT=	globalcitizen

PLIST_FILES=	bin/${PORTNAME}

PORTEXAMPLES=	eg.png eg.sql sqlite-eg.sql

OPTIONS_DEFINE=	EXAMPLES

post-patch:
	@${REINPLACE_CMD} \
		-e 's|/usr/bin/php|${LOCALBASE}/bin/php|' \
		${WRKSRC}/${PORTNAME}

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/${PORTNAME} ${STAGEDIR}${PREFIX}/bin

do-install-EXAMPLES-on:
	@${MKDIR} ${STAGEDIR}${EXAMPLESDIR}
	cd ${WRKSRC} && ${INSTALL_DATA} ${PORTEXAMPLES} ${STAGEDIR}${EXAMPLESDIR}

.include <bsd.port.mk>
