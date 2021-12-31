# Created by: Sergei Kolobov <sergei@kolobov.com>


PORTNAME=	nxlog-ce
PORTVERSION=	2.11
PORTREVISION=	2190
PORTEPOCH=	1
CATEGORIES=	sysutils
MASTER_SITES=	https://nxlog.co/system/files/products/files/348/
# MASTER_SITES=	https://nxlog.co/system/files/products/files/348/nxlog-ce-2.11.2190.tar.gz
# MASTER_SITES=	https://nxlog.co/system/files/products/files/348/nxlog-ce-2.11.2190.tar.gz

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Modern syslogd replacement with PCRE support

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

# LIB_DEPENDS=	libpcre.so:devel/pcre

# USES=		pkgconfig tar:xz
# USE_RC_SUBR=	${PORTNAME}
# GNU_CONFIGURE=	yes
# CONFIGURE_ARGS=	--sysconfdir=${PREFIX}/etc

PORTDOCS=	AUTHORS NEWS README

OPTIONS_DEFINE=	DOCS UNICODE

UNICODE_CONFIGURE_WITH=	unicode

post-patch:
	@${REINPLACE_CMD} -e 's|/etc/|${PREFIX}/etc/|' ${WRKSRC}/man/*[58].in

post-install:
	${INSTALL_DATA} ${WRKSRC}/metalog.conf ${STAGEDIR}${PREFIX}/etc/metalog.conf.sample

post-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${PORTDOCS:S|^|${WRKSRC}/|} ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
