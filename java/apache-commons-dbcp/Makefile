PORTNAME=	commons-dbcp
PORTVERSION=	2.12.0
CATEGORIES=	java databases
MASTER_SITES=	https://archive.apache.org/dist/commons/dbcp/binaries/
PKGNAMEPREFIX=	apache-
DISTNAME=	${PORTNAME}2-${PORTVERSION}-bin

MAINTAINER=	ale@FreeBSD.org
COMMENT=	Apache Commons Database Connection Pool
WWW=		https://commons.apache.org/dbcp/

LICENSE=	APACHE20

RUN_DEPENDS=	${JAVALIBDIR}/commons-pool.jar:java/apache-commons-pool

USES=		java
JAVA_VERSION=	8

OPTIONS_DEFINE=	DOCS

NO_BUILD=	yes
NO_ARCH=	yes

WRKSRC=		${WRKDIR}/${PORTNAME}2-${PORTVERSION}
JARFILE=	${PORTNAME}2-${PORTVERSION}.jar
DOCFILES=	LICENSE.txt \
		NOTICE.txt \
		RELEASE-NOTES.txt

PORTDOCS=	*
PLIST_FILES=	${JAVAJARDIR}/${PORTNAME}.jar \
		${JAVAJARDIR}/${JARFILE}

.include <bsd.port.options.mk>

do-install:
	${INSTALL_DATA} ${WRKSRC}/${JARFILE} ${STAGEDIR}${JAVAJARDIR}
	${LN} -sf ${JARFILE} ${STAGEDIR}${JAVAJARDIR}/${PORTNAME}.jar
.if ${PORT_OPTIONS:MDOCS}
	cd ${WRKSRC} && ${COPYTREE_SHARE} apidocs ${STAGEDIR}${DOCSDIR}
.for FILE in ${DOCFILES}
	${INSTALL_MAN} ${WRKSRC}/${FILE} ${STAGEDIR}${DOCSDIR}
.endfor
.endif

.include <bsd.port.mk>
