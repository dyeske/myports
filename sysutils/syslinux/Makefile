PORTNAME=	syslinux
PORTVERSION=	6.03
PORTREVISION=	1
CATEGORIES=	sysutils
MASTER_SITES=	KERNEL_ORG/linux/utils/boot/syslinux

MAINTAINER=	beastieboy@beastieboy.net
COMMENT=	Boot loader for the Linux operating system
WWW=		https://www.syslinux.org/

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

BUILD_DEPENDS=	nasm:devel/nasm
RUN_DEPENDS=	mtools:filesystems/mtools
LIB_DEPENDS=	libuuid.so:misc/libuuid

USES=		perl5 gmake tar:xz localbase
USE_PERL5=	build
CPPFLAGS+=	-I${LOCALBASE}/include
MAKE_ARGS=	CC="${CC}"
CFLAGS+=	-I${LOCALBASE}/include
ALL_TARGET=	bios

PLIST_FILES=	bin/syslinux \
				bin/isohybrid \
				bin/memdiskfind \
				bin/gethostip \
				share/man/man1/gethostip.1.gz \
				share/man/man1/memdiskfind.1.gz \
				share/man/man1/isohybrid.1.gz \
				share/man/man1/syslinux.1.gz
PORTDATA=	*

pre-patch:
	@(cd ${WRKSRC};							\
	${FIND} . -type f -exec ${GREP} -le 'elf_i386' \{\} \; |	\
		${XARGS} ${REINPLACE_CMD} -e 's/elf_i386/elf_i386_fbsd/g;' )

post-patch:
	@${REINPLACE_CMD} -e \
		's|^UMAKEDEPS|#UMAKEDEPS|' ${WRKSRC}/mk/syslinux.mk

do-install:
	${STRIP_CMD} ${WRKSRC}/bios/mtools/syslinux
	${STRIP_CMD} ${WRKSRC}/bios/utils/isohybrid
	${STRIP_CMD} ${WRKSRC}/bios/utils/memdiskfind
	${STRIP_CMD} ${WRKSRC}/bios/utils/gethostip
	${INSTALL_PROGRAM} ${WRKSRC}/bios/mtools/syslinux ${STAGEDIR}${PREFIX}/bin
	${INSTALL_PROGRAM} ${WRKSRC}/bios/utils/isohybrid ${STAGEDIR}${PREFIX}/bin
	${INSTALL_PROGRAM} ${WRKSRC}/bios/utils/memdiskfind ${STAGEDIR}${PREFIX}/bin
	${INSTALL_PROGRAM} ${WRKSRC}/bios/utils/gethostip ${STAGEDIR}${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/man/syslinux.1 ${STAGEDIR}${PREFIX}/share/man/man1
	${INSTALL_MAN} ${WRKSRC}/man/isohybrid.1 ${STAGEDIR}${PREFIX}/share/man/man1
	${INSTALL_MAN} ${WRKSRC}/man/memdiskfind.1 ${STAGEDIR}${PREFIX}/share/man/man1
	${INSTALL_MAN} ${WRKSRC}/man/gethostip.1 ${STAGEDIR}${PREFIX}/share/man/man1
	${FIND} -d ${WRKSRC} -type d -empty -delete
	${MKDIR} ${STAGEDIR}${DATADIR}
	(cd ${WRKSRC} && ${COPYTREE_SHARE} "bios efi32 efi64 utils" ${STAGEDIR}${DATADIR})

.include <bsd.port.mk>
