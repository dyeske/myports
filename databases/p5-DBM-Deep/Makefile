PORTNAME=	DBM-Deep
DISTVERSION=	2.0019
CATEGORIES=	databases perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	jmohacsi@bsd.hu
COMMENT=	Pure perl persistent multi-level hash/array DBM
WWW=		https://metacpan.org/release/DBM-Deep

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-FileHandle-Fmode>=0:devel/p5-FileHandle-Fmode
RUN_DEPENDS=	p5-FileHandle-Fmode>=0:devel/p5-FileHandle-Fmode
TEST_DEPENDS=	p5-Test-Deep>=0.095:devel/p5-Test-Deep \
		p5-Test-Exception>=0.21:devel/p5-Test-Exception \
		p5-Test-Pod>=1.14:devel/p5-Test-Pod \
		p5-Test-Pod-Coverage>=1.04:devel/p5-Test-Pod-Coverage \
		p5-Test-Warn>=0.08:devel/p5-Test-Warn

USES=		perl5
USE_PERL5=	configure
NO_ARCH=	yes

.include <bsd.port.mk>
