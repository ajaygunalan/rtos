INCLUDE_DIRS = 
LIB_DIRS = 
CC=gcc

NAME = threadAffinity

CDEFS=
CFLAGS= -O0 -g $(INCLUDE_DIRS) $(CDEFS)
LIBS= 

HFILES= 
CFILES= ${NAME}.c

SRCS= ${HFILES} ${CFILES}
OBJS= ${CFILES:.c=.o}

all:	${NAME}

clean:
	-rm -f *.o *.d
	-rm -f pthread

${NAME}: ${NAME}.o
	$(CC) $(LDFLAGS) $(CFLAGS) -o $@ $@.o -lpthread

depend:

.c.o:
	$(CC) $(CFLAGS) -c $<
