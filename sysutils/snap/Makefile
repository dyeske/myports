PORTNAME=	snap
DISTVERSION=	1.01
PORTREVISION=	1
PORTEPOCH=	1
CATEGORIES=	sysutils
MASTER_SITES=	https://people.cs.nycu.edu.tw/~wchunhao/ports/snap/

MAINTAINER=	wchunhao@cs.nctu.edu.tw
COMMENT=	Tools for periodic and manual management of UFS2 snapshots
WWW=		https://people.cs.nycu.edu.tw/~wchunhao/ports/snap/

NO_BUILD=	yes
USES=		perl5 shebangfix
USE_PERL5=	run

PLIST_FILES=	sbin/snap etc/snap.conf share/man/man8/snap.8.gz
SHEBANG_FILES=	snap

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/snap ${STAGEDIR}${PREFIX}/sbin
	${INSTALL_MAN} ${WRKSRC}/snap.8 ${STAGEDIR}${PREFIX}/share/man/man8
	${INSTALL_DATA} ${WRKSRC}/snap.conf ${STAGEDIR}${PREFIX}/etc

.include <bsd.port.mk>
