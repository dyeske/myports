PORTNAME=	envconsul
DISTVERSIONPREFIX=	v
DISTVERSION=	0.13.3
PORTREVISION=	3
CATEGORIES=	sysutils

MAINTAINER=	bofh@FreeBSD.org
COMMENT=	Populate values from Consul into a process environment
WWW=		https://github.com/hashicorp/envconsul

LICENSE=	MPL20
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		go:1.22,modules

GO_MODULE=	github.com/hashicorp/${PORTNAME}
GO_BUILDFLAGS=	-ldflags='\
		-s -w \
		-X github.com/hashicorp/envconsul/version.Name=${PORTNAME} \
		-X github.com/hashicorp/envconsul/version.GitCommit=${GHTAG}'

PLIST_FILES=	bin/envconsul
PORTDOCS=	README.md

OPTIONS_DEFINE=	DOCS

GHTAG=	3f77deb

post-install-DOCS-on:
	${MKDIR} ${STAGEDIR}${DOCSDIR}
.for doc in ${PORTDOCS}
	${CP} ${WRKSRC}/${doc} ${STAGEDIR}${DOCSDIR}
.endfor

.include <bsd.port.mk>
