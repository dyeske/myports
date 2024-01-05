PORTNAME=	git-sizer
DISTVERSIONPREFIX=	v
DISTVERSION=	1.5.0
CATEGORIES=	devel

MAINTAINER=	dyeske@gmail.com
COMMENT=	Computes size metrics for a git repository
WWW=		https://github.com/github/git-sizer

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.md

USES=		go:1.21,modules gmake
USE_GITHUB=	yes
GH_ACCOUNT=	github
BUILD_DEPENDS=	bash:shells/bash

PLIST_FILES=	bin/${PORTNAME}

do-build:
	(cd ${WRKSRC} && ${GMAKE})

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/bin/${PORTNAME} ${STAGEDIR}/${PREFIX}/bin

.include <bsd.port.mk>
