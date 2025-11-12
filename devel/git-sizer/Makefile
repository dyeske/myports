PORTNAME=	git-sizer
DISTVERSIONPREFIX=	v
DISTVERSION=	1.5.0
CATEGORIES=	devel

MAINTAINER=	dyeske@gmail.com
COMMENT=	Computes size metrics for a git repository
WWW=		https://github.com/github/git-sizer

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.md

BUILD_DEPENDS=	bash:shells/bash

USES=		go:modules gmake
USE_GITHUB=	yes
GH_ACCOUNT=	github

GH_TUPLE=	\
	cli:safeexec:v1.0.0:cli_safeexec/vendor/github.com/cli/safeexec \
	davecgh:go-spew:v1.1.1:davecgh_go_spew/vendor/github.com/davecgh/go-spew \
	go-yaml:yaml:9f266ea9e77c:go_yaml_yaml/vendor/gopkg.in/yaml.v3 \
	golang:sync:036812b2e83c:golang_sync/vendor/golang.org/x/sync \
	pmezard:go-difflib:v1.0.0:pmezard_go_difflib/vendor/github.com/pmezard/go-difflib \
	spf13:pflag:v1.0.5:spf13_pflag/vendor/github.com/spf13/pflag \
	stretchr:testify:v1.7.0:stretchr_testify/vendor/github.com/stretchr/testify \
	uber-go:goleak:v1.1.12:uber_go_goleak/vendor/go.uber.org/goleak

PLIST_FILES=	bin/${PORTNAME}

do-build:
	(cd ${WRKSRC} && ${GMAKE})

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/bin/${PORTNAME} ${STAGEDIR}/${PREFIX}/bin

.include <bsd.port.mk>
