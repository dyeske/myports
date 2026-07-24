PORTNAME=	vim-minimal
PORTVERSION=	8.2.2637
DISTVERSIONSUFFIX=	-26.el9_8.10
CATEGORIES=	editors

MAINTAINER=	dyeske@gmail.com
COMMENT=	Improved version of the vi editor (${FLAVOR:U} flavor)	
WWW=	https://www.vim.org/ \
		https://github.com/vim/vim

LICENSE=        VIM
LICENSE_NAME=   VIM License
LICENSE_PERMS=  dist-mirror dist-sell pkg-mirror pkg-sell auto-accept
LICENSE_TEXT=	Vim is charityware. Its license is GPL-compatible, so it's distributed freely, but we ask that if you find it useful you make a donation to help children in Uganda through the Kuwasha charity

SRC_DISTFILES=
USES=		linux:rl9
USE_LDCONFIG=   yes
USE_LINUX_RPM=  yes
ONLY_FOR_ARCHS= amd64
ONLY_FOR_ARCHS_REASON=	maintainer was low on time

.include <bsd.port.mk>
