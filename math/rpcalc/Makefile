PORTNAME=	rpcalc
PORTVERSION=	0.8.2
PORTREVISION=	11
CATEGORIES=	math
MASTER_SITES=	SF/${PORTNAME}/${PORTVERSION}

MAINTAINER=	jhale@FreeBSD.org
COMMENT=	Simple RPN calculator
WWW=		https://rpcalc.bellz.org/index.html

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/doc/LICENSE

USES=		pyqt:5 python shebangfix
USE_PYQT=	pyqt5

SHEBANG_FILES=	source/rpcalc.py

CONFIGURE_ARGS=	-p ${PREFIX} -d ${DOCSDIR} -i ${DATADIR}/icons -b ${STAGEDIR}
NO_ARCH=	yes
NO_BUILD=	yes
WRKSRC=		${WRKDIR}/rpCalc

do-install:
	(cd ${WRKSRC} && ${PYTHON_CMD} install.py ${CONFIGURE_ARGS})
	(cd ${STAGEDIR}${PREFIX} && \
		${PYTHON_CMD} -O ${PYTHON_LIBDIR}/compileall.py \
		-d ${DATADIR} -f ${DATADIR_REL})
	(cd ${STAGEDIR}${DOCSDIR} && ${RM} INSTALL LICENSE)

.include <bsd.port.mk>
