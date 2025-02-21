##makefile for lynx

SHELL		= /bin/sh

x		= 

.SUFFIXES:

prefix		= /usr/local
exec_prefix	= ${prefix}
srcdir		= .

CC		= gcc
CFLAGS		= -O2 
DEFS		= -DHAVE_CONFIG_H
CPPFLAGS	= 

LIBS		= -lcurses  

INSTALL		= /usr/bin/install -c
INSTALL_PROGRAM	= ${INSTALL}
INSTALL_DATA	= ${INSTALL} -m 644

## This is the version which we are developing (or, upon release, make this
## the same).  Use no dots in the name, since it must work on VMS and MS-DOS.
VERSION		= 2-8-1

##this is the name of the directory the lynx source code is in.
##(e.g. lynx2-8, not the full path)
lynxdir= lynx$(VERSION)
lynxname= lynx$(VERSION)

## Where you want lynx installed
bindir= ${exec_prefix}/bin

## Where you want the lynx man file installed
mandir= ${prefix}/man/man1

## Where you want the lynx.cfg file installed
libdir= ${exec_prefix}/lib

## Where you want the doc-files installed
docdir= ${exec_prefix}/lib/lynx_doc

## Where you want the help-files installed
helpdir= ${exec_prefix}/lib/lynx_help

##set the relative location of the WWW library Implementation directory,
##from this directory
##do not set this to be an absolute path!!!
WWWINC= WWW/Library/Implementation

## Path to gzip that will compress the help files.
## It will be used when --enable-gzip-help is set by configure.
## Leave *both* empty if you don't want to gzip help files.
COMPRESS_PROG=
COMPRESS_EXT=

# !!!!!!!!!!! SUN resolv LIBRARY !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
# To include resolv in the LIBS="" list for SUN 3, 4 or Solaris OS,
# point RESOLVLIB to that library.  You need this if you get the message
# "Alert!:  Unable to connect to remote host" whenever you try to
# access a host other than localhost and have made Lynx without it.
# See the PROBLEMS file for more information.
#RESOLVLIB= -lresolv

# !!!!!!!!!!!!!  DIRECT WAIS ACCESS !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
# If you are adding direct wais access you must fill in the
# location of wais.a, client.a and the standard math library, libm.a.
# You can pick up the most current freeWAIS sources from
#	ftp://ftp.cnidr.org/pub/NIDR.tools/freewais
# If you are using freeWAIS-0.202 or older, include -DDECLARE_WAIS_LOGFILES
# in your SITE_DEFS.
# Please put an ABSOLUTE address here if you want it to work!
#WAISLIB= ../../freeWAIS-0.202/bin/client.a ../../freeWAIS-0.202/bin/wais.a /usr/lib/libm.a

# !!!!!!!!!!!!! SLANG Support (For color version of Lynx). !!!!!!!!!!!!!!!!
# The slang library is an alternative to curses, developed by John E. Davis
# (davis@space.mit.edu).  Version 0.99-27 or higher is available from
#	ftp://space.mit.edu/pub/davis
# It provides color support for Lynx.

# !!!!!!!!!!!!! NCURSES Support (For color version of Lynx). !!!!!!!!!!!!!!
# If you need ncurses, the latest version can always be found
# in ftp://ftp.clark.net/pub/dickey/ncurses/
# or ftp://ftp.gnu.org/pub/gnu/

# Also be sure to check out the compilation symbols in userdefs.h
# before building Lynx!

# If you apply patches which require linking to site-specific libraries, set
# SITE_LIBS to those libraries.
SITE_LIBS= # Your libraries here

# Set SITE_LYDEFS to one or more of the defines for the WWW Library:
SITE_LYDEFS = # Your defines here

# Set SITE_DEFS to one or more of the defines for lynx below:
SITE_DEFS = # Your defines here

# defines for which there are no configure options:
# -DHP_TERMINAL    For DIM workaround to REVERSE problems on HP terminals.
# -DIGNORE_CTRL_C  Define if Control-C shouldn't exit lynx.
# -DNOPORT         if you must use PASV instead of PORT for FTP
# -DNO_CPU_LIMIT   Disables Max CPU timeout (includes CLOCKS_PER_SECOND)
# -DSHORTENED_RBIND  For a SOCKSified lynx with the short version of Rbind.
# -DSLANG_MBCS_HACK prevent cutoff lines when using UTF8 console (slang only)
#
# if you are linking to freeWAIS-0.202 or older, you should define this
# in SITE_DEFS
#
# -DDECLARE_WAIS_LOGFILES
#
# if you have the reverse clear screen problem of some SUN4 systems you
# should define this in SITE_DEFS
#
# -DREVERSE_CLEAR_SCREEN_PROBLEM
#
# if you have an SVR4 system with the "type any key" problem, try defining
# this in LYFLAGS (SITE_LYDEFS) and SITE_DEFS
#
# -DSVR4_BSDSELECT
#
# Old Data General systems may need this in their SITE_LYDEFS
# for their inet_addr(host) calls.
#
# -DDGUX_OLD

# defines which have configure options   (see INSTALLATION, Section II-1c.):
# -DARCHIVE_ONLY
# -DDIRED_SUPPORT
# -DDISP_PARTIAL
# -DDONT_TRACK_INTERNAL_LINKS
# -DEXEC_LINKS
# -DEXEC_SCRIPTS
# -DEXP_CHARTRANS_AUTOSWITCH
# -DEXP_PERSISTENT_COOKIES
# -DLINKEDSTYLES
# -DLONG_LIST
# -DLYNXCGI_LINKS
# -DLY_FIND_LEAKS
# -DNCURSES
# -DNO_CHANGE_EXECUTE_PERMS
# -DNO_EXTENDED_HTMLDTD
# -DOPTIONS_FORMS
# -DOPTIONS_MENU
# -DNO_PARENT_DIR_REFERENCE
# -DNSL_FORK
# -DOK_GZIP
# -DOK_OVERRIDE
# -DOK_PERMIT
# -DOK_TAR
# -DOK_UUDECODE
# -DOK_ZIP
# -DSOCKS
# -DSYSLOG_REQUESTED_URLS
# -DUNDERLINE_LINKS
# -DUSE_COLOR_STYLE
# -DUSE_DEFAULT_COLORS
# -DUSE_EXTERNALS
# -DUSE_HASH
# -DUSE_SLANG
# -DUSE_SOCKS5
# -DUSE_ZLIB
#
# for installation of local execution links, please see the file userdefs.h

# TESTED: Linux FreeBSD SunOS Solaris IRIX CLIX HP-UX AIX SCO
all lynx$x: cfg_defs.h LYHelp.h
	cd WWW/Library/unix && $(MAKE) CC="$(CC)" \
		LY_CFLAGS="$(CFLAGS)" \
		CPPFLAGS="$(CPPFLAGS)" \
		LYFLAGS="$(SITE_LYDEFS)"
	cd src && $(MAKE) all CC="$(CC)" \
		CFLAGS="$(CFLAGS)" \
		CPPFLAGS="$(CPPFLAGS)" \
		LIBS="$(LIBS) $(RESOLVLIB) $(WAISLIB) $(SITE_LIBS)" \
		SITE_DEFS="$(SITE_DEFS)" \
		WWWINC=$(WWWINC) \
		WWWLIB="../WWW/Library/unix/libwww.a"

help:
	@echo
	@echo "Please run make with one of the following arguments"
	@echo "all        -- to make the executable, put it in this directory"
	@echo "clean      -- removes all '.o' and 'core' files"
	@echo "depend     -- use makedepend to generate header-dependencies"
	@echo "tar        -- runs clean, removes executable, and tars the whole directory"
	@echo "compress   -- runs tar, then compresses the result"
	@echo "zip        -- runs clean, removes executable, and zips the whole directory"
	@echo

##Miscellaneous actions
clean:
	rm -f WWW/Library/*/*.[aob]
	rm -f WWW/Library/*/.created
	cd src && $(MAKE) clean
	rm -f *.b src/lynx$x core Lynx.leaks cfg_defs.h LYHelp.h

depend: cfg_defs.h LYHelp.h
	cd WWW/Library/unix && $(MAKE) $@
	cd src && $(MAKE) $@

distclean: clean
	-rm -f WWW/Library/*/*~
	-rm -f WWW/Library/*/*.bak
	-rm -rf src/obsolete
	-cd src && $(MAKE) $@
	-cd src/chrtrans && $(MAKE) $@
	-rm -f *~ *.bak *.sav
	-rm -f WWW/Library/unix/makefile src/makefile src/chrtrans/makefile
	#-find . -type f -name '*.rej' -exec -rm -f {} \;
	#-find . -type f -name '*.orig' -exec -rm -f {} \;
	#-rmdir WWW/Library/unix && rmdir WWW/Library && rmdir WWW
	#-rmdir src/chrtrans && rmdir src
	-rm -f makefile lynx_cfg.h config.status config.log config.cache
	-rm -f lynx$x install-*

maintainer-clean: distclean
	-rm -rf WWW/Library/*/obsolete
	-rm -f Lynx.prj .*_aux

tar:  clean
	rm -f lynx$x
	$(MAKE) save

turnover:	clean
	$(MAKE) save

zipcompress: compress zip
	echo "done!"

zip:  clean
	rm -f src/lynx$x
	rm -f lynx$x
	rm -f src/a.out
	rm -f ../$(lynxname).zip
	cd ..; rm -f $(lynxname).zip; zip -r $(lynxname).zip $(lynxdir)

save:
	cd ..; rm -f $(lynxname).tar; tar -cf - $(lynxdir) > $(lynxname).tar

compress: tar
	cd ..; rm -f $(lynxname).tar.Z; compress -f -v $(lynxname).tar

install: lynx$x install-bin install-man install-cfg 
	@echo
	@echo "Use $(MAKE) install-help to install the help-files"
	@echo "Use $(MAKE) install-doc to install extra documentation files"
	@echo

install-bin: $(bindir)
	-mv -f $(bindir)/lynx$x $(bindir)/lynx.old
	$(INSTALL_PROGRAM) lynx$x $(bindir)/

install-man : $(mandir)
	$(INSTALL_DATA) $(srcdir)/lynx.man $(mandir)/lynx.1

install-doc : $(docdir)
	@echo Copying sample files
	(cd $(srcdir) && tar cf - C[HO]* PROBLEMS README samples test ) | \
			       ( cd $(docdir) && tar xf - )
	-rm -f $(libdir)/lynx.tmp

# HPUX 'sed' does not seem to like '=' as pattern delimiter.
FIX_SED = tr '=' '%'
#FIX_SED = cat

install-help : $(helpdir)
	(cd $(helpdir) && rm -rf *)
	@echo Constructing sed-script
	sed	-e '/^#/d' -e '/^$$/d' \
		-e 's%\(.*\)=\(.*\@.*\)%s=@\1@=\2=g%' \
		-e 's%\(.*\)=\(http:.*\)%s=@\1@=\2=g%' \
		-e 's%\(.*\)=\(ftp:.*\)%s=@\1@=\2=g%' \
		-e 's%\(.*\)=\(.*\.html\)$$%s=@\1@=\2$(COMPRESS_EXT)=g%' \
		$(srcdir)/lynx_help/help_files.txt | $(FIX_SED) > \
		$(helpdir)/help_files.sed
	@echo Appending interim-fix for existing html files
	sed	-e '/^#/d' -e '/[:@]/d' -e '/^$$/d' \
		-e 's%\(.*\)=\(.*\.html\)$$%s=\2=\2$(COMPRESS_EXT)=g%' \
		-e 's%\.html=%\\.html=%' \
		$(srcdir)/lynx_help/help_files.txt | $(FIX_SED) >> \
		$(helpdir)/help_files.sed
	@echo Translating/copying html files
	sh -c	'cd $(srcdir)/lynx_help && ( \
		dirs=keystrokes; \
		(cd $(helpdir) && mkdir $$dirs 2>/dev/null ) ; \
		files="*.html */*.html" ; \
		for f in $$files ; do \
			sed -f $(helpdir)/help_files.sed $$f > $(helpdir)/$$f ; \
		done ; \
		if test "$(COMPRESS_PROG)" != "" ; then \
			(cd $(helpdir) && $(COMPRESS_PROG) $$files ) \
		fi ; \
		)'
	-rm -f $(helpdir)/help_files.sed
	@echo Updating $(libdir)/lynx.cfg 
	sh -c 'if test -f $(libdir)/lynx.cfg ; then \
		mv $(libdir)/lynx.cfg $(libdir)/lynx.tmp ; \
	else \
		cp $(srcdir)/lynx.cfg $(libdir)/lynx.tmp ; \
	fi'
	@echo Updating $(libdir)/lynx.cfg to point to installed help-files
	sed	-e '/^HELPFILE:http/s@^@#@' \
		-e '/^#HELPFILE:file/s@#@@' \
		-e '/^HELPFILE:file/s@/PATH_TO/lynx_help@$(helpdir)@' \
		-e '/^HELPFILE:file/s@$$@$(COMPRESS_EXT)@' \
		-e '/^HELPFILE:file/s@$(COMPRESS_EXT)$(COMPRESS_EXT)$$@$(COMPRESS_EXT)@' \
		$(libdir)/lynx.tmp >$(libdir)/lynx.cfg
	chmod 644 $(libdir)/lynx.cfg
	-rm -f $(libdir)/lynx.tmp

LYHelp.h : LYHelp.hin
	@echo Constructing sed-script
	sed	-e '/^#/d' -e '/^$$/d' \
		-e 's%\(.*\)=\(.*\@.*\)%s=@\1@=\2=g%' \
		-e 's%\(.*\)=\(http:.*\)%s=@\1@=\2=g%' \
		-e 's%\(.*\)=\(ftp:.*\)%s=@\1@=\2=g%' \
		-e 's%\(.*\)=\(.*\.html\)$$%s=@\1@=\2$(COMPRESS_EXT)=g%' \
		$(srcdir)/lynx_help/help_files.txt | $(FIX_SED) > \
		help_files.sed
	@echo Creating $@
	@sed -f help_files.sed $(srcdir)/LYHelp.hin > $@
	-@rm -f help_files.sed
	@echo '**********************************************'
	@echo
	@sh -c 'if test "$(COMPRESS_PROG)" = "" ; then \
		echo "       Help files will NOT be gzipped."; \
	else \
		echo "       Help links point to compressed files"; \
		echo "       To access them properly you have to type"; \
		echo "                 make install-help"; \
	fi'
	@echo
	@echo '**********************************************'

cfg_defs.h : $(srcdir)/cfg_defs.sh
	@rm -f $@
	sh $(srcdir)/cfg_defs.sh >$@

install-cfg : $(libdir)
	-mv -f $(libdir)/lynx.cfg $(libdir)/lynx.oldcfg
	$(INSTALL_DATA) $(srcdir)/lynx.cfg $(libdir)/lynx.cfg

install-lss : $(libdir)
	-mv -f $(libdir)/lynx.lss $(libdir)/lynx.oldlss
	$(INSTALL_DATA) $(srcdir)/samples/lynx.lss $(libdir)/lynx.lss

uninstall:
	-rm -f $(bindir)/lynx$x
	-rm -f $(mandir)/lynx.1
	-rm -f $(libdir)/lynx.cfg
	-rm -f $(libdir)/lynx.lss
	-rm -rf $(helpdir)
	-rm -rf $(docdir)

$(bindir) $(mandir) $(libdir) $(helpdir) $(docdir) :
	$(srcdir)/mkdirs.sh $@
