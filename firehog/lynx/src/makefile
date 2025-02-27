# template-makefile for Lynx src directory

SHELL = /bin/sh

x		= 


prefix		= /usr/local
exec_prefix	= ${prefix}
top_srcdir	= ..
srcdir		= .

# Symbols which the configure script can set in each makefile:
CC		= gcc
CPP		= gcc -E
CFLAGS		= -O2 
DEFS		= -DHAVE_CONFIG_H
CPPFLAGS	= 

LIBS		= -lcurses   $(RESOLVLIB) $(WAISLIB) $(SITE_LIBS)
LDFLAGS		= 

# Symbols inherited from the top-level makefile
RESOLVLIB	= # FIXME: set in parent makefile
SITE_DEFS	= # FIXME: set in parent makefile
SITE_LIBS	= # FIXME: set in parent makefile
WAISLIB		= # FIXME: set in parent makefile

WWWINC		= WWW/Library/Implementation
WWWLIB		= ../WWW/Library/unix/libwww.a

CPP_OPTS	= $(DEFS) $(CPPFLAGS) \
		-I. \
		-I.. \
		-Ichrtrans \
		-I$(srcdir)/chrtrans \
		-I$(top_srcdir) \
		-I$(top_srcdir)/src \
		-I$(top_srcdir)/$(WWWINC) \
		$(SITE_DEFS)
CC_OPTS		= $(CPP_OPTS) $(CFLAGS)

LINT		= 
LINTOPTS	=

COMPRESS_PROG	=
COMPRESS_EXT	=

CHARTRANS_OBJS=UCdomap.o UCAux.o UCAuto.o
OBJS=  LYClean.o LYShowInfo.o LYEdit.o LYStrings.o \
LYMail.o HTAlert.o GridText.o LYGetFile.o \
LYMain.o LYMainLoop.o LYCurses.o LYBookmark.o LYUtils.o \
LYOptions.o LYReadCFG.o LYSearch.o LYHistory.o \
LYForms.o LYPrint.o LYrcFile.o LYDownload.o LYNews.o LYKeymap.o \
HTML.o HTFWriter.o HTInit.o DefaultStyle.o LYLocal.o LYUpload.o \
LYLeaks.o LYexit.o LYJump.o LYList.o LYCgi.o LYTraversal.o \
LYEditmap.o LYCharSets.o LYCharUtils.o LYMap.o LYCookie.o LYExtern.o \
LYStyle.o LYHash.o $(CHARTRANS_OBJS) 

C_SRC	= $(OBJS:.o=.c)

all: lynx$x

.SUFFIXES : .i

.c.o:
# compiling
	$(CC) $(CC_OPTS) -c $(srcdir)/$*.c

.c.i:
# compiling
	$(CPP) -C $(CPP_OPTS) $*.c >$@

lynx$x:   message do_chartrans_stuff ../LYHelp.h $(OBJS) $(WWWLIB)
	@echo "Linking and creating Lynx executable"
	$(CC) $(CC_OPTS) $(LDFLAGS) -o $@  $(OBJS) $(WWWLIB) $(LIBS)
	@echo "Copying Lynx executable into top-level directory"
	cp $@ ..
	@echo "Welcome to Lynx!"

message:
	@echo "Compiling Lynx sources"

do_chartrans_stuff:
	-cd chrtrans && $(MAKE) \
		SITE_DEFS="$(SITE_DEFS)" \
		CFLAGS="$(CFLAGS)" \
		CPPFLAGS="$(CPPFLAGS)" \
		CC="$(CC)" tables

lint:
	$(LINT) $(LINTOPTS) $(CPP_OPTS) *.c  > ../lint.out

clean:
	rm -f lynx$x core *.[ob] *.bak
	cd chrtrans && $(MAKE) clean

distclean: clean

LYMain.o: ../userdefs.h
LYMainLoop.o: ../userdefs.h
LYReadCFG.o: ../userdefs.h
HTFWriter.o: ../userdefs.h
LYGetFile.o: ../userdefs.h
LYOptions.o: ../userdefs.h
LYReadCFG.o: ../userdefs.h
LYrcFile.o: ../userdefs.h
LYMail.o: ../userdefs.h
LYUtils.o: ../userdefs.h
HTInit.o: ../userdefs.h
LYTraversal.o: ../userdefs.h
LYMail.o: ../userdefs.h
LYCharSets.o: ../userdefs.h
LYShowInfo.o: ../cfg_defs.h

CHRTR= chrtrans/

TABLES= \
 $(CHRTR)cp1250_uni.h \
 $(CHRTR)cp1251_uni.h \
 $(CHRTR)cp1252_uni.h \
 $(CHRTR)cp1253_uni.h \
 $(CHRTR)cp1255_uni.h \
 $(CHRTR)cp1256_uni.h \
 $(CHRTR)cp1257_uni.h \
 $(CHRTR)cp437_uni.h \
 $(CHRTR)cp737_uni.h \
 $(CHRTR)cp775_uni.h \
 $(CHRTR)cp850_uni.h \
 $(CHRTR)cp852_uni.h \
 $(CHRTR)cp862_uni.h \
 $(CHRTR)cp864_uni.h \
 $(CHRTR)cp866_uni.h \
 $(CHRTR)cp869_uni.h \
 $(CHRTR)def7_uni.h \
 $(CHRTR)dmcs_uni.h \
 $(CHRTR)iso01_uni.h \
 $(CHRTR)iso02_uni.h \
 $(CHRTR)iso03_uni.h \
 $(CHRTR)iso04_uni.h \
 $(CHRTR)iso05_uni.h \
 $(CHRTR)iso06_uni.h \
 $(CHRTR)iso07_uni.h \
 $(CHRTR)iso08_uni.h \
 $(CHRTR)iso09_uni.h \
 $(CHRTR)iso10_uni.h \
 $(CHRTR)koi8r_uni.h \
 $(CHRTR)mac_uni.h \
 $(CHRTR)mnem_suni.h \
 $(CHRTR)mnem2_suni.h \
 $(CHRTR)next_uni.h \
 $(CHRTR)rfc_suni.h \
 $(CHRTR)utf8_uni.h \
 $(CHRTR)viscii_uni.h

CMN=../WWW/Library/Implementation/

$(TABLES):
	-cd chrtrans && $(MAKE) tables

UCdomap.o: UCdomap.c chrtrans/UCkd.h chrtrans/makeuctb chrtrans/makeuctb.c \
                 UCdomap.h $(CMN)UCMap.h $(TABLES) ../userdefs.h

UCAux.o : UCAux.c $(CMN)UCAux.h $(CMN)UCDefs.h
LYCookie.o: ../userdefs.h

depend : $(TABLES)
	makedepend -fmakefile -- $(CC_OPTS) -- $(C_SRC)

# DO NOT DELETE THIS LINE -- make depend depends on it.
