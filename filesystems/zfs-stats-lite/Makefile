PORTNAME=	zfs-stats-lite
PORTVERSION=	1.4
CATEGORIES=	filesystems sysutils
MASTER_SITES=	http://druidbsd.sourceforge.net/download/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Display human-readable ZFS statistics
WWW=		https://druidbsd.sourceforge.net/download.shtml #zfs-stats-lite

LICENSE=	BSD2CLAUSE

CONFLICTS_INSTALL=	zfs-stats

NO_BUILD=	yes
NO_ARCH=	yes

PLIST_FILES=	bin/zfs-stats

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/zfs-stats ${STAGEDIR}${PREFIX}/bin/zfs-stats

.include <bsd.port.mk>
