PORTNAME=	Gtk2-ImageView
PORTVERSION=	0.05
PORTREVISION=	9
CATEGORIES=	x11-toolkits perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:RATCLIFFE
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl bindings to the GtkImageView image viewer widget
WWW=		https://metacpan.org/release/Gtk2-ImageView

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Cairo>=0:graphics/p5-Cairo \
		p5-ExtUtils-Depends>=0.2:devel/p5-ExtUtils-Depends	\
		p5-ExtUtils-PkgConfig>=1.03:devel/p5-ExtUtils-PkgConfig \
		p5-Gtk2>=1.140:x11-toolkits/p5-Gtk2
LIB_DEPENDS=	libgtkimageview.so:x11-toolkits/gtkimageview

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
