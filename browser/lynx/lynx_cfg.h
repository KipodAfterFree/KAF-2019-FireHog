/* lynx_cfg.h.  Generated automatically by configure.  */
/* The configure script translates "config.hin" into "lynx_cfg.h" */
#ifndef LYNX_CFG_H
#define LYNX_CFG_H 1

#define ALT_CHAR_SET acs_map		/* CF_ALT_CHAR_SET */
/* #undef ARCHIVE_ONLY */		/* CF_ARG_DISABLE(dired-archive) */
#define CHMOD_PATH "/usr/bin/chmod"		/* CF_PATH_PROG(chmod) */
#define COLOR_CURSES 1		/* defined by CF_COLOR_CURSES */
#define COMPRESS_PATH "compress"		/* CF_PATH_PROG(compress) */
#define COPY_PATH "/usr/bin/cp"		/* CF_PATH_PROG(cp) */
/* #undef CURS_PERFORMANCE */		/* CF_CURS_PERFORMANCE */
/* #undef DEBUG */			/* configure --enable-debug */
/* #undef DECL_GETGRGID */
/* #undef DECL_GETGRNAM */
/* #undef DECL_STRSTR */
/* #undef DECL_SYS_ERRLIST */
#define DIRED_SUPPORT 1		/* AC_ARG_WITH(dired) */
#define DISP_PARTIAL 1		/* CF_ARG_ENABLE(partial) */
#define DONT_TRACK_INTERNAL_LINKS 1 /* CF_ARG_DISABLE(internal-links) */
/* #undef EXEC_LINKS */		/* CF_ARG_ENABLE(exec-links) */
/* #undef EXEC_SCRIPTS */		/* CF_ARG_ENABLE(exec-scripts) */
/* #undef EXP_CHARTRANS_AUTOSWITCH */	/* AC_ARG_ENABLE(font-switch) */
/* #undef EXP_PERSISTENT_COOKIES */	/* AC_ARG_ENABLE(persistent-cookies) */
#define FANCY_CURSES 1		/* defined by CF_FANCY_CURSES */
/* #undef GCC_UNUSED */		/* CF_GCC_ATTRIBUTES */
#define GETGROUPS_T gid_t		/* AC_TYPE_GETGROUPS */
#define GZIP_PATH "/usr/bin/gzip"		/* CF_PATH_PROG(gzip) */
#define HAVE_CBREAK 1
/* #undef HAVE_CURSESX_H */
#define HAVE_CUSERID 1
#define HAVE_DEFINE_KEY 1
#define HAVE_DIRENT_H 1		/* defined by AC_HEADER_DIRENT */
#define HAVE_FCNTL_H 1		/* have <fcntl.h> */
#define HAVE_GETBKGD 1		/* defined by CF_COLOR_CURSES */
#define HAVE_GETCWD 1
#define HAVE_GETGROUPS 1
/* #undef HAVE_JCURSES_H */
#define HAVE_KEYPAD 1
#define HAVE_LIMITS_H 1
#define HAVE_LSTAT 1		/* defined by CF_FUNC_LSTAT */
/* #undef HAVE_NCURSES_H */		/* defined if we include <ncurses.h> */
#define HAVE_PUTENV 1
#define HAVE_READDIR 1
#define HAVE_SIZECHANGE 1		/* defined by CF_SIZECHANGE */
#define HAVE_STDLIB_H 1
#define HAVE_STRERROR 1
#define HAVE_STRING_H 1
/* #undef HAVE_SYS_DIR_H */		/* defined by AC_HEADER_DIRENT */
#define HAVE_SYS_FCNTL_H 1		/* have <sys/fcntl.h> */
/* #undef HAVE_SYS_FILIO_H */		/* have <sys/filio.h> */
#define HAVE_SYS_IOCTL_H 1		/* have <sys/ioctl.h> */
/* #undef HAVE_SYS_NDIR_H */		/* defined by AC_HEADER_DIRENT */
#define HAVE_SYS_WAIT_H 1		/* have <sys/wait.h> */
#define HAVE_TERMIOS_H 1		/* have <termios.h> */
#define HAVE_TERMIO_H 1		/* have <termio.h> */
#define HAVE_TTYTYPE 1
/* #undef HAVE_TYPE_UNIONWAIT */	/* CF_UNION_WAIT */
#define HAVE_UNISTD_H 1		/* have <unistd.h> */
#define HAVE_USE_DEFAULT_COLORS 1	/* ncurses extension */
#define HAVE_UTMP 1
#define HAVE_WAITPID 1
#define HAVE_WBORDER 1
/* #undef IGNORE_CTRL_C */		/* FIXME: make tests? */
/* #undef INSTALL_ARGS */		/* CF_PATH_PROG(install) */
#define INSTALL_PATH "/usr/bin/install -c"		/* CF_PATH_PROG(install) */
/* #undef LINKEDSTYLES */		/* see USE_COLOR_STYLE */
/* #undef LINUX */			/* FIXME: make tests? */
#define LOCALE 1			/* for locale support */
#define LONG_LIST 1		/* CF_ARG_DISABLE(long-list) */
/* #undef LYNXCGI_LINKS */		/* CF_ARG_ENABLE(cgi-links) */
#define LYNX_CFG_FILE "/usr/local/lib/lynx.cfg"		/* $libdir/lynx.cfg */
/* #undef LYNX_LSS_FILE */		/* $libdir/lynx.lss */
/* #undef LY_FIND_LEAKS */		/* configure --disable-leaks */
#define MKDIR_PATH "/usr/bin/mkdir"		/* CF_PATH_PROG(mkdir) */
#define MV_PATH "/usr/bin/mv"			/* CF_PATH_PROG(mv) */
/* #undef NCURSES */			/* defined for ncurses support */
/* #undef NCURSES_BROKEN */		/* defined for ncurses color support */
/* #undef NEED_PTEM_H */		/* defined by CF_SIZECHANGE */
/* #undef NEED_REMOVE */		/* defined by CF_REMOVE_BROKEN */
/* #undef NGROUPS */			/* defined by CF_NGROUPS */
/* #undef NO_CHANGE_EXECUTE_PERMS */	/* CF_ARG_DISABLE(dired-xpermit) */
/* #undef NO_CONFIG_INFO */		/* CF_ARG_DISABLE(config-info) */
/* #undef NO_EXTENDED_HTMLDTD */	/* CF_ARG_DISABLE(extended-dtd) */
/* #undef NO_OPTION_FORMS */		/* CF_ARG_DISABLE(forms-options) */
/* #undef NO_OPTION_MENU */		/* CF_ARG_DISABLE(option-menu) */
/* #undef NO_PARENT_DIR_REFERENCE */	/* configure --disable-parent-dir */
/* #undef NSL_FORK */			/* CF_ARG_ENABLE(nsl-fork) */
#define OK_GZIP 1			/* CF_ARG_DISABLE(dired-gzip) */
#define OK_OVERRIDE 1		/* CF_ARG_DISABLE(dired-override) */
#define OK_PERMIT 1		/* CF_ARG_DISABLE(dired-permit) */
#define OK_TAR 1			/* CF_ARG_DISABLE(dired-tar) */
#define OK_UUDECODE 1		/* CF_ARG_DISABLE(dired-uudecode) */
#define OK_ZIP 1			/* CF_ARG_DISABLE(dired-zip) */
#define RM_PATH "/usr/bin/rm"			/* CF_PATH_PROG(rm) */
/* #undef SOCKS */			/* CF_SOCKS, CF_SOCKS5 */
#define STDC_HEADERS 1
/* #undef SYSLOG_REQUESTED_URLS */	/* CF_ARG_ENABLE(syslog) */
#define SYSTEM_MAIL "unknown"		/* CF_DEFINE_PROG */
#define SYSTEM_MAIL_FLAGS "-t -oi"	/* defined by CF_SYSTEM_MAIL_FLAGS */
#define TAR_PATH "/usr/bin/tar"			/* CF_PATH_PROG(tar) */
#define TERMIO_AND_CURSES 1	/* CF_TERMIO_AND_CURSES workaround */
/* #undef TERMIO_AND_TERMIOS */	/* CF_TERMIO_AND_TERMIOS workaround */
#define TOUCH_PATH "/usr/bin/touch"		/* CF_PATH_PROG(touch) */
/* #undef ULTRIX */			/* config.sub */
#define UNCOMPRESS_PATH "/usr/bin/gunzip"		/* CF_PATH_PROG(gunzip) */
/* #undef UNDERLINE_LINKS */		/* CF_ARG_ENABLE(underlines) */
#define UNIX 1
#define UNZIP_PATH "/usr/bin/unzip"		/* CF_PATH_PROG(unzip) */
/* #undef USE_COLOR_STYLE */		/* CF_ARG_ENABLE(color-style) */
/* #undef USE_DEFAULT_COLORS */	/* CF_ARG_ENABLE(default-colors) */
#define USE_EXTERNALS 1		/* CF_ARG_ENABLE(externs) */
/* #undef USE_FCNTL */		/* CF_FIONBIO */
/* #undef USE_HASH */			/* see USE_COLOR_STYLE */
/* #undef USE_SIZECHANGEHACK */	/* FIXME: find a case where this works! */
/* #undef USE_SLANG */		/* AC_ARG_WITH(screen=slang) */
/* #undef USE_SOCKS4_PREFIX */	/* CF_SOCKS5 */
/* #undef USE_SOCKS5 */		/* CF_SOCKS5 */
/* #undef USE_ZLIB */			/* AC_ARG_WITH(zlib) */
/* #undef UTMPX_FOR_UTMP */		/* use <utmpx.h> since <utmp.h> not found */
#define UUDECODE_PATH "uudecode"		/* CF_PATH_PROG(uudecode) */
/* #undef WAITPID_USES_UNION */	/* CF_FUNC_WAIT */
/* #undef WAIT_USES_UNION */		/* CF_FUNC_WAIT */
#define ZCAT_PATH "/usr/bin/zcat"		/* CF_PATH_PROG(zcat) */
#define ZIP_PATH "/usr/bin/zip"			/* CF_PATH_PROG(zip) */
/* #undef _ALL_SOURCE */		/* AC_AIX */
/* #undef const */			/* defined by AC_C_CONST */
/* #undef mode_t */			/* defined by AC_TYPE_MODE_T */
/* #undef pid_t */			/* defined by AC_TYPE_PID_T */
/* #undef uid_t */			/* defined by AC_TYPE_UID_T */
/* #undef vfork */			/* defined by AC_FUNC_FORK */

/* FIXME:ALLOW_USERS_TO_CHANGE_EXEC_WITHIN_OPTIONS */
/* FIXME:DECLARE_WAIS_LOGFILES */
/* FIXME:DGUX */
/* FIXME:DGUX_OLD */
/* FIXME:HP_TERMINAL */
/* FIXME:NOPORT */
/* FIXME:POSIX_JC */
/* FIXME:REVERSE_CLEAR_SCREEN_PROBLEM */
/* FIXME:SHORTENED_RBIND */
/* FIXME:SNAKE */
/* FIXME:SVR4_BSDSELECT */

/* Some older socks libraries, especially AIX need special definitions */
#if defined(_AIX) && !defined(USE_SOCKS5)
/* #undef accept */
/* #undef bind */
/* #undef connect */
/* #undef getpeername */
/* #undef getsockname */
/* #undef listen */
/* #undef recvfrom */
/* #undef select */
#endif

#ifndef HAVE_LSTAT
#define lstat stat
#endif

#ifdef DECL_GETGRGID
extern struct group * getgrgid ();
#endif

#ifdef DECL_GETGRNAM
extern struct group * getgrnam ();
#endif

#ifdef DECL_STRSTR
extern char * strstr ();
#endif

#endif /* LYNX_CFG_H */
