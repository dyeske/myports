PORTNAME=	git-sizer
DISTVERSIONPREFIX=	v
DISTVERSION=	3.3.3
CATEGORIES=	devel
MASTER_SITES=	https://github.com/github/git-sizer/archive/
DISTNAME=	b84ee4d41db733827387690506556739b0c02817

MAINTAINER=	dyeske@gmail.com
COMMENT=	Computes size metrics for a git repository
WWW=		https://github.com/github/git-sizer

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.md

USES=	go:1.21,modules gmake zip
WRKSRC=	${WRKDIR}/git-sizer-b84ee4d41db733827387690506556739b0c02817
BUILD_DEPENDS=	bash:shells/bash

PLIST_FILES=	bin/${PORTNAME}

post-extract:
	@${REINPLACE_CMD} -e 's|#!/bin/bash|#!/usr/bin/env bash|' \
		${WRKSRC}/script/go \
		${WRKSRC}/script/build \
		${WRKSRC}/script/cibuild \
		${WRKSRC}/script/bootstrap

do-build:
	(cd ${WRKSRC} && ${GMAKE})

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/bin/${PORTNAME} ${STAGEDIR}/${PREFIX}/bin

.include <bsd.port.mk>
