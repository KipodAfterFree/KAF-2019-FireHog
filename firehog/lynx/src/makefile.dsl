OBJS= UCdomap.o UCAux.o UCAuto.o \
LYClean.o LYShowInfo.o LYEdit.o LYStrings.o \
LYMail.o HTAlert.o GridText.o LYGetFile.o \
LYMain.o LYMainLoop.o LYCurses.o LYBookmark.o LYUtils.o \
LYOptions.o LYReadCFG.o LYSearch.o LYHistory.o \
LYForms.o LYPrint.o LYrcFile.o LYDownload.o LYNews.o LYKeymap.o \
HTML.o HTFWriter.o HTInit.o DefaultStyle.o LYLocal.o LYUpload.o \
LYLeaks.o LYexit.o LYJump.o LYList.o LYCgi.o LYTraversal.o \
LYEditmap.o LYCharSets.o LYCharUtils.o LYMap.o LYCookie.o LYExtern.o \
LYStyle.o LYHash.o

CFLAGS= $(MCFLAGS) -I. -I.. $(SLANGINC)

CC = gcc
MCFLAGS = -O3 -DDISP_PARTIAL -DUSE_ZLIB -DUSE_EXTERNALS \
-DUSE_SLANG -DDJGPP_KEYHANDLER -DACCESS_AUTH -DNO_CUSERID \
-DNOUSERS -DDOSPATH -DNO_TTYTYPE -DNO_UTMP -I../WWW/library/implement -I../djgpp/tcplib/include \
-I./chrtrans -I../djgpp/tcplib/include/tcp
WWWLIB = ../WWW/library/djgpp/libwww.a ../djgpp/tcplib/obj/libtcp.a
LIBS= -lslang -lz
CHRTR= ./chrtrans/

all: lynx.exe

lynx.exe:   message $(OBJS) $(WWWLIB)
	@echo "Linking and creating Lynx executable"
	$(CC) $(CFLAGS) -o lynx.exe  $(OBJS) $(WWWLIB) $(SLANGLIB) $(LIBS)
	@echo "Welcome to Lynx!"

message:
	@echo "Compiling Lynx sources"

dbg:    $(OBJS) $(WWWLIB)
	@echo "Making Lynx code"
	$(CC) $(OBJS) $(CFLAGS) $(WWWLIB) $(SLANGLIB) $(LIBS)

lint:
	lint *.c  > ../lint.out

clean:
	rm -f lynx.exe core *.[ob]

LYMain.o: ../userdefs.h
LYMainLoop.o: LYMainLoop.c ../userdefs.h
LYReadCFG.o: LYReadCFG.c ../userdefs.h
HTFWriter.o: HTFWriter.c ../userdefs.h
LYGetFile.o: LYGetFile.c ../userdefs.h
LYOptions.o: LYOptions.c ../userdefs.h
LYReadCFG.o: LYReadCFG.c ../userdefs.h
LYTraversal.o: LYTraversal.c ../userdefs.h
LYCharSets.o: LYCharSets.c ../userdefs.h
LYShowInfo.o: LYShowInfo.c ../userdefs.h
LYStrings.o: LYStrings.c ../userdefs.h
LYBookmark.o: LYBookmark.c ../userdefs.h
LYHistory.o: LYHistory.c ../userdefs.h
LYDownload.o: LYDownload.c ../userdefs.h
DefaultStyle.o: DefaultStyle.c ../userdefs.h
LYEditmap.o: LYEditmap.c ../userdefs.h
LYCharUtils.o: LYCharUtils.c ../userdefs.h
LYExtern.o: LYExtern.c ../userdefs.h
LYUtils.o: LYUtils.c ../userdefs.h
LYCookie.o: ../userdefs.h
