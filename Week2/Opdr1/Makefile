PROGNAME=a

MKDIR=mkdir
PACK=tar -jcvf
CC=gcc
CFLAGS=-std=gnu99
AFLAGS=-lm
CP=cp
RM=rm -rf
OFILES=$(subst .c,.o,$(wildcard *.c))

$(PROGNAME): $(OFILES)
	$(CC) $(CFLAGS) $(OFILES) -o $(PROGNAME) ${AFLAGS}

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) *.o $(PROGNAME) $(PROGNAME).tbz

tarball: $(PROGNAME)
	$(MAKE) clean
	$(MKDIR) $(PROGNAME)
	$(CP) * $(PROGNAME) || true
	$(PACK) $(PROGNAME).tbz $(PROGNAME)/*
	$(RM) $(PROGNAME)

run: ${PROGNAME} 
	./${PROGNAME} 