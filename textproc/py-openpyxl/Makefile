PORTNAME=	openpyxl
PORTVERSION=	3.1.1
PORTREVISION=	1
CATEGORIES=	textproc python
MASTER_SITES=	PYPI
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	antoine@FreeBSD.org
COMMENT=	Python library to read/write Excel 2007 xlsx/xlsm files
WWW=		https://foss.heptapod.net/openpyxl/openpyxl

LICENSE=	MIT

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}et_xmlfile>=0:textproc/py-et_xmlfile@${PY_FLAVOR}

NO_ARCH=	yes
USES=		cpe python
CPE_VENDOR=	python
USE_PYTHON=	distutils autoplist

.include <bsd.port.mk>
