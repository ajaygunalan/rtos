INCLUDE_DIRS = 
LIB_DIRS = 
CC=gcc

NAME = threadCreateTerminate

CDEFS=
CFLAGS= -O3 $(INCLUDE_DIRS) $(CDEFS)
LIBS= 

HFILES= 
CFILES= ${NAME}.c

SRCS= ${HFILES} ${CFILES}
OBJS= ${CFILES:.c=.o}

all:	${NAME}

clean:
	-rm -f *.o *.d
	-rm -f perfmon ${NAME}

distclean:
	-rm -f *.o *.d
	-rm -f ${NAME}

${NAME}: ${NAME}.o
	$(CC) $(LDFLAGS) $(CFLAGS) -o $@ $@.o -lpthread

depend:

.c.o:
	$(CC) $(CFLAGS) -c $<