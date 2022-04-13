# $NetBSD$

DISTNAME=	ueberzug-18.1.9
CATEGORIES=	local
MASTER_SITES=	${MASTER_SITE_GITHUB:=seebye/}

MAINTAINER=	david.pfeiffer@pm.me
HOMEPAGE=	https://github.com/seebye/ueberzug
COMMENT=	Command line util to display images in the terminal
LICENSE=	gnu-gpl-v3

PYTHON_VERSIONS_INCOMPATIBLE=	27

DEPENDS+=	${PYPKGPREFIX}-psutil>=5.8.0:../../sysutils/py-psutil
DEPENDS+=	${PYPKGPREFIX}-Pillow>=8.2.0:../../graphics/py-Pillow
DEPENDS+=	${PYPKGPREFIX}-docopt>=0.6.2:../../devel/py-docopt
DEPENDS+=	${PYPKGPREFIX}-attrs>=18.2.0:../../devel/py-attrs

WRKSRC=	${WRKDIR}/ueberzug-18.1.9

.include "../../x11/libXext/buildlink3.mk"
.include "../../x11/libXres/buildlink3.mk"
.include "../../lang/python/egg.mk"
.include "../../mk/bsd.pkg.mk"
