PORTNAME=	Data-ObjectDriver
PORTVERSION=	0.25
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Simple, transparent data interface, with caching
WWW=		https://metacpan.org/release/Data-ObjectDriver

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Class-Accessor>=0:devel/p5-Class-Accessor \
		p5-Class-Data-Inheritable>=0:devel/p5-Class-Data-Inheritable \
		p5-Class-Trigger>=0:devel/p5-Class-Trigger \
		p5-DBI>=0:databases/p5-DBI \
		p5-Text-SimpleTable>=0:textproc/p5-Text-SimpleTable
TEST_DEPENDS=	p5-DBD-SQLite>=0:databases/p5-DBD-SQLite \
		p5-Test-Exception>=0:devel/p5-Test-Exception

USES=		perl5
USE_PERL5=	modbuildtiny

NO_ARCH=	yes

.include <bsd.port.mk>
