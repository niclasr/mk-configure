PATH.qux  :=	${.PARSEDIR:tA}

CPPFLAGS  +=	-I${OBJDIR_libs_qux}
DPLIBDIRS +=	libs/${PATH.qux:T}
LDADD0    +=	-lqux
