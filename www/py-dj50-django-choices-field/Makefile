PORTNAME=	django-choices-field
DISTVERSION=	2.3.0
CATEGORIES=	www python
MASTER_SITES=	PYPI
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}dj50-
DISTNAME=	django_choices_field-${DISTVERSION}

MAINTAINER=	kai@FreeBSD.org
COMMENT=	Django field that set/get TextChoices/IntegerChoices enumerations
WWW=		https://github.com/bellini666/django-choices-field

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

DEPRECATED=	Extended support of Django 5.0 ends April 2025, upgrade to the Django 5.1+ version of this port. See https://www.djangoproject.com/download/
EXPIRATION_DATE=2025-05-31

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}poetry-core>=1.0.0:devel/py-poetry-core@${PY_FLAVOR}
RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}django50>=3.2:www/py-django50@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}typing-extensions>=4.0.0:devel/py-typing-extensions@${PY_FLAVOR}

USES=		python:3.10+
USE_PYTHON=	autoplist pep517

CONFLICTS_INSTALL=	${PYTHON_PKGNAMEPREFIX}*${PORTNAME}

NO_ARCH=	yes

.include <bsd.port.mk>
