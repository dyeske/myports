PORTNAME=	git-sizer
DISTVERSION=	1.5.0
DISTVERSIONPREFIX=	v
CATEGORIES=	devel

MAINTAINER=	dyeske@gmail.com
COMMENT=	computes size metrics for a git repository

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.md

USES=		go:modules gmake
USE_GITHUB=	yes
GH_ACCOUNT=	github
BUILD_DEPENDS=	bash:shells/bash

PLIST_FILES=	bin/${PORTNAME}

do-build:
	(cd ${WRKSRC} && ${GMAKE})

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/bin/${PORTNAME} ${STAGEDIR}/${PREFIX}/bin

.include <bsd.port.mk>
