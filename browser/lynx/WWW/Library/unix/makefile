#  Make WWW under unix for a.n.other unix system (bsd)
#   Use this as a template

# For W3 distribution, machine type for subdirectories
WWW_MACH = unix

# The ASIS repository's name for the machine we are on
ASIS_MACH = hardware/os

ECHO =		
LFLAGS =

prefix		= /usr/local
exec_prefix	= ${prefix}
top_srcdir	= ../../..
srcdir		= .

LYFLAGS		= # FIXME: set in parent makefile

CC		= gcc
DEFS		= -DHAVE_CONFIG_H
CPPFLAGS	= 
CPPOPTS		= $(DEFS) $(CPPFLAGS) $(LYFLAGS) \
		-I../../.. \
		-I../../../src \
		-I$(top_srcdir) \
		-I$(top_srcdir)/src \
		-I$(top_srcdir)/WWW/Library/Implementation
LY_CFLAGS	= -O2 
CFLAGS		= $(CPPOPTS) $(LY_CFLAGS)

# Directory for installed binary:
BINDIR		= ${exec_prefix}/bin

# Where is the W3 object library to be installed (not normally done)?
LIBDIR = $(WWW)/Library/Implementation/$(WWW_MACH)

#_________________ OK if normal W3 distribution
# Where is the WWW source root?
WWW = $(top_srcdir)/WWW

#  Where should temporary (object) files go?
WTMP = ../..

include $(WWW)/Library/Implementation/Version.make
include $(WWW)/Library/Implementation/CommonMakefile

# Override values set in CommonMakefile

RANLIB	= ranlib

all : $(LOB)/libwww.a

.SUFFIXES: .i .h .html

.c.o:
# compiling
	$(CC) $(CPPOPTS) $(CFLAGS) -c $(srcdir)/$*.c

.c.i:
# compiling
	$(CPP) -C $(CPPOPTS) $*.c >$@

depend :
	makedepend -fmakefile -- $(CFLAGS) -- $(CFILES)

# DO NOT DELETE THIS LINE -- make depend depends on it.
