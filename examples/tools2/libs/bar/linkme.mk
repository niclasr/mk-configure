PATH.bar  :=	${.PARSEDIR:tA}

CPPFLAGS  +=	-I${PATH.bar}
DPLIBDIRS +=	libs/${PATH.bar:T}
LDADD0    +=	-lbar
