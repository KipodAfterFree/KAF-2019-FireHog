/*
 * Lynx - Hypertext navigation system
 *
 *   (c) Copyright 1992, 1993, 1994 University of Kansas
 *	 1995, 1996: GNU General Public License
 */
#ifndef LYMESSAGES_EN_H
#define LYMESSAGES_EN_H

/*******************************************************************
 * The following definitions are for status line prompts, messages,
 * or warnings issued by Lynx during program execution.  You can
 * modify them to make them more appropriate for you site, and/or
 * to use other languages.  Links to collections of alternate
 * definitions, developed by the Lynx User Community, are maintained
 * in Lynx links:
 *
 *    http://www.crl.com/~subir/lynx.html
 *
 * You can substitute one of those as LYMessages_en.h, or modify
 * the header inclusion statement in your userdefs.h to include
 * one of those with a different name.
 */
#define REALLY_QUIT_Y ""
#define REALLY_QUIT_N ""
#ifdef VMS
#define REALLY_EXIT_Y ""
#define REALLY_EXIT_N ""
#endif /* VMS */
#define CANCELLED ""
#define CANCELLING ""
#define NO_CANCEL ""
#define OPERATION_DONE ""
#define BAD_REQUEST ""
#define PREVIOUS ""
#define NEXT_SCREEN ""
#define HELP \
 ""
#define MOREHELP \
 ""
#define MORE ""

/* Forms messages */
#define FORM_LINK_TEXT_MESSAGE \
 ""
#define FORM_LINK_TEXT_UNM_MSG \
 ""
#define FORM_LINK_TEXT_SUBMIT_MESSAGE \
 ""
#define FORM_LINK_TEXT_RESUBMIT_MESSAGE \
 ""
#define FORM_LINK_TEXT_SUBMIT_UNM_MSG \
 ""
#define FORM_LINK_TEXT_SUBMIT_MAILTO_MSG \
 ""
#define FORM_LINK_TEXT_SUBMIT_MAILTO_DIS_MSG \
 ""
#define FORM_LINK_PASSWORD_MESSAGE \
 ""
#define FORM_LINK_PASSWORD_UNM_MSG \
 ""
#define FORM_LINK_CHECKBOX_MESSAGE \
 ""
#define FORM_LINK_CHECKBOX_UNM_MSG \
 ""
#define FORM_LINK_RADIO_MESSAGE \
 ""
#define FORM_LINK_RADIO_UNM_MSG \
 ""
#define FORM_LINK_SUBMIT_MESSAGE \
 ""
#define FORM_LINK_RESUBMIT_MESSAGE \
 ""
#define FORM_LINK_SUBMIT_DIS_MSG \
 ""
#define FORM_LINK_SUBMIT_MAILTO_MSG \
 ""
#define FORM_LINK_SUBMIT_MAILTO_DIS_MSG \
 ""
#define FORM_LINK_RESET_MESSAGE \
 ""
#define FORM_LINK_RESET_DIS_MSG \
 ""
#define FORM_LINK_OPTION_LIST_MESSAGE \
 ""
#define CHOICE_LIST_MESSAGE \
 ""
#define FORM_LINK_OPTION_LIST_UNM_MSG \
 ""
#define CHOICE_LIST_UNM_MSG \
 ""
#define SUBMITTING_FORM ""
#define RESETTING_FORM ""
#define RELOADING_FORM \
 ""
#define CANNOT_TRANSCODE_FORM ""

#define NORMAL_LINK_MESSAGE \
 ""
#define LINK_NOT_FOUND ""
#define ENTER_LYNX_COMMAND ""
#define WWW_WAIT_MESSAGE ""
#define WWW_SKIP_MESSAGE ""
#define WWW_USING_MESSAGE ""
#define WWW_ILLEGAL_URL_MESSAGE ""
#define WWW_BAD_ADDR_MESSAGE ""
#define ADVANCED_URL_MESSAGE ""
#define WWW_FAIL_MESSAGE ""
#define WWW_INDEX_MESSAGE ""
#define WWW_INDEX_MORE_MESSAGE \
 ""
#define BAD_LINK_NUM_ENTERED ""
#define SOURCE_HELP \
 ""
#define NOVICE_LINE_TWO \
 "[FireHog / 1.0.0] O)ptions Q)uit"
#define FORM_NOVICELINE_ONE \
 ""
#define FORM_NOVICELINE_TWO \
""

/* mailto */
#define BAD_FORM_MAILTO ""
#define MAILTO_SQUASH_CTL ""
#define FORM_MAILTO_DISALLOWED ""
#define FORM_MAILTO_FAILED ""
#define FORM_MAILTO_CANCELLED ""
#define SENDING_FORM_CONTENT ""
#define NO_ADDRESS_IN_MAILTO_URL ""
#define MAILTO_URL_TEMPOPEN_FAILED \
 ""
#define COMMENT_REQUEST_CANCELLED ""
#define INC_ORIG_MSG_PROMPT \
 ""
#define INC_PREPARSED_MSG_PROMPT \
 ""
#define SPAWNING_EDITOR_FOR_MAIL \
 ""
#define ERROR_SPAWNING_EDITOR \
 ""
#define SEND_COMMENT_PROMPT ""
#define SEND_MESSAGE_PROMPT ""
#define SENDING_YOUR_MSG ""

#define FILE_ACTIONS_DISALLOWED ""
#define FILE_SERVED_LINKS_DISALLOWED \
 ""
#define FILE_BOOKMARKS_DISALLOWED ""
#define SPECIAL_VIA_EXTERNAL_DISALLOWED \
 ""
#define RETURN_TO_LYNX ""
#ifdef VMS
#define SPAWNING_MSG \
 ""
#else
#ifdef DOSPATH
#define SPAWNING_MSG \
 ""
#else /* UNIX */
#define SPAWNING_MSG \
 ""
#endif
#endif /* VMS */
#define SPAWNING_DISABLED ""
#define DOWNLOAD_DISABLED ""
#define NO_DOWNLOAD_INPUT ""
#define NO_DOWNLOAD_MAILTO_ACTION ""
#define NO_DOWNLOAD_MAILTO_LINK ""
#define NO_DOWNLOAD_COOKIES ""
#define NO_DOWNLOAD_PRINT_OP ""
#define NO_DOWNLOAD_UPLOAD_OP ""
#define NO_DOWNLOAD_PERMIT_OP ""
#define NO_DOWNLOAD_SPECIAL ""
#define NO_DOWNLOAD_CHOICE ""
#define TRACE_ON ""
#define TRACE_OFF ""
#define CLICKABLE_IMAGES_ON \
 ""
#define CLICKABLE_IMAGES_OFF \
 ""
#define PSEUDO_INLINE_ALTS_ON \
 ""
#define PSEUDO_INLINE_ALTS_OFF \
 ""
#define RAWMODE_OFF ""
#define RAWMODE_ON ""
#define HEAD_D_L_OR_CANCEL \
 ""
#define HEAD_D_OR_CANCEL \
 ""
#define DOC_NOT_HTTP_URL ""
#define LINK_NOT_HTTP_URL ""
#define FORM_ACTION_DISABLED ""
#define FORM_ACTION_NOT_HTTP_URL \
 ""
#define NOT_HTTP_URL_OR_ACTION ""
#define SPECIAL_ACTION_DISALLOWED ""
#define NOT_IN_STARTING_REALM ""
#define NEWSPOSTING_DISABLED ""
#define DIRED_DISABLED ""
#define NO_JUMPFILE ""
#define JUMP_PROMPT ""
#define JUMP_DISALLOWED ""
#define RANDOM_URL_DISALLOWED ""
#define NO_RANDOM_URLS_YET ""
#define BOOKMARKS_DISABLED ""
#define BOOKMARK_EXEC_DISABLED ""
#define BOOKMARK_FILE_NOT_DEFINED \
 ""
#define NO_TEMP_FOR_HOTLIST \
 ""
#define BOOKMARK_OPEN_FAILED ""
#define BOOKMARK_OPEN_FAILED_FOR_DEL \
 ""
#define BOOKSCRA_OPEN_FAILED_FOR_DEL \
 ""
#ifdef VMS
#define ERROR_RENAMING_SCRA ""
#else
#define ERROR_RENAMING_TEMP ""
#define BOOKTEMP_COPY_FAIL \
 ""
#define BOOKTEMP_REOPEN_FAIL_FOR_DEL \
 ""
#endif /* VMS */
#define BOOKMARK_LINK_NOT_ONE_LINE \
 ""
#define BOOKMARK_DEL_FAILED ""
#define BOOKMARKS_NOT_TRAVERSED \
 ""
#define BOOKMARKS_NOT_OPEN \
 ""
#define BOOKMARKS_NOLINKS ""
#define BOOK_D_L_OR_CANCEL \
 ""
#define BOOK_D_OR_CANCEL ""
#define BOOK_L_OR_CANCEL ""
#define NOBOOK_POST_FORM \
 ""
#define NOBOOK_FORM_FIELD ""
#define NOBOOK_HSML \
 ""
#define CONFIRM_BOOKMARK_DELETE \
 ""
#define MALFORMED_ADDRESS ""
#define HISTORICAL_ON_MINIMAL_OFF \
 ""
#define HISTORICAL_OFF_MINIMAL_ON \
 ""
#define HISTORICAL_ON_VALID_OFF \
 ""
#define HISTORICAL_OFF_VALID_ON \
 ""
#define MINIMAL_ON_IN_EFFECT \
 ""
#define MINIMAL_OFF_VALID_ON \
 ""
#define MINIMAL_ON_BUT_HISTORICAL \
 ""
#define MINIMAL_OFF_HISTORICAL_ON \
 ""
#define SOFT_DOUBLE_QUOTE_ON ""
#define SOFT_DOUBLE_QUOTE_OFF ""
#define USING_DTD_0 ""
#define USING_DTD_1 ""
#define ALREADY_AT_END ""
#define ALREADY_AT_BEGIN ""
#define ALREADY_AT_PAGE ""
#define LINK_ALREADY_CURRENT ""
#define ALREADY_AT_FIRST ""
#define NO_LINKS_ABOVE ""
#define NO_LINKS_BELOW ""
#define MAXLEN_REACHED_DEL_OR_MOV \
 ""
#define NOT_ON_SUBMIT_OR_LINK \
 ""
#define NEED_CHECKED_RADIO_BUTTON \
 ""
#define PREV_DOC_QUERY ""
#define ARROWS_OR_TAB_TO_MOVE ""
#define ENTER_TEXT_ARROWS_OR_TAB \
 ""
#define NO_FORM_ACTION ""
#define BAD_HTML_NO_POPUP ""
#define POPUP_FAILED ""
#define GOTO_DISALLOWED ""
#define GOTO_NON_HTTP_DISALLOWED ""
#define GOTO_CSO_DISALLOWED ""
#define GOTO_FILE_DISALLOWED ""
#define GOTO_FINGER_DISALLOWED ""
#define GOTO_FTP_DISALLOWED ""
#define GOTO_GOPHER_DISALLOWED ""
#define GOTO_HTTP_DISALLOWED ""
#define GOTO_HTTPS_DISALLOWED ""
#define GOTO_CGI_DISALLOWED ""
#define GOTO_EXEC_DISALLOWED ""
#define GOTO_PROG_DISALLOWED ""
#define GOTO_MAILTO_DISALLOWED ""
#define GOTO_NEWS_DISALLOWED ""
#define GOTO_NNTP_DISALLOWED ""
#define GOTO_RLOGIN_DISALLOWED ""
#define GOTO_SNEWS_DISALLOWED ""
#define GOTO_TELNET_DISALLOWED ""
#define GOTO_TN3270_DISALLOWED ""
#define GOTO_WAIS_DISALLOWED ""
#define GOTO_SPECIAL_DISALLOWED ""
#define URL_TO_OPEN ""
#define EDIT_CURRENT_GOTO ""
#define EDIT_THE_PREV_GOTO ""
#define EDIT_A_PREV_GOTO ""
#define CURRENT_DOC_HAS_POST_DATA ""
#define EDIT_CURDOC_URL ""
#define EDIT_CURLINK_URL ""
#define EDIT_FM_MENU_URLS_DISALLOWED ""
#define ENTER_DATABASE_QUERY ""
#define ENTER_WHEREIS_QUERY ""
#define EDIT_CURRENT_QUERY ""
#define EDIT_THE_PREV_QUERY ""
#define EDIT_A_PREV_QUERY ""
#define USE_C_R_TO_RESUB_CUR_QUERY \
 ""
#define EDIT_CURRENT_SHORTCUT ""
#define EDIT_THE_PREV_SHORTCUT ""
#define EDIT_A_PREV_SHORTCUT ""
#define KEY_NOT_MAPPED_TO_JUMP_FILE ""
#define CANNOT_LOCATE_JUMP_FILE ""
#define CANNOT_OPEN_JUMP_FILE ""
#define ERROR_READING_JUMP_FILE ""
#define OUTOF_MEM_FOR_JUMP_FILE ""
#define OUTOF_MEM_FOR_JUMP_TABLE ""
#define NO_INDEX_FILE ""
#define CONFIRM_MAIN_SCREEN \
 ""
#define IN_MAIN_SCREEN ""
#define NOT_ISINDEX \
 ""
#define NO_OWNER \
 ""
#define NO_OWNER_USE ""
#define CONFIRM_COMMENT ""
#define MAIL_DISALLOWED ""
#define EDIT_DISABLED ""
#define NO_STATUS ""
#define NO_EDITOR ""
#define PRINT_DISABLED ""
#define NO_TOOLBAR ""
#define NOOPEN_TRAV_ERR_FILE ""
#define FOLLOW_LINK_NUMBER ""
#define SELECT_OPTION_NUMBER ""
#define OPTION_CHOICE_NUMBER ""
#define OPTION_ALREADY_CURRENT ""
#define CHOICE_ALREADY_CURRENT ""
#define ALREADY_AT_OPTION_END \
 ""
#define ALREADY_AT_CHOICE_END \
 ""
#define ALREADY_AT_OPTION_BEGIN \
 ""
#define ALREADY_AT_CHOICE_BEGIN \
 ""
#define ALREADY_AT_OPTION_PAGE \
 ""
#define ALREADY_AT_CHOICE_PAGE \
 ""
#define BAD_OPTION_NUM_ENTERED ""
#define BAD_CHOICE_NUM_ENTERED ""
#define BAD_HTML_USE_TRACE ""
#define CANNOT_OPEN_TEMP ""
#define CANNOT_OPEN_OUTPUT ""
#define EXECUTION_DISABLED ""
#define EXECUTION_DISABLED_FOR_FILE \
 ""
#define EXECUTION_NOT_COMPILED \
 ""
#define CANNOT_DISPLAY_FILE ""
#define CANNOT_DISPLAY_FILE_D_OR_C \
 ""
#define WRONG_CHARSET_D_OR_C ""
#define UNMAPPED_TYPE_D_OR_C ""
#define CANCELLING_FILE ""
#define RETRIEVING_FILE ""
#define FILENAME_PROMPT ""
#define EDIT_THE_PREV_FILENAME ""
#define EDIT_A_PREV_FILENAME ""
#define NEW_FILENAME_PROMPT ""
#define FILENAME_CANNOT_BE_DOT ""
#ifdef VMS
#define FILE_EXISTS_HPROMPT ""
#else
#define FILE_EXISTS_OPROMPT ""
#endif /* VMS */
#define CANNOT_WRITE_TO_FILE ""
#define MISCONF_DOWNLOAD_COMMAND ""
#define CANNOT_DOWNLOAD_FILE ""
#define SAVING ""
#define COULD_NOT_ACCESS_FILE ""
#define CANNOT_EDIT_REMOTE_FILES \
 ""
#define NOAUTH_TO_EDIT_FILE ""
#define TITLE_PROMPT ""
#define SUBJECT_PROMPT ""
#define USERNAME_PROMPT ""
#define PASSWORD_PROMPT ""
#define USERNAME_PASSWORD_REQUIRED ""
#define PASSWORD_REQUIRED ""
#define CLEAR_ALL_AUTH_INFO ""
#define AUTH_INFO_CLEARED ""
#define CGI_DISABLED ""
#define CGI_NOT_COMPILED \
 ""
#define CANNOT_CONVERT_I_TO_O ""
#define CONNECT_SET_FAILED ""
#define CONNECT_FAILED ""
#define MALFORMED_EXEC_REQUEST \
 ""
#define BADCHAR_IN_EXEC_LINK \
 ""
#define RELPATH_IN_EXEC_LINK \
 ""
#define BADLOCPATH_IN_EXEC_LINK \
 ""
#define MAIL_DISABLED ""
#define ACCESS_ONLY_LOCALHOST \
 ""
#define TELNET_DISABLED ""
#define TELNET_PORT_SPECS_DISABLED \
 ""
#define NEWS_DISABLED ""
#define RLOGIN_DISABLED ""
#define FTP_DISABLED ""
#define NO_REFS_FROM_DOC ""
#define NO_VISIBLE_REFS_FROM_DOC ""
#ifdef VMS
#define CANNOT_OPEN_COMFILE ""
#endif /* VMS */
#define NEWS_POST_CANCELLED ""
#define SPAWNING_EDITOR_FOR_NEWS \
 ""
#define POST_MSG_PROMPT ""
#define APPEND_SIG_FILE ""
#define POSTING_TO_NEWS ""
#ifdef VMS
#define HAVE_UNREAD_MAIL_MSG ""
#else
#define HAVE_MAIL_MSG ""
#endif /* VMS */
#define HAVE_NEW_MAIL_MSG ""
#define SAVE_REQUEST_CANCELLED ""
#define MAIL_REQUEST_CANCELLED ""
#define CONFIRM_MAIL_SOURCE_PREPARSED \
 ""
#define MAILING_FILE ""
#define MAIL_REQUEST_FAILED ""
#define CONFIRM_LONG_SCREEN_PRINT \
 ""
#define PRINT_REQUEST_CANCELLED ""
#define PRESS_RETURN_TO_BEGIN ""
#define PRESS_RETURN_TO_FINISH ""
#define CONFIRM_LONG_PAGE_PRINT \
 ""
#define CHECK_PRINTER \
 ""
#define FILE_ALLOC_FAILED ""
#define UNABLE_TO_OPEN_TEMPFILE ""
#define UNABLE_TO_OPEN_PRINTOP_FILE ""
#define PRINTING_FILE ""
#define MAIL_ADDRESS_PROMPT ""
#define PRINTER_MISCONF_ERROR ""
#define MISDIRECTED_MAP_REQUEST ""
#define MAP_NOT_ACCESSIBLE ""
#define MAPS_NOT_AVAILABLE ""
#define MAP_NOT_AVAILABLE ""
#ifndef NO_OPTION_MENU
#define OPTION_SCREEN_NEEDS_24 \
 ""
#define OPTION_SCREEN_NEEDS_23 \
 ""
#define OPTION_SCREEN_NEEDS_22 \
 ""
#endif /* !NO_OPTION_MENU */
#define NEED_ADVANCED_USER_MODE ""
#define COMMAND_PROMPT ""
#define SELECT_SEGMENT ""
#define CAP_LETT_SEGMENT ""
#define OF_OPT_LINE_SEGMENT ""
#define TO_SAVE_SEGMENT ""
#define OR_SEGMENT ""
#define TO_RETURN_SEGMENT ""
#define ACCEPT_DATA ""
#define ACCEPT_DATA_OR_DEFAULT \
""
#define VALUE_ACCEPTED ""
#define VALUE_ACCEPTED_WARNING_X \
 ""
#define VALUE_ACCEPTED_WARNING_NONX \
 ""
#define EDITOR_LOCKED ""
#define FAILED_TO_SET_DISPLAY ""
#define FAILED_CLEAR_SET_DISPLAY ""
#define BOOKMARK_CHANGE_DISALLOWED \
 ""
#define COLOR_TOGGLE_DISABLED ""
#define COLOR_TOGGLE_DISABLED_FOR_TERM ""
#define DOTFILE_ACCESS_DISABLED ""
#define UA_COPYRIGHT_WARNING \
 ""
#define CHANGE_OF_SETTING_DISALLOWED \
 ""
#define SAVING_OPTIONS ""
#define OPTIONS_SAVED ""
#define OPTIONS_NOT_SAVED ""
#define R_TO_RETURN_TO_LYNX ""
#define SAVE_OR_R_TO_RETURN_TO_LYNX ""
#define ANY_KEY_CHANGE_RET_ACCEPT \
 ""
#define ERROR_UNCOMPRESSING_TEMP ""
#define UNSUPPORTED_URL_SCHEME ""
#define UNSUPPORTED_DATA_URL ""
#define ILLEGAL_REDIRECTION_URL ""
#define	SERVER_ASKED_FOR_REDIRECTION \
 ""
#define	PROCEED_GET_CANCEL ""
#define	PROCEED_OR_CANCEL ""
#define	ADVANCED_POST_GET_REDIRECT \
 ""
#define	ADVANCED_POST_REDIRECT \
 ""
#define CONFIRM_POST_RESUBMISSION \
 ""
#define CONFIRM_POST_RESUBMISSION_TO \
 ""
#define CONFIRM_POST_LIST_RELOAD \
 ""
#define CONFIRM_POST_DOC_HEAD \
 ""
#define CONFIRM_POST_LINK_HEAD \
 ""
#define DISCARDING_POST_DATA ""
#define WILL_NOT_RELOAD_DOC ""
#define	LOCATION_HEADER ""
#define STRING_NOT_FOUND ""
#define MULTIBOOKMARKS_DEFAULT ""
#define MULTIBOOKMARKS_SMALL ""
#define MULTIBOOKMARKS_SAVE ""
#define MULTIBOOKMARKS_SELECT \
 ""
#define MULTIBOOKMARKS_SELF \
 ""
#define MULTIBOOKMARKS_DISALLOWED ""
#define MULTIBOOKMARKS_SHEAD_MASK ""
#define MULTIBOOKMARKS_SHEAD ""
#define MULTIBOOKMARKS_EHEAD_MASK \
 ""
#define MULTIBOOKMARKS_EHEAD \
 ""
#define MULTIBOOKMARKS_LETTER ""
#ifdef VMS
#define USE_PATH_OFF_HOME \
 ""
#else
#define USE_PATH_OFF_HOME ""
#endif /* VMS */
#define MAXLINKS_REACHED \
 ""
#define MAXHIST_REACHED \
 ""
#define VISITED_LINKS_EMPTY ""
#define MEMORY_EXHAUSTED_ABORT ""
#define DFM_NOT_AVAILABLE ""
#define BASE_NOT_ABSOLUTE ""
#define LOCATION_NOT_ABSOLUTE ""
#define REFRESH_URL_NOT_ABSOLUTE ""
#define SENDING_MESSAGE_WITH_BODY_TO \
 ""
#define SENDING_COMMENT_TO ""
#define WITH_COPY_TO ""
#define WITH_COPIES_TO ""
#define CTRL_G_TO_CANCEL_SEND \
 ""
#define ENTER_NAME_OR_BLANK \
 ""
#define ENTER_MAIL_ADDRESS_OR_OTHER \
 ""
#define MEANS_TO_CONTACT_FOR_RESPONSE \
 ""
#define ENTER_SUBJECT_LINE ""
#define ENTER_ADDRESS_FOR_CC \
 ""
#define BLANK_FOR_NO_COPY ""
#define REVIEW_MESSAGE_BODY ""
#define RETURN_TO_CONTINUE ""
#define CTRL_U_TO_ERASE ""
#define ENTER_MESSAGE_BELOW ""
#define ENTER_PERIOD_WHEN_DONE_A \
 ""
#define ENTER_PERIOD_WHEN_DONE_B \
 ""

/* Cookies messages */
#define ADVANCED_COOKIE_CONFIRMATION \
 "%s cookies? A/D/Y/N"
#define INVALID_COOKIE_DOMAIN_CONFIRMATION \
 ""
#define ALLOWING_COOKIE ""
#define REJECTING_COOKIE ""
#define COOKIE_JAR_IS_EMPTY ""
#define ACTIVATE_TO_GOBBLE \
 ""
#define OR_CHANGE_ALLOW ""
#define COOKIES_NEVER_ALLOWED ""
#define COOKIES_ALWAYS_ALLOWED ""
#define COOKIES_ALLOWED_VIA_PROMPT ""
#define COOKIES_READ_FROM_FILE ""
#define NO_NAME ""
#define NO_VALUE ""
#define END_OF_SESSION ""
#define DELETE_COOKIE_CONFIRMATION ""
#define COOKIE_EATEN ""
#define DELETE_EMPTY_DOMAIN_CONFIRMATION ""
#define DOMAIN_EATEN ""
#define DELETE_COOKIES_SET_ALLOW_OR_CANCEL \
 ""
#define DELETE_DOMAIN_SET_ALLOW_OR_CANCEL \
 ""
#define DOMAIN_COOKIES_EATEN ""
#define ALWAYS_ALLOWING_COOKIES ""
#define NEVER_ALLOWING_COOKIES ""
#define PROMPTING_TO_ALLOW_COOKIES ""
#define DELETE_ALL_COOKIES_IN_DOMAIN ""
#define ALL_COOKIES_EATEN ""

#define PORT_NINETEEN_INVALID ""
#define PORT_TWENTYFIVE_INVALID ""
#define PORT_INVALID ""
#define URL_PORT_BAD ""
#define HTML_STACK_OVERRUN ""
#define BAD_PARTIAL_REFERENCE ""
#define TRACELOG_OPEN_FAILED ""
#define LYNX_TRACELOG_TITLE ""
#define NO_TRACELOG_STARTED ""
#define MAX_TEMPCOUNT_REACHED \
 ""
#define FORM_VALUE_TOO_LONG \
 ""
#define FORM_TAIL_COMBINED_WITH_HEAD \
 ""

/* Lynx internal page titles */
#define CONFIG_DEF_TITLE	""
#define COOKIE_JAR_TITLE	""
#define CURRENT_KEYMAP_TITLE	""
#define DIRED_MENU_TITLE	""
#define DOWNLOAD_OPTIONS_TITLE	""
#define HISTORY_PAGE_TITLE	""
#define LIST_PAGE_TITLE		""
#define LYNXCFG_TITLE		""
#define OPTIONS_TITLE		""
#define PERMIT_OPTIONS_TITLE	""
#define PRINT_OPTIONS_TITLE	""
#define SHOWINFO_TITLE		""
#define UPLOAD_OPTIONS_TITLE	""
#define VISITED_LINKS_TITLE	""
#define BOOKMARK_TITLE		""
#define MOSAIC_BOOKMARK_TITLE	""

/* CONFIG_DEF_TITLE subtitles */
#define AUTOCONF_CONFIG_CACHE \
 ""
#define AUTOCONF_LYNXCFG_H \
 ""

#ifdef DIRED_SUPPORT
#define DIRED_NOVICELINE \
 ""
#define CURRENT_LINK_STATUS_FAILED ""

#define INVALID_PERMIT_URL \
 ""
#endif /* DIRED_SUPPORT */

#ifdef USE_EXTERNALS
#define EXTERNALS_DISABLED ""
#endif /* USE_EXTERNALS */

#endif /* LYMESSAGES_EN_H */
