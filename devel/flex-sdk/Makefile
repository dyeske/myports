PORTNAME=	flex-sdk
PORTVERSION=	4.6.0.23201
CATEGORIES=	devel java
MASTER_SITES=	http://fpdownload.adobe.com/pub/flex/sdk/builds/flex4.6/
DISTNAME=	flex_sdk_${PORTVERSION}_mpl

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Adobe Flex SDK
WWW=		http://opensource.adobe.com/wiki/display/flexsdk/Flex+4

CONFLICTS=	flex-sdk3
USES=		java zip
SUB_FILES=	${SCRIPTS:C/\$/.sh/g}
NO_ARCH=	yes
NO_BUILD=	yes
NO_WRKSUBDIR=	yes
PLIST_SUB=	PORTNAME=${PORTNAME}
SUB_LIST=	PORTNAME=${PORTNAME}
SCRIPTS=	aasdoc acompc amxmlc asdoc compc copylocale digest \
		fcsh fdb mxmlc optimizer

post-extract:
	${RM} ${WRKSRC}/bin/*.bat ${WRKSRC}/bin/*.exe
	${FIND} ${WRKSRC} -name "._*" -delete

do-install:
.for i in ${SCRIPTS}
	${INSTALL_SCRIPT} ${WRKDIR}/${i}.sh ${STAGEDIR}${PREFIX}/bin/${i}
.endfor

	${MKDIR} ${STAGEDIR}${JAVAJARDIR}/${PORTNAME}
	${INSTALL_DATA} ${WRKSRC}/lib/*.jar ${STAGEDIR}${JAVAJARDIR}/${PORTNAME}/
	${INSTALL_DATA} ${WRKSRC}/ant/lib/*.jar ${STAGEDIR}${JAVAJARDIR}/${PORTNAME}/

	${MKDIR} ${STAGEDIR}${DATADIR}/frameworks
	${CP} -r ${WRKSRC}/frameworks/ ${STAGEDIR}${DATADIR}/frameworks/

	${MKDIR} ${STAGEDIR}${DATADIR}/asdoc/templates
	${CP} -r ${WRKSRC}/asdoc/templates/ ${STAGEDIR}${DATADIR}/asdoc/templates/

	${MKDIR} ${STAGEDIR}${DOCSDIR}
	${CP} -r ${WRKSRC}/*.htm ${STAGEDIR}${DOCSDIR}/

.include <bsd.port.mk>
