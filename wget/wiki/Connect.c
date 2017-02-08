fff8
<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml" xml:lang="en" lang="en" dir="ltr">
	<head>
		<meta http-equiv="Content-Type" content="text/html; charset=UTF-8" />
		<meta http-equiv="Content-Style-Type" content="text/css" />
		<meta name="generator" content="MediaWiki 1.15.1" />
		<meta name="keywords" content="Connect.c" />
		<link rel="shortcut icon" href="/favicon.ico" />
		<link rel="search" type="application/opensearchdescription+xml" href="/w/opensearch_desc.php" title="Telecomix Crypto Munitions Bureau (en)" />
		<link title="Creative Commons" type="application/rdf+xml" href="/w/index.php?title=Connect.c&amp;action=creativecommons" rel="meta" />
		<link rel="copyright" href="http://creativecommons.org/licenses/publicdomain/" />
		<link rel="alternate" type="application/rss+xml" title="Telecomix Crypto Munitions Bureau RSS Feed" href="/w/index.php?title=Special:RecentChanges&amp;feed=rss" />
		<link rel="alternate" type="application/atom+xml" title="Telecomix Crypto Munitions Bureau Atom Feed" href="/w/index.php?title=Special:RecentChanges&amp;feed=atom" />
		<title>Connect.c - Telecomix Crypto Munitions Bureau</title>
		<link rel="stylesheet" href="/w/skins/common/shared.css?207" type="text/css" media="screen" />
		<link rel="stylesheet" href="/w/skins/common/commonPrint.css?207" type="text/css" media="print" />
		<link rel="stylesheet" href="/w/skins/monobook/main.css?207" type="text/css" media="screen" />
		<!--[if lt IE 5.5000]><link rel="stylesheet" href="/w/skins/monobook/IE50Fixes.css?207" type="text/css" media="screen" /><![endif]-->
		<!--[if IE 5.5000]><link rel="stylesheet" href="/w/skins/monobook/IE55Fixes.css?207" type="text/css" media="screen" /><![endif]-->
		<!--[if IE 6]><link rel="stylesheet" href="/w/skins/monobook/IE60Fixes.css?207" type="text/css" media="screen" /><![endif]-->
		<!--[if IE 7]><link rel="stylesheet" href="/w/skins/monobook/IE70Fixes.css?207" type="text/css" media="screen" /><![endif]-->
		<link rel="stylesheet" href="/w/index.php?title=MediaWiki:Common.css&amp;usemsgcache=yes&amp;ctype=text%2Fcss&amp;smaxage=18000&amp;action=raw&amp;maxage=18000" type="text/css" />
		<link rel="stylesheet" href="/w/index.php?title=MediaWiki:Print.css&amp;usemsgcache=yes&amp;ctype=text%2Fcss&amp;smaxage=18000&amp;action=raw&amp;maxage=18000" type="text/css" media="print" />
		<link rel="stylesheet" href="/w/index.php?title=MediaWiki:Monobook.css&amp;usemsgcache=yes&amp;ctype=text%2Fcss&amp;smaxage=18000&amp;action=raw&amp;maxage=18000" type="text/css" />
		<link rel="stylesheet" href="/w/index.php?title=-&amp;action=raw&amp;maxage=18000&amp;gen=css" type="text/css" />
		<!--[if lt IE 7]><script type="text/javascript" src="/w/skins/common/IEFixes.js?207"></script>
		<meta http-equiv="imagetoolbar" content="no" /><![endif]-->

		<script type= "text/javascript">/*<![CDATA[*/
		var skin = "monobook";
		var stylepath = "/w/skins";
		var wgArticlePath = "/wiki/$1";
		var wgScriptPath = "/w";
		var wgScript = "/w/index.php";
		var wgVariantArticlePath = false;
		var wgActionPaths = {};
		var wgServer = "https://cryptoanarchy.org";
		var wgCanonicalNamespace = "";
		var wgCanonicalSpecialPageName = false;
		var wgNamespaceNumber = 0;
		var wgPageName = "Connect.c";
		var wgTitle = "Connect.c";
		var wgAction = "view";
		var wgArticleId = "32";
		var wgIsArticle = true;
		var wgUserName = null;
		var wgUserGroups = null;
		var wgUserLanguage = "en";
		var wgContentLanguage = "en";
		var wgBreakFrames = false;
		var wgCurRevisionId = 98;
		var wgVersion = "1.15.1";
		var wgEnableAPI = true;
		var wgEnableWriteAPI = true;
		var wgSeparatorTransformTable = ["", ""];
		var wgDigitTransformTable = ["", ""];
		var wgRestrictionEdit = ["sysop"];
		var wgRestrictionMove = ["sysop"];
		/*]]>*/</script>

		<script type="text/javascript" src="/w/skins/common/wikibits.js?207"><!-- wikibits js --></script>
		<!-- Head Scripts -->
		<script type="text/javascript" src="/w/skins/common/ajax.js?207"></script>
		<script type="text/javascript" src="/w/index.php?title=-&amp;action=raw&amp;gen=js&amp;useskin=monobook"><!-- site js --></script>
	</head>
<body class="mediawiki ltr ns-0 ns-subject page-Connect_c skin-monobook">
	<div id="globalWrapper">
		<div id="column-content">
	<div id="content">
		<a name="top" id="top"></a>
				<h1 id="firstHeading" class="firstHeading">Connect.c</h1>
		<div id="bodyContent">
			<h3 id="siteSub">From Telecomix Crypto Munitions Bureau</h3>
			<div id="contentSub"></div>
									<div id="jump-to-nav">Jump to: <a href="#column-one">navigation</a>, <a href="#searchInput">search</a></div>			<!-- start content -->
			<p><b>This page is protected to prevent tampering of the code. Notice that this code is NOT public domain, but licensed under GNU General Public License.</b>
</p>
<pre>
/***********************************************************************
 * connect.c -- Make socket connection using SOCKS4/5 and HTTP tunnel.
 *
 * Copyright (c) 2000-2004 Shun-ichi Goto
 * Copyright (c) 2002, J. Grant (English Corrections)
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
 *
 * ---------------------------------------------------------
 * PROJECT:  My Test Program
 * AUTHOR:   Shun-ichi GOTO &lt;gotoh@taiyo.co.jp&gt;
 * CREATE:   Wed Jun 21, 2000
 * REVISION: $Revision: 1.95 $
 * ---------------------------------------------------------
 *
 * Getting Source
 * ==============
 *
 *   Recent version of 'connect.c' is available from
 *     http://www.taiyo.co.jp/~gotoh/ssh/connect.c
 *
 *   Related tool, ssh-askpass.exe (alternative ssh-askpass on UNIX)
 *   is available:
 *     http://www.taiyo.co.jp/~gotoh/ssh/ssh-askpass.exe.gz
 *
 *   See more detail:
 *     http://www.taiyo.co.jp/~gotoh/ssh/connect.html
 *
 * How To Compile
 * ==============
 *
 *  On UNIX environment:
 *      $ gcc connect.c -o connect
 *
 *  On SOLARIS:
 *      $ gcc -o connect -lresolv -lsocket -lnsl connect.c
 *
 *  on Win32 environment:
 *      $ cl connect.c wsock32.lib advapi32.lib
 *    or
 *      $ bcc32 connect.c wsock32.lib advapi32.lib
 *    or
 *      $ gcc connect.c -o connect
 *
 *  on Mac OS X environment:
 *      $ gcc connect.c -o connect -lresolv
 *    or
 *      $ gcc connect.c -o connect -DBIND_8_COMPAT=1
 *
 * How To Use
 * ==========
 *
 *   You can specify proxy method in an environment variable or in a
 *   command line option.
 *
 *   usage:  connect [-dnhst45] [-R resolve] [-p local-port] [-w sec]
 *                   [-H [user@]proxy-server[:port]]
 *                   [-S [user@]socks-server[:port]]
 *                   [-T proxy-server[:port]]
 *                   [-c telnet proxy command]
 *                   host port
 *
 *   &quot;host&quot; and &quot;port&quot; is for the target hostname and port-number to
 *   connect to.
 *
 *   The -H option specifys a hostname and port number of the http proxy
 *   server to relay. If port is omitted, 80 is used. You can specify this
 *   value in the environment variable HTTP_PROXY and pass the -h option
 *   to use it.
 *
 *   The -S option specifys the hostname and port number of the SOCKS
 *   server to relay.  Like -H, port number can be omitted and the default
 *   is 1080. You can also specify this value pair in the environment
 *   variable SOCKS5_SERVER and give the -s option to use it.
 *
 *   The '-4' and the '-5' options are for specifying SOCKS relaying and
 *   indicates protocol version to use. It is valid only when used with
 *   '-s' or '-S'. Default is '-5' (protocol version 5)
 *
 *   The '-R' option is for specifying method to resolve the
 *   hostname. Three keywords (&quot;local&quot;, &quot;remote&quot;, &quot;both&quot;) or dot-notation
 *   IP address are acceptable.  The keyword &quot;both&quot; means, &quot;Try local
 *   first, then remote&quot;. If a dot-notation IP address is specified, use
 *   this host as nameserver. The default is &quot;remote&quot; for SOCKS5 or
 *   &quot;local&quot; for others. On SOCKS4 protocol, remote resolving method
 *   (&quot;remote&quot; and &quot;both&quot;) requires protocol 4a supported server.
 *
 *   The '-p' option will forward a local TCP port instead of using the
 *   standard input and output.
 *
 *   The '-P' option is same to '-p' except keep remote session. The
 *   program repeats waiting the port with holding remote session without
 *   disconnecting. To disconnect the remote session, send EOF to stdin or
 *   kill the program.
 *
 *   The '-w' option specifys timeout seconds for making connection with
 *   TARGET host.
 *
 *   The '-d' option is used for debug. If you fail to connect, use this
 *   and check request to and response from server.
 *
 *   You can omit the &quot;port&quot; argument when program name is special format
 *   containing port number itself. For example,
 *     $ ln -s connect connect-25
 *   means this connect-25 command is spcifying port number 25 already
 *   so you need not 2nd argument (and ignored if specified).
 *
 *   To use proxy, this example is for SOCKS5 connection to connect to
 *   'host' at port 25 via SOCKS5 server on 'firewall' host.
 *     $ connect -S firewall  host 25
 *   or
 *     $ SOCKS5_SERVER=firewall; export SOCKS5_SERVER
 *     $ connect -s host 25
 *
 *   For a HTTP-PROXY connection:
 *     $ connect -H proxy-server:8080  host 25
 *   or
 *     $ HTTP_PROXY=proxy-server:8080; export HTTP_PROXY
 *     $ connect -h host 25
 *   To forward a local port, for example to use ssh:
 *     $ connect -p 5550 -H proxy-server:8080  host 22
 *    ($ ssh -l user -p 5550 localhost )
 *
 * TIPS
 * ====
 *
 *   Connect.c doesn't have any configuration to specify the SOCKS server.
 *   If you are a mobile user, this limitation might bother you.  However,
 *   You can compile connect.c and link with other standard SOCKS library
 *   like the NEC SOCKS5 library or Dante. This means connect.c is
 *   socksified and uses a configration file like to other SOCKSified
 *   network commands and you can switch configuration file any time
 *   (ex. when ppp startup) that brings you switching of SOCKS server for
 *   connect.c in same way with other commands. For this case, you can
 *   write ~/.ssh/config like this:
 *
 *     ProxyCommand connect -n&nbsp;%h&nbsp;%p
 *
 * SOCKS5 authentication
 * =====================
 *
 *   Only USER/PASS authentication is supported.
 *
 * Proxy authentication
 * ====================
 *
 *   Only BASIC scheme is supported.
 *
 * Authentication informations
 * ===========================
 *
 *   User name for authentication is specifed by an environment variable
 *   or system login name.  And password is specified from environment
 *   variable or external program (specified in $SSH_ASKPASS) or tty.
 *
 *   Following environment variable is used for specifying user name.
 *     SOCKS: $SOCKS5_USER, $LOGNAME, $USER
 *     HTTP Proxy: $HTTP_PROXY_USER, $LOGNAME, $USER
 *
 * ssh-askpass support
 * ===================
  *
 *   You can use ssh-askpass (came from OpenSSH or else) to specify
 *   password on graphical environment (X-Window or MS Windows). To use
 *   this, set program name to environment variable SSH_ASKPASS. On UNIX,
 *   X-Window must be required, so $DISPLAY environment variable is also
 *   needed.  On Win32 environment, $DISPLAY is not mentioned.
 *
 * Related Informations
 * ====================
 *
 *   SOCKS5 -- RFC 1928, RFC 1929, RFC 1961
 *             NEC SOCKS Reference Implementation is available from:
 *               http://www.socks.nec.com
 *             DeleGate version 5 or earlier can be SOCKS4 server,
 *             and version 6 can be SOCKS5 and SOCKS4 server.
 *             and version 7.7.0 or later can be SOCKS5 and SOCKS4a server.
 *               http://www.delegate.org/delegate/
 *
 *   HTTP-Proxy --
 *             Many http proxy servers supports this, but https should
 *             be allowed as configuration on your host.
 *             For example on DeleGate, you should add &quot;https&quot; to the
 *             &quot;REMITTABLE&quot; parameter to allow HTTP-Proxy like this:
 *               delegated -Pxxxx ...... REMITTABLE=&quot;+,https&quot; ...
 *
 *  Hypertext Transfer Protocol -- HTTP/1.1  -- RFC 2616
 *  HTTP Authentication: Basic and Digest Access Authentication -- RFC 2617
 *             For proxy authentication, refer these documents.
 *
 ***********************************************************************/

#include &lt;stdio.h&gt;
#include &lt;stdlib.h&gt;
#include &lt;string.h&gt;
#include &lt;ctype.h&gt;
#include &lt;memory.h&gt;
#include &lt;errno.h&gt;
#include &lt;assert.h&gt;
#include &lt;sys/types.h&gt;
#include &lt;stdarg.h&gt;
#include &lt;fcntl.h&gt;
#include &lt;signal.h&gt;

#ifdef __CYGWIN32__
#undef _WIN32
#endif

#ifdef _WIN32
#include &lt;windows.h&gt;
#include &lt;winsock.h&gt;
#include &lt;sys/stat.h&gt;
#include &lt;io.h&gt;
#include &lt;conio.h&gt;
#else /*&nbsp;!_WIN32 */
#include &lt;unistd.h&gt;
#include &lt;pwd.h&gt;
#include &lt;termios.h&gt;
#include &lt;sys/time.h&gt;
#ifndef __hpux
#include &lt;sys/select.h&gt;
#endif /* __hpux */
#include &lt;sys/socket.h&gt;
#include &lt;netinet/in.h&gt;
#include &lt;arpa/inet.h&gt;
#include &lt;netdb.h&gt;
#if&nbsp;!defined(_WIN32) &amp;&amp;&nbsp;!defined(__CYGWIN32__)
#define WITH_RESOLVER 1
#include &lt;arpa/nameser.h&gt;
#include &lt;resolv.h&gt;
#else  /* not ( not _WIN32 &amp;&amp; not __CYGWIN32__) */
#undef WITH_RESOLVER
#endif /* not ( not _WIN32 &amp;&amp; not __CYGWIN32__) */
#endif /*&nbsp;!_WIN32 */

#ifdef _WIN32
#define ECONNRESET WSAECONNRESET
#endif /* _WI32 */



#ifndef LINT
static char *vcid = &quot;$Id: connect.c,v 1.95 2005/07/08 13:27:36 gotoh Exp $&quot;;
#endif

/* Microsoft Visual C/C++ has _snprintf() and _vsnprintf() */
#ifdef _MSC_VER
#define snprintf _snprintf
#define vsnprintf _vsnprintf
#endif

/* consider Borland C */
#ifdef __BORLANDC__
#define _kbhit kbhit
#define _setmode setmode
#endif

/* help message.
   Win32 environment does not support -R option (vc and cygwin)
   Win32 native compilers does not support -w option, yet (vc)
*/
static char *usage = &quot;usage:&nbsp;%s [-dnhst45] [-p local-port]&quot;
#ifdef _WIN32
#ifdef __CYGWIN32__
&quot;[-w timeout] \n&quot;                               /* cygwin cannot -R */
#else  /* not __CYGWIN32__ */
&quot; \n&quot;                                           /* VC cannot -w nor -R  */
#endif /* not __CYGWIN32__ */
#else  /* not _WIN32 */
/* help message for UNIX */
&quot;[-R resolve] [-w timeout] \n&quot;
#endif /* not _WIN32 */
&quot;          [-H proxy-server[:port]] [-S [user@]socks-server[:port]] \n&quot;
&quot;          [-T proxy-server[:port]]\n&quot;
&quot;          [-c telnet-proxy-command]\n&quot;
&quot;          host port\n&quot;;

/* name of this program */
char *progname = NULL;
char *progdesc = &quot;connect --- simple relaying command via proxy.&quot;;
char *rcs_revstr = &quot;$Revision: 1.95 $&quot;;
char *revstr = NULL;

/* set of character for strspn() */
const char *digits    = &quot;0123456789&quot;;
const char *dotdigits = &quot;0123456789.&quot;;

/* options */
int f_debug = 0;

/* report flag to hide secure information */
int f_report = 1;

int connect_timeout = 0;

/* local input type */
#define LOCAL_STDIO     0
#define LOCAL_SOCKET    1
char *local_type_names[] = { &quot;stdio&quot;, &quot;socket&quot; };
int   local_type = LOCAL_STDIO;
u_short local_port = 0;                         /* option 'p' */
int f_hold_session = 0;                         /* option 'P' */

char *telnet_command = &quot;telnet&nbsp;%h&nbsp;%p&quot;;

/* utiity types, pair holder of number and string */
typedef struct {
    int num;
    const char *str;
} LOOKUP_ITEM;

/* relay method, server and port */
#define METHOD_UNDECIDED 0
#define METHOD_DIRECT    1
#define METHOD_SOCKS     2
#define METHOD_HTTP      3
#define METHOD_TELNET    4
char *method_names[] = { &quot;UNDECIDED&quot;, &quot;DIRECT&quot;, &quot;SOCKS&quot;, &quot;HTTP&quot;, &quot;TELNET&quot; };

int   relay_method = METHOD_UNDECIDED;          /* relaying method */
char *relay_host = NULL;                        /* hostname of relay server */
u_short relay_port = 0;                         /* port of relay server */
char *relay_user = NULL;                        /* user name for auth */

/* destination target host and port */
char *dest_host = NULL;
struct sockaddr_in dest_addr;
u_short dest_port = 0;

/* informations for SOCKS */
#define SOCKS5_REP_SUCCEEDED    0x00    /* succeeded */
#define SOCKS5_REP_FAIL         0x01    /* general SOCKS serer failure */
#define SOCKS5_REP_NALLOWED     0x02    /* connection not allowed by ruleset */
#define SOCKS5_REP_NUNREACH     0x03    /* Network unreachable */
#define SOCKS5_REP_HUNREACH     0x04    /* Host unreachable */
#define SOCKS5_REP_REFUSED      0x05    /* connection refused */
#define SOCKS5_REP_EXPIRED      0x06    /* TTL expired */
#define SOCKS5_REP_CNOTSUP      0x07    /* Command not supported */
#define SOCKS5_REP_ANOTSUP      0x08    /* Address not supported */
#define SOCKS5_REP_INVADDR      0x09    /* Inalid address */

LOOKUP_ITEM socks5_rep_names[] = {
    { SOCKS5_REP_SUCCEEDED, &quot;succeeded&quot;},
    { SOCKS5_REP_FAIL,      &quot;general SOCKS server failure&quot;},
    { SOCKS5_REP_NALLOWED,  &quot;connection not allowed by ruleset&quot;},
    { SOCKS5_REP_NUNREACH,  &quot;Network unreachable&quot;},
    { SOCKS5_REP_HUNREACH,  &quot;Host unreachable&quot;},
    { SOCKS5_REP_REFUSED,   &quot;connection refused&quot;},
    { SOCKS5_REP_EXPIRED,   &quot;TTL expired&quot;},
    { SOCKS5_REP_CNOTSUP,   &quot;Command not supported&quot;},
    { SOCKS5_REP_ANOTSUP,   &quot;Address not supported&quot;},
    { SOCKS5_REP_INVADDR,   &quot;Invalid address&quot;},
    { -1, NULL }
};

/* SOCKS5 authentication methods */
#define SOCKS5_AUTH_REJECT      0xFF    /* No acceptable auth method */
#define SOCKS5_AUTH_NOAUTH      0x00    /* without authentication */
#define SOCKS5_AUTH_GSSAPI      0x01    /* GSSAPI */
#define SOCKS5_AUTH_USERPASS    0x02    /* User/Password */
#define SOCKS5_AUTH_CHAP        0x03    /* Challenge-Handshake Auth Proto. */
#define SOCKS5_AUTH_EAP         0x05    /* Extensible Authentication Proto. */
#define SOCKS5_AUTH_MAF         0x08    /* Multi-Authentication Framework */

#define SOCKS4_REP_SUCCEEDED    90      /* rquest granted (succeeded) */
#define SOCKS4_REP_REJECTED     91      /* request rejected or failed */
#define SOCKS4_REP_IDENT_FAIL   92      /* cannot connect identd */
#define SOCKS4_REP_USERID       93      /* user id not matched */

LOOKUP_ITEM socks4_rep_names[] = {
    { SOCKS4_REP_SUCCEEDED,  &quot;request granted (succeeded)&quot;},
    { SOCKS4_REP_REJECTED,   &quot;request rejected or failed&quot;},
    { SOCKS4_REP_IDENT_FAIL, &quot;cannot connect identd&quot;},
    { SOCKS4_REP_USERID,     &quot;user id not matched&quot;},
    { -1, NULL }
};

#define RESOLVE_UNKNOWN 0
#define RESOLVE_LOCAL   1
#define RESOLVE_REMOTE  2
#define RESOLVE_BOTH    3
char *resolve_names[] = { &quot;UNKNOWN&quot;, &quot;LOCAL&quot;, &quot;REMOTE&quot;, &quot;BOTH&quot; };

int socks_version = 5;                          /* SOCKS protocol version */
int socks_resolve = RESOLVE_UNKNOWN;
struct sockaddr_in socks_ns;
char *socks5_auth = NULL;

/* Environment variable names */
#define ENV_SOCKS_SERVER  &quot;SOCKS_SERVER&quot;        /* SOCKS server */
#define ENV_SOCKS5_SERVER &quot;SOCKS5_SERVER&quot;
#define ENV_SOCKS4_SERVER &quot;SOCKS4_SERVER&quot;

#define ENV_SOCKS_RESOLVE  &quot;SOCKS_RESOLVE&quot;      /* resolve method */
#define ENV_SOCKS5_RESOLVE &quot;SOCKS5_RESOLVE&quot;
#define ENV_SOCKS4_RESOLVE &quot;SOCKS4_RESOLVE&quot;

#define ENV_SOCKS5_USER     &quot;SOCKS5_USER&quot;       /* auth user for SOCKS5 */
#define ENV_SOCKS4_USER     &quot;SOCKS4_USER&quot;       /* auth user for SOCKS4 */
#define ENV_SOCKS_USER      &quot;SOCKS_USER&quot;        /* auth user for SOCKS */
#define ENV_SOCKS5_PASSWD   &quot;SOCKS5_PASSWD&quot;     /* auth password for SOCKS5 */
#define ENV_SOCKS5_PASSWORD &quot;SOCKS5_PASSWORD&quot;   /* old style */

#define ENV_HTTP_PROXY          &quot;HTTP_PROXY&quot;    /* common env var */
#define ENV_HTTP_PROXY_USER     &quot;HTTP_PROXY_USER&quot; /* auth user */
#define ENV_HTTP_PROXY_PASSWORD &quot;HTTP_PROXY_PASSWORD&quot; /* auth password */

#define ENV_TELNET_PROXY          &quot;TELNET_PROXY&quot;    /* common env var */

#define ENV_CONNECT_USER     &quot;CONNECT_USER&quot;     /* default auth user name */
#define ENV_CONNECT_PASSWORD &quot;CONNECT_PASSWORD&quot; /* default auth password */

#define ENV_SOCKS_DIRECT   &quot;SOCKS_DIRECT&quot;       /* addr-list for non-proxy */
#define ENV_SOCKS5_DIRECT  &quot;SOCKS5_DIRECT&quot;
#define ENV_SOCKS4_DIRECT  &quot;SOCKS4_DIRECT&quot;
#define ENV_HTTP_DIRECT    &quot;HTTP_DIRECT&quot;
#define ENV_CONNECT_DIRECT &quot;CONNECT_DIRECT&quot;

#define ENV_SOCKS5_AUTH &quot;SOCKS5_AUTH&quot;
#define ENV_SSH_ASKPASS &quot;SSH_ASKPASS&quot;           /* askpass program */

/* Prefix string of HTTP_PROXY */
#define HTTP_PROXY_PREFIX &quot;http://&quot;
#define PROXY_AUTH_NONE 0
#define PROXY_AUTH_BASIC 1
#define PROXY_AUTH_DIGEST 2
int proxy_auth_type = PROXY_AUTH_NONE;

/* reason of end repeating */
#define REASON_UNK              -2
#define REASON_ERROR            -1
#define REASON_CLOSED_BY_LOCAL  0
#define REASON_CLOSED_BY_REMOTE 1

/* return value of relay start function. */
#define START_ERROR -1
#define START_OK     0
#define START_RETRY  1

/* socket related definitions */
#ifndef _WIN32
#define SOCKET int
#endif
#ifndef SOCKET_ERROR
#define SOCKET_ERROR -1
#endif

#ifdef _WIN32
#define socket_errno() WSAGetLastError()
#else /*&nbsp;!_WIN32 */
#define closesocket close
#define socket_errno() (errno)
#endif /*&nbsp;!_WIN32 */

#ifdef _WIN32
#define popen _popen
#endif /* WIN32 */

/* packet operation macro */
#define PUT_BYTE(ptr,data) (*(unsigned char*)ptr = data)

/* debug message output */
void
debug( const char *fmt, ... )
{
    va_list args;
    if ( f_debug ) {
        va_start( args, fmt );
        fprintf(stderr, &quot;DEBUG: &quot;);
        vfprintf( stderr, fmt, args );
        va_end( args );
    }
}

void
debug_( const char *fmt, ... )                  /* without prefix */
{
    va_list args;
    if ( f_debug ) {
        va_start( args, fmt );
        vfprintf( stderr, fmt, args );
        va_end( args );
    }
}

/* error message output */
void
error( const char *fmt, ... )
{
    va_list args;
    va_start( args, fmt );
    fprintf(stderr, &quot;ERROR: &quot;);
    vfprintf( stderr, fmt, args );
    va_end( args );
}

void
fatal( const char *fmt, ... )
{
    va_list args;
    va_start( args, fmt );
    fprintf(stderr, &quot;FATAL: &quot;);
    vfprintf( stderr, fmt, args );
    va_end( args );
    exit (EXIT_FAILURE);
}


void *
xmalloc (size_t size)
{
    void *ret = malloc(size);
    if (ret == NULL)
	fatal(&quot;Cannot allocate memory:&nbsp;%d bytes.\n&quot;, size);
    return ret;
}

void
downcase( char *buf )
{
    while ( *buf ) {
        if ( isupper(*buf) )
            *buf += 'a'-'A';
        buf++;
    }
}

char *
expand_host_and_port (const char *fmt, const char *host, int port)
{
    const char *src;
    char *buf, *dst, *ptr;
    size_t len = strlen(fmt) + strlen(host) + 20;
    buf = xmalloc (len);
    dst = buf;
    src = fmt;
    
    while (*src) {
	if (*src == '%') {
	    switch (src[1]) {
	    case 'h':
		strcpy (dst, host);
		src += 2;
		break;
	    case 'p':
		snprintf (dst, len, &quot;%d&quot;, port);
		src += 2;
		break;
	    default:
		src ++;
		break;
	    }
	    dst = buf + strlen (buf);
	} else if (*src == '\\') {
	    switch (src[1]) {
	    case 'r':				/* CR */
		*dst++ = '\r';
		src += 2;
		break;
	    case 'n':				/* LF */
		*dst++ = '\n';
		src += 2;
		break;
	    case 't':				/* TAB */
		*dst++ = '\t';
		src += 2;
		break;
	    default:
		src ++;
		break;
	    }
	} else {
	    /* usual */
	    *dst++ = *src++;
	}
	*dst = '\0';
    }
    assert (strlen(buf) &lt; len);
    return buf;
}


int
lookup_resolve( const char *str )
{
    char *buf = strdup( str );
    int ret;

    downcase( buf );
    if ( strcmp( buf, &quot;both&quot; ) == 0 )
        ret = RESOLVE_BOTH;
    else if ( strcmp( buf, &quot;remote&quot; ) == 0 )
        ret = RESOLVE_REMOTE;
    else if ( strcmp( buf, &quot;local&quot; ) == 0 )
        ret = RESOLVE_LOCAL;
    else if ( strspn(buf, dotdigits) == strlen(buf) ) {
#ifndef WITH_RESOLVER
        fatal(&quot;Sorry, you can't specify to resolve the hostname with the -R option on Win32 environment.&quot;);
#endif /* not WITH_RESOLVER */
        ret = RESOLVE_LOCAL;                    /* this case is also 'local' */
        socks_ns.sin_addr.s_addr = inet_addr(buf);
        socks_ns.sin_family = AF_INET;
    }
    else
        ret = RESOLVE_UNKNOWN;
    free(buf);
    return ret;
}

char *
getusername(void)
{
#ifdef _WIN32
    static char buf[1024];
    DWORD size = sizeof(buf);
    buf[0] = '\0';
    GetUserName( buf, &amp;size);
    return buf;
#else  /* not _WIN32 */
    struct passwd *pw = getpwuid(getuid());
    if ( pw == NULL )
        fatal(&quot;getpwuid() failed for uid:&nbsp;%d\n&quot;, getuid());
    return pw-&gt;pw_name;
#endif /* not _WIN32 */
}

/* expect
   check STR is begin with substr with case-ignored comparison.
   Return 1 if matched, otherwise 0.
*/
int
expect( char *str, char *substr)
{
    int len = strlen(substr);
    while ( 0 &lt; len-- ) {
        if ( toupper(*str)&nbsp;!= toupper(*substr) )
            return 0;                           /* not matched */
        str++, substr++;
    }
    return 1;                   /* good, matched */
}


/** PARAMETER operation **/
#define PARAMETER_FILE &quot;/etc/connectrc&quot;
#define PARAMETER_DOTFILE &quot;.connectrc&quot;
typedef struct {
    char* name;
    char* value;
} PARAMETER_ITEM;
PARAMETER_ITEM parameter_table[] = {
    { ENV_SOCKS_SERVER, NULL },
    { ENV_SOCKS5_SERVER, NULL },
    { ENV_SOCKS4_SERVER, NULL },
    { ENV_SOCKS_RESOLVE, NULL },
    { ENV_SOCKS5_RESOLVE, NULL },
    { ENV_SOCKS4_RESOLVE, NULL },
    { ENV_SOCKS5_USER, NULL },
    { ENV_SOCKS5_PASSWD, NULL },
    { ENV_SOCKS5_PASSWORD, NULL },
    { ENV_HTTP_PROXY, NULL },
    { ENV_HTTP_PROXY_USER, NULL },
    { ENV_HTTP_PROXY_PASSWORD, NULL },
    { ENV_CONNECT_USER, NULL },
    { ENV_CONNECT_PASSWORD, NULL },
    { ENV_SSH_ASKPASS, NULL },
    { ENV_SOCKS5_DIRECT, NULL },
    { ENV_SOCKS4_DIRECT, NULL },
    { ENV_SOCKS_DIRECT, NULL },
    { ENV_HTTP_DIRECT, NULL },
    { ENV_CONNECT_DIRECT, NULL },
    { ENV_SOCKS5_AUTH, NULL },
    { NULL, NULL }
};

PARAMETER_ITEM*
find_parameter_item(const char* name)
{
    int i;
    for( i = 0; parameter_table[i].name&nbsp;!= NULL; i++ ){
        if ( strcmp(name, parameter_table[i].name) == 0 )
            return &amp;parameter_table[i];
    }
    return NULL;
}

void
read_parameter_file_1(const char* name)
{
    FILE* f;
    int line;
    char lbuf[1025];
    f = fopen(name, &quot;r&quot;);
    if( f ){
        debug(&quot;Reading parameter file(%s)\n&quot;, name);
        for ( line = 1; fgets(lbuf, 1024, f); line++ ) {
            char *p, *q, *param, *value;
            p = strchr(lbuf, '\n');
            if ( p == NULL )
                fatal(&quot;%s:%d: buffer overflow\n&quot;, name, line);
            *p = '\0';
            p = strchr(lbuf, '#');
            if ( p )
                *p = '\0';
            for ( p = lbuf; *p; p++ )
                if( *p&nbsp;!= ' ' &amp;&amp; *p&nbsp;!= '\t' ) break;
            if ( *p == '\0' ) continue;
            param = p;
            p = strchr(p, '=');
            if ( p == NULL ) {
                error(&quot;%s:%d: missing equal sign\n&quot;, name, line);
                continue;
            }
            for ( q = p - 1; q &gt;= lbuf; q-- )
                if ( *q&nbsp;!= ' ' &amp;&amp; *q&nbsp;!= '\t' ) break;
            *++q = '\0';
            for ( ++p; *p; p++ )
                if ( *p&nbsp;!= ' ' &amp;&amp; *p&nbsp;!= '\t' ) break;
            value = p;
            for (&nbsp;; *p; p++ );
            for ( p--; p &gt;= lbuf; p-- )
                if ( *p&nbsp;!= ' ' &amp;&amp; *p&nbsp;!= '\t' ) break;
            *++p = '\0';
            if ( param &amp;&amp; value ) {
                PARAMETER_ITEM *item;
                item = find_parameter_item(param);
                if ( item == NULL ) {
                    error(&quot;%s:%d: unknown parameter `%s'\n&quot;, name, line, param);
                    continue;
                }
                item-&gt;value = strdup(value);
                debug(&quot;Parameter `%s' is set to `%s'\n&quot;, param, value);
            }
        }
    }
}

void
read_parameter_file(void)
{
#if&nbsp;!defined(_WIN32) || defined(cygwin)
    char *name;
    struct passwd *pw;
#endif

    read_parameter_file_1(PARAMETER_FILE);
#if&nbsp;!defined(_WIN32) || defined(cygwin)
    pw = getpwuid(getuid());
    if ( pw == NULL )
        fatal(&quot;getpwuid() failed for uid:&nbsp;%d\n&quot;, getuid());
    name = xmalloc(strlen(pw-&gt;pw_dir) + strlen(PARAMETER_DOTFILE) + 2);
    strcpy(name, pw-&gt;pw_dir);
    strcat(name, &quot;/&quot; PARAMETER_DOTFILE);
    read_parameter_file_1(name);
    free(name);
#endif /* _WIN32 */
}

char*
getparam(const char* name)
{
    char *value = getenv(name);
    if ( value == NULL ){
        PARAMETER_ITEM *item = find_parameter_item(name);
        if ( item&nbsp;!= NULL )
            value = item-&gt;value;
    }
    return value;
}


/** DIRECT connection **/
#define MAX_DIRECT_ADDR_LIST 256

struct ADDRPAIR {
    struct in_addr addr;
    struct in_addr mask;
    int negative;
};

struct ADDRPAIR direct_addr_list[MAX_DIRECT_ADDR_LIST];
int n_direct_addr_list = 0;

void
mask_addr (void *addr, void *mask, int addrlen)
{
    char *a, *m;
    a = addr;
    m = mask;
    while ( 0 &lt; addrlen-- )
        *a++ &amp;= *m++;
}

int
add_direct_addr (struct in_addr *addr, struct in_addr *mask, int negative)
{
    struct in_addr iaddr;
    char *s;
    if ( MAX_DIRECT_ADDR_LIST &lt;= n_direct_addr_list ) {
        error(&quot;direct address table is full!\n&quot;);
        return -1;
    }
    iaddr = *addr;
    mask_addr(&amp;iaddr, mask, sizeof(iaddr));
    s = strdup(inet_ntoa(iaddr));
    debug(&quot;adding direct address entry:&nbsp;%s/%s\n&quot;, s, inet_ntoa(*mask));
    free(s);
    memcpy( &amp;direct_addr_list[n_direct_addr_list].addr,
            &amp;iaddr, sizeof(iaddr));
    memcpy( &amp;direct_addr_list[n_direct_addr_list].mask,
            mask, sizeof(*mask));
    direct_addr_list[n_direct_addr_list].negative = negative;
    n_direct_addr_list++;
    return 0;
}

int
parse_addr_pair (const char *str, struct in_addr *addr, struct in_addr *mask)
{
    /* NOTE: */
    /* Assume already be splitted by separator
       and formatted as folowing:
       1)  12.34.56.789/255.255.255.0
       2)  12.34.56.789/24
       3)  12.34.56.
       All above generates same addr/mask pair 12.34.56.0 and 255.255.255.0
    */
    const char *ptr;
    u_char *dsta, *dstm;
    int i, n;

    assert( str&nbsp;!= NULL );
    debug(&quot;parsing address pair: '%s'\n&quot;, str);
    addr-&gt;s_addr = 0;
    mask-&gt;s_addr = 0;
    ptr = str;
    dsta = (u_char*)&amp;addr-&gt;s_addr;
    dstm = (u_char*)&amp;mask-&gt;s_addr;
    for (i=0; i&lt;4; i++ ) {
        if ( *ptr == '\0' )
            break;              /* case of format #3 */
        if (&nbsp;!isdigit(*ptr) )
            return -1;          /* format error: */
        *dsta++ = atoi( ptr );
        *dstm++ = 255;          /* automatic mask for format #3 */
        while ( isdigit(*ptr) ) /* skip digits */
            ptr++;
        if ( *ptr == '.' )
            ptr++;
        else
            break;
    }
    /* At this point, *ptr points '/' or EOS ('\0') */
    if ( *ptr == '\0' )
        return 0;                       /* complete as format #3 */
    if ( *ptr&nbsp;!= '/' )
        return -1;                      /* format error */
    /* Now parse mask for format #1 or #2 */
    ptr++;
    mask-&gt;s_addr = 0;                   /* clear automatic mask */

    if ( strchr( ptr, '.') ) {
        /* case of format #1 */
        dstm = (u_char*)&amp;mask-&gt;s_addr;
        for (i=0; i&lt;4; i++) {
            if (&nbsp;!isdigit(*ptr) )
                return -1;              /* format error: */
            *dstm++ = atoi(ptr);
            while ( isdigit(*ptr) )     /* skip digits */
                ptr++;
            if ( *ptr == '.' )
                ptr++;
            else
                break;                  /* from for loop */
        }
        /* complete as format #1 */
    } else {
        /* case of format #2 */
        if (&nbsp;!isdigit(*ptr) )
            return -1;                  /* format error: */
        n = atoi(ptr);
        if ( n&lt;0 || 32&lt;n)
            return -1;                  /* format error */
        mask-&gt;s_addr = (n==0)? 0: htonl(((u_long)0xFFFFFFFF)&lt;&lt;(32-n));
        /* complete as format #1 */
    }
    return 0;
}

void
initialize_direct_addr (void)
{
    int negative;
    int n_entries;
    char *env = NULL, *beg, *next, *envkey = NULL;
    struct in_addr addr, mask;

    if ( relay_method == METHOD_SOCKS ){
        if ( socks_version == 5 )
            envkey = ENV_SOCKS5_DIRECT;
        else
            envkey = ENV_SOCKS4_DIRECT;
        env = getparam(envkey);
        if ( env == NULL )
            env = getparam(ENV_SOCKS_DIRECT);
    } else if ( relay_method == METHOD_HTTP ){
        env = getparam(ENV_HTTP_DIRECT);
    }

    if ( env == NULL )
        env = getparam(ENV_CONNECT_DIRECT);

    if ( env == NULL )
        return;                 /* no entry */
    debug(&quot;making direct addr list from: '%s'\n&quot;, env);
    env = strdup( env );        /* reallocate to modify */
    beg = next = env;
    n_entries = 0;
    do {
        if ( MAX_DIRECT_ADDR_LIST &lt;= n_entries ) {
            error(&quot;too many entries in&nbsp;%s&quot;, envkey);
            break;              /* from do loop */
        }
        next = strchr( beg, ',');
        if ( next&nbsp;!= NULL )
            *next++ = '\0';
        addr.s_addr = 0;
        mask.s_addr = 0;
        if (*beg == '!') {
            negative = 1;
            beg++;
        } else
            negative = 0;
        if (&nbsp;!parse_addr_pair( beg, &amp;addr, &amp;mask ) ) {
            add_direct_addr( &amp;addr, &amp;mask, negative );
        } else {
            error(&quot;invalid addr format in&nbsp;%s:&nbsp;%s\n&quot;, envkey, beg);
        }
        if ( next&nbsp;!= NULL )
            beg = next;
    } while ( next&nbsp;!= NULL );

    free( env );
    return;
}

int
cmp_addr (void *addr1, void *addr2, int addrlen)
{
    return memcmp( addr1, addr2, addrlen );
}

int
is_direct_address (const struct sockaddr_in *addr)
{
    int i;
    struct in_addr saddr, iaddr;

    saddr = addr-&gt;sin_addr;

    /* Note: assume IPV4 address&nbsp;!! */
    for (i=0; i&lt;n_direct_addr_list; i++ ) {
        iaddr = saddr;
        mask_addr( &amp;iaddr, &amp;direct_addr_list[i].mask,
                   sizeof(struct in_addr));
        if (cmp_addr(&amp;iaddr, &amp;direct_addr_list[i].addr,
                     sizeof(struct in_addr)) == 0) {
            if (direct_addr_list[i].negative) {
                debug(&quot;negative match, addr to be SOCKSify:&nbsp;%s\n&quot;,
                      inet_ntoa(saddr));
                return 0;       /* not direct */
            }
            if (!direct_addr_list[i].negative) {
                debug(&quot;positive match, addr to be direct:&nbsp;%s\n&quot;,
                      inet_ntoa(saddr));
                return 1;       /* direct*/
            }
        }
    }
    debug(&quot;not matched, addr to be SOCKSified:&nbsp;%s\n&quot;, inet_ntoa(saddr));
    return 0;                   /* not direct */
}


/** TTY operation **/

int intr_flag = 0;

#ifndef _WIN32
void
intr_handler(int sig)
{
    intr_flag = 1;
}

void
tty_change_echo(int fd, int enable)
{
    static struct termios ntio, otio;           /* new/old termios */
    static sigset_t nset, oset;                 /* new/old sigset */
    static struct sigaction nsa, osa;           /* new/old sigaction */
    static int disabled = 0;

    if ( disabled &amp;&amp; enable ) {
        /* enable echo */
        tcsetattr(fd, TCSANOW, &amp;otio);
        disabled = 0;
        /* resotore sigaction */
        sigprocmask(SIG_SETMASK, &amp;oset, NULL);
        sigaction(SIGINT, &amp;osa, NULL);
        if ( intr_flag&nbsp;!= 0 ) {
            /* re-generate signal  */
            kill(getpid(), SIGINT);
            sigemptyset(&amp;nset);
            sigsuspend(&amp;nset);
            intr_flag = 0;
        }
    } else if (!disabled &amp;&amp;&nbsp;!enable) {
        /* set SIGINTR handler and break syscall on singal */
        sigemptyset(&amp;nset);
        sigaddset(&amp;nset, SIGTSTP);
        sigprocmask(SIG_BLOCK, &amp;nset, &amp;oset);
        intr_flag = 0;
        memset(&amp;nsa, 0, sizeof(nsa));
        nsa.sa_handler = intr_handler;
        sigaction(SIGINT, &amp;nsa, &amp;osa);
        /* disable echo */
        if (tcgetattr(fd, &amp;otio) == 0 &amp;&amp; (otio.c_lflag &amp; ECHO)) {
            disabled = 1;
            ntio = otio;
            ntio.c_lflag &amp;= ~(ECHO | ECHOE | ECHOK | ECHONL);
            (void) tcsetattr(fd, TCSANOW, &amp;ntio);
        }
    }

    return;
}

#define TTY_NAME &quot;/dev/tty&quot;
int
tty_readpass( const char *prompt, char *buf, size_t size )
{
    int tty, ret = 0;

    tty = open(TTY_NAME, O_RDWR);
    if ( tty &lt; 0 ) {
        error(&quot;Unable to open&nbsp;%s\n&quot;, TTY_NAME);
        return -1;                              /* can't open tty */
    }
    if ( size &lt;= 0 )
        return -1;                              /* no room */
    write(tty, prompt, strlen(prompt));
    buf[0] = '\0';
    tty_change_echo(tty, 0);                    /* disable echo */
    ret = read(tty,buf, size-1);
    tty_change_echo(tty, 1);                    /* restore */
    write(tty, &quot;\n&quot;, 1);                        /* new line */
    close(tty);
    if ( strchr(buf,'\n') == NULL  )
        return -1;
    if ( 0 &lt; ret )
        buf[ret] = '\0';
    return ret;
}

#else  /* _WIN32 */

BOOL __stdcall
w32_intr_handler(DWORD dwCtrlType)
{
    if ( dwCtrlType == CTRL_C_EVENT ) {
        intr_flag = 1;
        return TRUE;
    } else {
        return FALSE;
    }
}

#define tty_readpass w32_tty_readpass
int
w32_tty_readpass( const char *prompt, char *buf, size_t size )
{
    HANDLE in = CreateFile(&quot;CONIN$&quot;, GENERIC_READ|GENERIC_WRITE,
                           0, NULL, OPEN_EXISTING, 0, NULL);
    HANDLE out = CreateFile(&quot;CONOUT$&quot;, GENERIC_WRITE,
                            0, NULL, OPEN_EXISTING, 0, NULL);
    DWORD mode;
    DWORD ret, bytes;

    if (in == INVALID_HANDLE_VALUE || out == INVALID_HANDLE_VALUE)
        fatal(&quot;Cannot open console. (errno=%d)&quot;, GetLastError());

    WriteFile(out, prompt, strlen(prompt), &amp;bytes, 0);
    SetConsoleCtrlHandler(w32_intr_handler, TRUE ); /* add handler */
    GetConsoleMode(in, &amp;mode);
    SetConsoleMode(in, mode&amp;~ENABLE_ECHO_INPUT); /* disable echo */
    ret = ReadFile(in, buf, size, &amp;bytes, 0);
    SetConsoleMode(in, mode);                   /* enable echo */
    SetConsoleCtrlHandler( w32_intr_handler, FALSE ); /* remove handler */
    if ( intr_flag )
        GenerateConsoleCtrlEvent(CTRL_C_EVENT, 0); /* re-signal */
    WriteFile(out,&quot;\n&quot;, 1, &amp;bytes, 0);
    CloseHandle(in);
    CloseHandle(out);
    return ret;
}

#endif /* _WIN32 */

/*** User / Password ***/

/* SOCKS5 and HTTP Proxy authentication may requires username and
   password. We ll give it via environment variable or tty.
   Username and password for authentication are decided by
   following rules:

   Username is taken from
     1) server location spec (i.e. user@host:port)
     2) environment variables (see tables.1)
     3) system account name currently logged in.

     Table.1 Order of environment variables for username

        |  SOCKS v5   |  SOCKS v4   |   HTTP proxy    |
      --+-------------+-------------+-----------------+
      1 | SOCKS45_USER | SOCKS4_USER | HTTP_PROXY_USER |
      --+-------------+-------------+                 |
      2 |        SOCKS_USER         |                 |
      --+---------------------------+-----------------+
      3 |              CONNECT_USER                   |
      --+---------------------------------------------+

   Password is taken from
     1) by environment variables (see table.2)
     2) by entering from tty.

     Table.2 Order of environment variables for password

        |    SOCKS v5     |     HTTP proxy      |
      --+-----------------+---------------------+
      1 | SOCKS5_PASSWD   |                     |
      --+-----------------+ HTTP_PROXY_PASSWORD |
      2 | SOCKS5_PASSWORD |                     |
      --+-----------------+---------------------+
      3 |           CONNECT_PASSWORD            |
      --+---------------------------------------+

      Note: SOCKS5_PASSWD which is added in rev. 1.79
            to share value with NEC SOCKS implementation.
 */

char *
determine_relay_user ()
{
    char *user = NULL;
    /* get username from environment variable, or system. */
    if (relay_method == METHOD_SOCKS) {
        if (user == NULL &amp;&amp; socks_version == 5)
            user = getparam (ENV_SOCKS5_USER);
        if (user == NULL &amp;&amp; socks_version == 4)
            user = getparam (ENV_SOCKS4_USER);
        if (user == NULL)
            user = getparam (ENV_SOCKS_USER);
    } else if (relay_method == METHOD_HTTP) {
        if (user == NULL)
            user = getparam (ENV_HTTP_PROXY_USER);
    }
    if (user == NULL)
        user = getparam (ENV_CONNECT_USER);
    /* determine relay user by system call if not yet. */
    if (user == NULL)
        user = getusername();
    return user;
}

char *
determine_relay_password ()
{
    char *pass = NULL;
    if (pass == NULL &amp;&amp; relay_method == METHOD_HTTP)
        pass = getparam(ENV_HTTP_PROXY_PASSWORD);
    if (pass == NULL &amp;&amp; relay_method == METHOD_SOCKS)
        pass = getparam(ENV_SOCKS5_PASSWD);
    if (pass == NULL &amp;&amp; relay_method == METHOD_SOCKS)
        pass = getparam(ENV_SOCKS5_PASSWORD);
    if (pass == NULL)
        pass = getparam(ENV_CONNECT_PASSWORD);
    return pass;
}


/*** network operations ***/


/* set_relay()
   Determine relay informations:
   method, host, port, and username.
   1st arg, METHOD should be METHOD_xxx.
   2nd arg, SPEC is hostname or hostname:port or user@hostame:port.
   hostname is domain name or dot notation.
   If port is omitted, use 80 for METHOD_HTTP method,
   use 1080 for METHOD_SOCKS method.
   Username is also able to given by 3rd. format.
   2nd argument SPEC can be NULL. if NULL, use environment variable.
 */
int
set_relay( int method, char *spec )
{
    char *buf, *sep, *resolve;

    relay_method = method;

    read_parameter_file();
    initialize_direct_addr();
    if (n_direct_addr_list == 0) {
        debug (&quot;No direct address are specified.\n&quot;);
    } else {
        int i;
        for ( i=0; i&lt;n_direct_addr_list; i++ ) {
            char *s1, *s2;
            s1 = strdup(inet_ntoa(direct_addr_list[i].addr));
            s2 = strdup(inet_ntoa(direct_addr_list[i].mask));
            debug(&quot; #%d:&nbsp;%c%s/%s\n&quot;, i,
                  (direct_addr_list[i].negative)? '!': ' ',
                  s1, s2);
            free(s1);
            free(s2);
        }
    }

    switch ( method ) {
    case METHOD_DIRECT:
        return -1;                              /* nothing to do */

    case METHOD_SOCKS:
        if ( spec == NULL ) {
            switch ( socks_version ) {
            case 5:
                spec = getparam(ENV_SOCKS5_SERVER);
                break;
            case 4:
                spec = getparam(ENV_SOCKS4_SERVER);
                break;
            }
        }
        if ( spec == NULL )
            spec = getparam(ENV_SOCKS_SERVER);

        if ( spec == NULL )
            fatal(&quot;Failed to determine SOCKS server.\n&quot;);
        relay_port = 1080;                      /* set default first */

        /* determine resolve method */
        if ( socks_resolve == RESOLVE_UNKNOWN ) {
            if ( ((socks_version == 5) &amp;&amp;
                  ((resolve = getparam(ENV_SOCKS5_RESOLVE))&nbsp;!= NULL)) ||
                 ((socks_version == 4) &amp;&amp;
                  ((resolve = getparam(ENV_SOCKS4_RESOLVE))&nbsp;!= NULL)) ||
                 ((resolve = getparam(ENV_SOCKS_RESOLVE))&nbsp;!= NULL) ) {
                socks_resolve = lookup_resolve( resolve );
                if ( socks_resolve == RESOLVE_UNKNOWN )
                    fatal(&quot;Invalid resolve method:&nbsp;%s\n&quot;, resolve);
            } else {
                /* default */
                if ( socks_version == 5 )
                    socks_resolve = RESOLVE_REMOTE;
                else
                    socks_resolve = RESOLVE_LOCAL;
            }
        }
        break;

    case METHOD_HTTP:
        if ( spec == NULL )
            spec = getparam(ENV_HTTP_PROXY);
        if ( spec == NULL )
            fatal(&quot;You must specify http proxy server\n&quot;);
        relay_port = 80;                        /* set default first */
        break;
    case METHOD_TELNET:
        if ( spec == NULL )
            spec = getparam(ENV_TELNET_PROXY);
        if ( spec == NULL )
            fatal(&quot;You must specify telnet proxy server\n&quot;);
        relay_port = 23;                        /* set default first */
    }

    if (expect( spec, HTTP_PROXY_PREFIX)) {
        /* URL format like: &quot;http://server:port/&quot; */
        /* extract server:port part */
        buf = strdup( spec + strlen(HTTP_PROXY_PREFIX));
        buf[strcspn(buf, &quot;/&quot;)] = '\0';
    } else {
        /* assume spec is aready &quot;server:port&quot; format */
        buf = strdup( spec );
    }
    spec = buf;

    /* check username in spec */
    sep = strchr( spec, '@' );
    if ( sep&nbsp;!= NULL ) {
        *sep = '\0';
        relay_user = strdup( spec );
        spec = sep +1;
    }
    if (relay_user == NULL)
        relay_user = determine_relay_user();

    /* split out hostname and port number from spec */
    sep = strchr(spec,':');
    if ( sep == NULL ) {
        /* hostname only, port is already set as default */
        relay_host = strdup( spec );
    } else {
        /* hostname and port */
        relay_port = atoi(sep+1);
        *sep = '\0';
        relay_host = strdup( spec );
    }
    free(buf);
    return 0;
}


u_short
resolve_port( const char *service )
{
    int port;
    if ( service[strspn (service, digits)] == '\0'  ) {
        /* all digits, port number */
        port = atoi(service);
    } else {
        /* treat as service name */
        struct servent *ent;
        ent = getservbyname( service, NULL );
        if ( ent == NULL ) {
            debug(&quot;Unknown service, '%s'\n&quot;, service);
            port = 0;
        } else {
            port = ntohs(ent-&gt;s_port);
            debug(&quot;service:&nbsp;%s =&gt;&nbsp;%d\n&quot;, service, port);
        }
    }
    return (u_short)port;
}

void
make_revstr(void)
{
    char *ptr;
    size_t len;
    ptr = strstr(rcs_revstr, &quot;: &quot;);
    if (!ptr) {
        revstr = strdup(&quot;unknown&quot;);
        return;
    }
    ptr += 2;
    len = strspn(ptr, dotdigits);
    if (0 &lt; len) {
        revstr = xmalloc(len+1);
        memcpy(revstr, ptr, len);
        revstr[len] = '\0';
    }
}

int
getarg( int argc, char **argv )
{
    int err = 0;
    char *ptr, *server = (char*)NULL;
    int method = METHOD_DIRECT;

    progname = *argv;
    argc--, argv++;

    /* check optinos */
    while ( (0 &lt; argc) &amp;&amp; (**argv == '-') ) {
        ptr = *argv + 1;
        while ( *ptr ) {
            switch ( *ptr ) {
            case 's':                           /* use SOCKS */
                method = METHOD_SOCKS;
                break;

            case 'n':                           /* no proxy */
                method = METHOD_DIRECT;
                break;

            case 'h':                           /* use http-proxy */
                method = METHOD_HTTP;
                break;
            case 't':
                method = METHOD_TELNET;
                break;

            case 'S':                           /* specify SOCKS server */
                if ( 1 &lt; argc ) {
                    argv++, argc--;
                    method = METHOD_SOCKS;
                    server = *argv;
                } else {
                    error(&quot;option '-%c' needs argument.\n&quot;, *ptr);
                    err++;
                }
                break;

            case 'H':                           /* specify http-proxy server */
                if ( 1 &lt; argc ) {
                    argv++, argc--;
                    method = METHOD_HTTP;
                    server = *argv;
                } else {
                    error(&quot;option '-%c' needs argument.\n&quot;, *ptr);
                    err++;
                }
                break;
            case 'T':                           /* specify telnet proxy server */
                if ( 1 &lt; argc ) {
                    argv++, argc--;
                    method = METHOD_TELNET;
                    server = *argv;
                } else {
                    error(&quot;option '-%c' needs argument.\n&quot;, *ptr);
                    err++;
                }
                break;

            case 'c':
                 if (1 &lt; argc) {
                      argv++, argc--;
                      telnet_command = *argv;
                 } else {
                      error(&quot;option '%c' needs argument.\n&quot;, *ptr);
                      err++;
                 }
                 break;

            case 'P':
                f_hold_session = 1;
                /* without break */
            case 'p':                          /* specify port to forward */
                if ( 1 &lt; argc ) {
                    argv++, argc--;
                    local_type = LOCAL_SOCKET;
                    local_port = resolve_port(*argv);
                } else {
                    error(&quot;option '-%c' needs argument.\n&quot;, *ptr);
                    err++;
                }
                break;

#ifndef _WIN32
            case 'w':
                if ( 1 &lt; argc ) {
                    argv++, argc--;
                    connect_timeout = atoi(*argv);
                } else {
                    error(&quot;option '-%c' needs argument.\n&quot;, *ptr);
                    err++;
                }
                break;
#endif /* not _WIN32 */

            case '4':
                socks_version = 4;
                break;

            case '5':
                socks_version = 5;
                break;

            case 'a':
                if ( 1 &lt; argc ) {
                    argv++, argc--;
                    socks5_auth = *argv;
                } else {
                    error(&quot;option '-%c' needs argument.\n&quot;, *ptr);
                    err++;
                }
                break;

            case 'R':                           /* specify resolve method */
                if ( 1 &lt; argc ) {
                    argv++, argc--;
                    socks_resolve = lookup_resolve( *argv );
                } else {
                    error(&quot;option '-%c' needs argument.\n&quot;, *ptr);
                    err++;
                }
                break;

            case 'V':                           /* print version */
                fprintf(stderr, &quot;%s\nVersion&nbsp;%s\n&quot;, progdesc, revstr);
                exit(0);

            case 'd':                           /* debug mode */
                f_debug++;
                break;

            default:
                error(&quot;unknown option '-%c'\n&quot;, *ptr);
                err++;
            }
            ptr++;
        }
        argc--, argv++;
    }

    /* check error */
    if ( 0 &lt; err )
        goto quit;

    set_relay( method, server );

    /* check destination HOST (MUST) */
    if ( argc == 0  ) {
        fprintf(stderr, &quot;%s\nVersion&nbsp;%s\n&quot;, progdesc, revstr);
        fprintf(stderr, usage, progname);
        exit(0);
    }
    dest_host = argv[0];
    /* decide port or service name from programname or argument */
    if ( ((ptr=strrchr( progname, '/' ))&nbsp;!= NULL) ||
         ((ptr=strchr( progname, '\\'))&nbsp;!= NULL) )
        ptr++;
    else
        ptr = progname;
    if ( dest_port == 0 ) {
        /* accept only if -P is not specified. */
        if ( 1 &lt; argc ) {
            /* get port number from argument (prior to progname) */
            /* NOTE: This way is for cvs ext method. */
            dest_port = resolve_port(argv[1]);
        } else if ( strncmp( ptr, &quot;connect-&quot;, 8) == 0 ) {
            /* decide port number from program name */
            char *str = strdup( ptr+8 );
            str[strcspn( str, &quot;.&quot; )] = '\0';
            dest_port = resolve_port(str);
            free(str);
        }
    }
    /* check port number */
    if ( dest_port &lt;= 0 ) {
        error( &quot;You must specify the destination port correctly.\n&quot;);
        err++;
        goto quit;
    }
    if ( (relay_method&nbsp;!= METHOD_DIRECT) &amp;&amp; (relay_port &lt;= 0) ) {
        error(&quot;Invalid relay port:&nbsp;%d\n&quot;, dest_port);
        err++;
        goto quit;
    }

quit:
    /* report for debugging */
    debug(&quot;relay_method =&nbsp;%s (%d)\n&quot;,
          method_names[relay_method], relay_method);
    if ( relay_method&nbsp;!= METHOD_DIRECT ) {
        debug(&quot;relay_host=%s\n&quot;, relay_host);
        debug(&quot;relay_port=%d\n&quot;, relay_port);
        debug(&quot;relay_user=%s\n&quot;, relay_user);
    }
    if ( relay_method == METHOD_SOCKS ) {
        debug(&quot;socks_version=%d\n&quot;, socks_version);
        debug(&quot;socks_resolve=%s (%d)\n&quot;,
              resolve_names[socks_resolve], socks_resolve);
    }
    debug(&quot;local_type=%s\n&quot;, local_type_names[local_type]);
    if ( local_type == LOCAL_SOCKET ) {
        debug(&quot;local_port=%d\n&quot;, local_port);
        if (f_hold_session)
            debug (&quot;  with holding remote session.\n&quot;);
    }
    debug(&quot;dest_host=%s\n&quot;, dest_host);
    debug(&quot;dest_port=%d\n&quot;, dest_port);
    if ( 0 &lt; err ) {
        fprintf(stderr, usage, progname);
        exit(1);
    }
    return 0;
}

#ifndef _WIN32
/* Time-out feature is not allowed for Win32 native compilers. */
/* MSVC and Borland C cannot but Cygwin and UNIXes can. */

/* timeout signal hander */
void
sig_timeout(void)
{
    debug( &quot;timed out\n&quot; );
    signal( SIGALRM, SIG_IGN );
    alarm( 0 );
}

/* set timeout param = seconds, 0 clears */
void
set_timeout(int timeout)
{
    /* This feature is allowed for UNIX or cygwin environments, currently */
    if ( timeout == 0 ) {
        debug( &quot;clearing timeout\n&quot; );
        signal( SIGALRM, SIG_IGN );
        alarm( 0 );
    } else {
        debug( &quot;setting timeout:&nbsp;%d seconds\n&quot;, timeout );
        signal(SIGALRM, (void *)sig_timeout);
        alarm( timeout );
    }
}
#endif

#if&nbsp;!defined(_WIN32) &amp;&amp;&nbsp;!defined(__CYGWIN32__)
void
switch_ns (struct sockaddr_in *ns)
{
    res_init();
    memcpy (&amp;_res.nsaddr_list[0], ns, sizeof(*ns));
    _res.nscount = 1;
    debug(&quot;Using nameserver at&nbsp;%s\n&quot;, inet_ntoa(ns-&gt;sin_addr));
}
#endif /*&nbsp;!_WIN32 &amp;&amp;&nbsp;!__CYGWIN32__ */

/* TODO: IPv6
   TODO: fallback if askpass execution failed.
 */

int
local_resolve (const char *host, struct sockaddr_in *addr)
{
    struct hostent *ent;
    if ( strspn(host, dotdigits) == strlen(host) ) {
        /* given by IPv4 address */
        addr-&gt;sin_family = AF_INET;
        addr-&gt;sin_addr.s_addr = inet_addr(host);
    } else {
        debug(&quot;resolving host by name:&nbsp;%s\n&quot;, host);
        ent = gethostbyname (host);
        if ( ent ) {
            memcpy (&amp;addr-&gt;sin_addr, ent-&gt;h_addr, ent-&gt;h_length);
            addr-&gt;sin_family = ent-&gt;h_addrtype;
            debug(&quot;resolved:&nbsp;%s (%s)\n&quot;,
                  host, inet_ntoa(addr-&gt;sin_addr));
        } else {
            debug(&quot;failed to resolve locally.\n&quot;);
            return -1;                          /* failed */
        }
    }
    return 0;                                   /* good */
}

int
open_connection( const char *host, u_short port )
{
    SOCKET s;
    struct sockaddr_in saddr;

    if ( relay_method == METHOD_DIRECT ) {
        host = dest_host;
        port = dest_port;
    } else if ((local_resolve (dest_host, &amp;saddr) &gt;= 0)&amp;&amp;
               (is_direct_address(&amp;saddr))) {
        debug(&quot;%s is connected directly\n&quot;, dest_host);
        relay_method = METHOD_DIRECT;
        host = dest_host;
        port = dest_port;
    } else {
        host = relay_host;
        port = relay_port;
    }

    if (local_resolve (host, &amp;saddr) &lt; 0) {
        error(&quot;can't resolve hostname:&nbsp;%s\n&quot;, host);
        return SOCKET_ERROR;
    }
    saddr.sin_port = htons(port);

    debug(&quot;connecting to&nbsp;%s:%u\n&quot;, inet_ntoa(saddr.sin_addr), port);
    s = socket( AF_INET, SOCK_STREAM, 0 );
    if ( connect( s, (struct sockaddr *)&amp;saddr, sizeof(saddr))
         == SOCKET_ERROR) {
        debug( &quot;connect() failed.\n&quot;);
        return SOCKET_ERROR;
    }
    return s;
}

void
report_text( char *prefix, char *buf )
{
    static char work[1024];
    char *tmp;

    if (&nbsp;!f_debug )
        return;
    if (&nbsp;!f_report )
        return;                                 /* don't report */
    debug(&quot;%s \&quot;&quot;, prefix);
    while ( *buf ) {
        memset( work, 0, sizeof(work));
        tmp = work;
        while ( *buf &amp;&amp; ((tmp-work) &lt; (int)sizeof(work)-5) ) {
            switch ( *buf ) {
            case '\t': *tmp++ = '\\'; *tmp++ = 't'; break;
            case '\r': *tmp++ = '\\'; *tmp++ = 'r'; break;
            case '\n': *tmp++ = '\\'; *tmp++ = 'n'; break;
            case '\\': *tmp++ = '\\'; *tmp++ = '\\'; break;
            default:
                if ( isprint(*buf) ) {
                    *tmp++ = *buf;
                } else {
		    int consumed = tmp - work;
                    snprintf( tmp, sizeof(work)-consumed,
			      &quot;\\x%02X&quot;, (unsigned char)*buf);
                    tmp += strlen(tmp);
                }
            }
            buf++;
            *tmp = '\0';
        }
        debug_(&quot;%s&quot;, work);
    }

    debug_(&quot;\&quot;\n&quot;);
}


void
report_bytes( char *prefix, char *buf, int len )
{
    if (&nbsp;! f_debug )
        return;
    debug( &quot;%s&quot;, prefix );
    while ( 0 &lt; len ) {
        fprintf( stderr, &quot;&nbsp;%02x&quot;, *(unsigned char *)buf);
        buf++;
        len--;
    }
    fprintf(stderr, &quot;\n&quot;);
    return;
}

int
atomic_out( SOCKET s, char *buf, int size )
{
    int ret, len;

    assert( buf&nbsp;!= NULL );
    assert( 0&lt;=size );
    /* do atomic out */
    ret = 0;
    while ( 0 &lt; size ) {
        len = send( s, buf+ret, size, 0 );
        if ( len == -1 )
            fatal(&quot;atomic_out() failed to send(),&nbsp;%d\n&quot;, socket_errno());
        ret += len;
        size -= len;
    }
    if (!f_report) {
        debug(&quot;atomic_out()  [some bytes]\n&quot;);
        debug(&quot;&gt;&gt;&gt; xx xx xx xx ...\n&quot;);
    } else {
        debug(&quot;atomic_out()  [%d bytes]\n&quot;, ret);
        report_bytes(&quot;&gt;&gt;&gt;&quot;, buf, ret);
    }
    return ret;
}

int
atomic_in( SOCKET s, char *buf, int size )
{
    int ret, len;

    assert( buf&nbsp;!= NULL );
    assert( 0&lt;=size );

    /* do atomic in */
    ret = 0;
    while ( 0 &lt; size ) {
        len = recv( s, buf+ret, size, 0 );
        if ( len == -1 ) {
            fatal(&quot;atomic_in() failed to recv(),&nbsp;%d\n&quot;, socket_errno());
        } else if ( len == 0 ) {
            fatal( &quot;Connection closed by peer.\n&quot;);
        }
        ret += len;
        size -= len;
    }
    if (!f_report) {
        debug(&quot;atomic_in()  [some bytes]\n&quot;);
        debug(&quot;&lt;&lt;&lt; xx xx xx xx ...\n&quot;);
    } else {
        debug(&quot;atomic_in() [%d bytes]\n&quot;, ret);
        report_bytes(&quot;&lt;&lt;&lt;&quot;, buf, ret);
    }
    return ret;
}

int
line_input( SOCKET s, char *buf, int size )
{
    char *dst = buf;
    if ( size == 0 )
        return 0;                               /* no error */
    size--;
    while ( 0 &lt; size ) {
        switch ( recv( s, dst, 1, 0) ) {        /* recv one-by-one */
        case SOCKET_ERROR:
            error(&quot;recv() error\n&quot;);
            return -1;                          /* error */
        case 0:
            size = 0;                           /* end of stream */
            break;
        default:
            /* continue reading until last 1 char is EOL? */
            if ( *dst == '\n' ) {
                /* finished */
                size = 0;
            } else {
                /* more... */
                size--;
            }
            dst++;
        }
    }
    *dst = '\0';
    report_text( &quot;&lt;&lt;&lt;&quot;, buf);
    return 0;
}

/* cut_token()
   Span token in given string STR until char in DELIM is appeared.
   Then replace contiguous DELIMS with '\0' for string termination
   and returns next pointer.
   If no next token, return NULL.
*/
char *
cut_token( char *str, char *delim)
{
    char *ptr = str + strcspn(str, delim);
    char *end = ptr + strspn(ptr, delim);
    if ( ptr == str )
        return NULL;
    while ( ptr &lt; end )
        *ptr++ = '\0';
    return ptr;
}

const char *
lookup(int num, LOOKUP_ITEM *items)
{
    int i = 0;
    while (0 &lt;= items[i].num) {
        if (items[i].num == num)
            return items[i].str;
        i++;
    }
    return &quot;(unknown)&quot;;
}

/* readpass()
   password input routine
   Use ssh-askpass (same mechanism to OpenSSH)
*/
char *
readpass( const char* prompt, ...)
{
    static char buf[1000];                      /* XXX, don't be fix length */
    va_list args;
    va_start(args, prompt);
    vsnprintf(buf, sizeof(buf), prompt, args);
    va_end(args);

    if ( getparam(ENV_SSH_ASKPASS)
#if&nbsp;!defined(_WIN32) &amp;&amp;&nbsp;!defined(__CYGWIN32__)
         &amp;&amp; getenv(&quot;DISPLAY&quot;)
#endif /* not _WIN32 &amp;&amp; not __CYGWIN32__ */
        ) {
        /* use ssh-askpass to get password */
        FILE *fp;
        char *askpass = getparam(ENV_SSH_ASKPASS), *cmd;
	int cmd_size = strlen(askpass) +1 +1 +strlen(buf) +1;
        cmd = xmalloc(cmd_size);
        snprintf(cmd, cmd_size, &quot;%s \&quot;%s\&quot;&quot;, askpass, buf);
        fp = popen(cmd, &quot;r&quot;);
        free(cmd);
        if ( fp == NULL )
            return NULL;                        /* fail */
        buf[0] = '\0';
        if (fgets(buf, sizeof(buf), fp) == NULL)
            return NULL;                        /* fail */
        fclose(fp);
    } else {
        tty_readpass( buf, buf, sizeof(buf));
    }
    buf[strcspn(buf, &quot;\r\n&quot;)] = '\0';
    return buf;
}

static int
socks5_do_auth_userpass( int s )
{
    unsigned char buf[1024], *ptr;
    char *pass = NULL;
    int len;

    /* do User/Password authentication. */
    /* This feature requires username and password from
       command line argument or environment variable,
       or terminal. */
    if (relay_user == NULL)
        fatal(&quot;cannot determine user name.\n&quot;);

    /* get password from environment variable if exists. */
    if ((pass=determine_relay_password()) == NULL &amp;&amp;
        (pass=readpass(&quot;Enter SOCKS5 password for&nbsp;%s@%s: &quot;,
                       relay_user, relay_host)) == NULL)
        fatal(&quot;Cannot get password for user:&nbsp;%s\n&quot;, relay_user);

    /* make authentication packet */
    ptr = buf;
    PUT_BYTE( ptr++, 1 );                       /* subnegotiation ver.: 1 */
    len = strlen( relay_user );                 /* ULEN and UNAME */
    PUT_BYTE( ptr++, len );
    strcpy( ptr, relay_user );
    ptr += 
96a8
len;
    len = strlen( pass );                       /* PLEN and PASSWD */
    PUT_BYTE( ptr++, strlen(pass));
    strcpy( ptr, pass );
    ptr += len;
    memset (pass, 0, strlen(pass));             /* erase password */

    /* send it and get answer */
    f_report = 0;
    atomic_out( s, buf, ptr-buf );
    f_report = 1;
    atomic_in( s, buf, 2 );

    /* check status */
    if ( buf[1] == 0 )
        return 0;                               /* success */
    else
        return -1;                              /* fail */
}

static const char *
socks5_getauthname( int auth )
{
    switch ( auth ) {
    case SOCKS5_AUTH_REJECT: return &quot;REJECTED&quot;;
    case SOCKS5_AUTH_NOAUTH: return &quot;NO-AUTH&quot;;
    case SOCKS5_AUTH_GSSAPI: return &quot;GSSAPI&quot;;
    case SOCKS5_AUTH_USERPASS: return &quot;USERPASS&quot;;
    case SOCKS5_AUTH_CHAP: return &quot;CHAP&quot;;
    case SOCKS5_AUTH_EAP: return &quot;EAP&quot;;
    case SOCKS5_AUTH_MAF: return &quot;MAF&quot;;
    default: return &quot;(unknown)&quot;;
    }
}

typedef struct {
    char* name;
    unsigned char auth;
} AUTH_METHOD_ITEM;

AUTH_METHOD_ITEM socks5_auth_table[] = {
    { &quot;none&quot;, SOCKS5_AUTH_NOAUTH },
    { &quot;gssapi&quot;, SOCKS5_AUTH_GSSAPI },
    { &quot;userpass&quot;, SOCKS5_AUTH_USERPASS },
    { &quot;chap&quot;, SOCKS5_AUTH_CHAP },
    { NULL, -1 },
};

int
socks5_auth_parse_1(char *start, char *end){
    int i, len;
    for (&nbsp;; *start; start++ )
        if ( *start&nbsp;!= ' ' &amp;&amp; *start&nbsp;!= '\t') break;
    for ( end--; end &gt;= start; end-- ) {
        if ( *end&nbsp;!= ' ' &amp;&amp; *end&nbsp;!= '\t'){
            end++;
            break;
        }
    }
    len = end - start;
    for ( i = 0; socks5_auth_table[i].name&nbsp;!= NULL; i++ ){
        if ( strncmp(start, socks5_auth_table[i].name, len) == 0) {
            return socks5_auth_table[i].auth;
        }
    }
    fatal(&quot;Unknown auth method:&nbsp;%s\n&quot;, start);
    return -1;
}

int
socks5_auth_parse(char *start, unsigned char *auth_list, int max_auth){
    char *end;
    int i = 0;
    while ( i &lt; max_auth ) {
        end = strchr(start, ',');
        if (*start &amp;&amp; end) {
            auth_list[i++] = socks5_auth_parse_1(start, end);
            start = ++end;
        } else {
            break;
        }
    }
    if ( *start &amp;&amp; ( i &lt; max_auth ) ){
        for( end = start; *end; end++ );
        auth_list[i++] = socks5_auth_parse_1(start, end);
    } else {
        fatal(&quot;Too much auth method.\n&quot;);
    }
    return i;
}

/* begin SOCKS5 relaying
   And no authentication is supported.
 */
int
begin_socks5_relay( SOCKET s )
{
    unsigned char buf[256], *ptr, *env = socks5_auth;
    unsigned char n_auth = 0; unsigned char auth_list[10], auth_method;
    int len, auth_result, i;

    debug( &quot;begin_socks_relay()\n&quot;);

    /* request authentication */
    ptr = buf;
    PUT_BYTE( ptr++, 5);                        /* SOCKS version (5) */

    if ( env == NULL )
        env = getparam(ENV_SOCKS5_AUTH);
    if ( env == NULL ) {
        /* add no-auth authentication */
        auth_list[n_auth++] = SOCKS5_AUTH_NOAUTH;
        /* add user/pass authentication */
        auth_list[n_auth++] = SOCKS5_AUTH_USERPASS;
    } else {
        n_auth = socks5_auth_parse(env, auth_list, 10);
    }
    PUT_BYTE( ptr++, n_auth);                   /* num auth */
    for (i=0; i&lt;n_auth; i++) {
        debug(&quot;available auth method[%d] =&nbsp;%s (0x%02x)\n&quot;,
              i, socks5_getauthname(auth_list[i]), auth_list[i]);
        PUT_BYTE( ptr++, auth_list[i]);         /* authentications */
    }
    atomic_out( s, buf, ptr-buf );              /* send requst */
    atomic_in( s, buf, 2 );                     /* recv response */
    if ( (buf[0]&nbsp;!= 5) ||                       /* ver5 response */
         (buf[1] == 0xFF) ) {                   /* check auth method */
        error(&quot;No auth method accepted.\n&quot;);
        return -1;
    }
    auth_method = buf[1];

    debug(&quot;auth method:&nbsp;%s\n&quot;, socks5_getauthname(auth_method));

    switch ( auth_method ) {
    case SOCKS5_AUTH_REJECT:
        error(&quot;No acceptable authentication method\n&quot;);
        return -1;                              /* fail */

    case SOCKS5_AUTH_NOAUTH:
        /* nothing to do */
        auth_result = 0;
        break;

    case SOCKS5_AUTH_USERPASS:
        auth_result = socks5_do_auth_userpass(s);
        break;

    default:
        error(&quot;Unsupported authentication method:&nbsp;%s\n&quot;,
              socks5_getauthname( auth_method ));
        return -1;                              /* fail */
    }
    if ( auth_result&nbsp;!= 0 ) {
        error(&quot;Authentication failed.\n&quot;);
        return -1;
    }
    /* request to connect */
    ptr = buf;
    PUT_BYTE( ptr++, 5);                        /* SOCKS version (5) */
    PUT_BYTE( ptr++, 1);                        /* CMD: CONNECT */
    PUT_BYTE( ptr++, 0);                        /* FLG: 0 */
    if ( dest_addr.sin_addr.s_addr == 0 ) {
        /* resolved by SOCKS server */
        PUT_BYTE( ptr++, 3);                    /* ATYP: DOMAINNAME */
        len = strlen(dest_host);
        PUT_BYTE( ptr++, len);                  /* DST.ADDR (len) */
        memcpy( ptr, dest_host, len );          /* (hostname) */
        ptr += len;
    } else {
        /* resolved localy */
        PUT_BYTE( ptr++, 1 );                   /* ATYP: IPv4 */
        memcpy( ptr, &amp;dest_addr.sin_addr.s_addr, sizeof(dest_addr.sin_addr));
        ptr += sizeof(dest_addr.sin_addr);
    }
    PUT_BYTE( ptr++, dest_port&gt;&gt;8);     /* DST.PORT */
    PUT_BYTE( ptr++, dest_port&amp;0xFF);
    atomic_out( s, buf, ptr-buf);               /* send request */
    atomic_in( s, buf, 4 );                     /* recv response */
    if ( (buf[1]&nbsp;!= SOCKS5_REP_SUCCEEDED) ) {   /* check reply code */
        error(&quot;Got error response from SOCKS server:&nbsp;%d (%s).\n&quot;,
              buf[1], lookup(buf[1], socks5_rep_names));
        return -1;
    }
    ptr = buf + 4;
    switch ( buf[3] ) {                         /* case by ATYP */
    case 1:                                     /* IP v4 ADDR*/
        atomic_in( s, ptr, 4+2 );               /* recv IPv4 addr and port */
        break;
    case 3:                                     /* DOMAINNAME */
        atomic_in( s, ptr, 1 );                 /* recv name and port */
        atomic_in( s, ptr+1, *(unsigned char*)ptr + 2);
        break;
    case 4:                                     /* IP v6 ADDR */
        atomic_in( s, ptr, 16+2 );              /* recv IPv6 addr and port */
        break;
    }

    /* Conguraturation, connected via SOCKS5 server! */
    return 0;
}

/* begin SOCKS protocol 4 relaying
   And no authentication is supported.

   There's SOCKS protocol version 4 and 4a. Protocol version
   4a has capability to resolve hostname by SOCKS server, so
   we don't need resolving IP address of destination host on
   local machine.

   Environment variable SOCKS_RESOLVE directs how to resolve
   IP addess. There's 3 keywords allowed; &quot;local&quot;, &quot;remote&quot;
   and &quot;both&quot; (case insensitive). Keyword &quot;local&quot; means taht
   target host name is resolved by localhost resolver
   (usualy with gethostbyname()), &quot;remote&quot; means by remote
   SOCKS server, &quot;both&quot; means to try resolving by localhost
   then remote.

   SOCKS4 protocol and authentication of SOCKS5 protocol
   requires user name on connect request.
   User name is determined by following method.

   1. If server spec has user@hostname:port format then
      user part is used for this SOCKS server.

   2. Get user name from environment variable LOGNAME, USER
      (in this order).

*/
int
begin_socks4_relay( SOCKET s )
{
    unsigned char buf[256], *ptr;

    debug( &quot;begin_socks_relay()\n&quot;);

    /* make connect request packet
       protocol v4:
         VN:1, CD:1, PORT:2, ADDR:4, USER:n, NULL:1
       protocol v4a:
         VN:1, CD:1, PORT:2, DUMMY:4, USER:n, NULL:1, HOSTNAME:n, NULL:1
    */
    ptr = buf;
    PUT_BYTE( ptr++, 4);                        /* protocol version (4) */
    PUT_BYTE( ptr++, 1);                        /* CONNECT command */
    PUT_BYTE( ptr++, dest_port&gt;&gt;8);     /* destination Port */
    PUT_BYTE( ptr++, dest_port&amp;0xFF);
    /* destination IP */
    memcpy(ptr, &amp;dest_addr.sin_addr, sizeof(dest_addr.sin_addr));
    ptr += sizeof(dest_addr.sin_addr);
    if ( dest_addr.sin_addr.s_addr == 0 )
        *(ptr-1) = 1;                           /* fake, protocol 4a */
    /* username */
    if (relay_user == NULL)
        fatal( &quot;Cannot determine user name.\n&quot;);
    strcpy( ptr, relay_user );
    ptr += strlen( relay_user ) +1;
    /* destination host name (for protocol 4a) */
    if ( (socks_version == 4) &amp;&amp; (dest_addr.sin_addr.s_addr == 0)) {
        strcpy( ptr, dest_host );
        ptr += strlen( dest_host ) +1;
    }
    /* send command and get response
       response is: VN:1, CD:1, PORT:2, ADDR:4 */
    atomic_out( s, buf, ptr-buf);               /* send request */
    atomic_in( s, buf, 8 );                     /* recv response */
    if ( (buf[1]&nbsp;!= SOCKS4_REP_SUCCEEDED) ) {   /* check reply code */
        error(&quot;Got error response:&nbsp;%d: '%s'.\n&quot;,
              buf[1], lookup(buf[1], socks4_rep_names));
        return -1;                              /* failed */
    }

    /* Conguraturation, connected via SOCKS4 server! */
    return 0;
}

int
sendf(SOCKET s, const char *fmt,...)
{
    static char buf[10240];                     /* xxx, enough? */

    va_list args;
    va_start( args, fmt );
    vsnprintf( buf, sizeof(buf), fmt, args );
    va_end( args );

    report_text(&quot;&gt;&gt;&gt;&quot;, buf);
    if ( send(s, buf, strlen(buf), 0) == SOCKET_ERROR ) {
        debug(&quot;failed to send http request. errno=%d\n&quot;, socket_errno());
        return -1;
    }
    return 0;
}

const char *base64_table =
&quot;ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/&quot;;

char *
make_base64_string(const char *str)
{
    static char *buf;
    unsigned char *src;
    char *dst;
    int bits, data, src_len, dst_len;
    /* make base64 string */
    src_len = strlen(str);
    dst_len = (src_len+2)/3*4;
    buf = xmalloc(dst_len+1);
    bits = data = 0;
    src = (unsigned char *)str;
    dst = (unsigned char *)buf;
    while ( dst_len-- ) {
        if ( bits &lt; 6 ) {
            data = (data &lt;&lt; 8) | *src;
            bits += 8;
            if ( *src&nbsp;!= 0 )
                src++;
        }
        *dst++ = base64_table[0x3F &amp; (data &gt;&gt; (bits-6))];
        bits -= 6;
    }
    *dst = '\0';
    /* fix-up tail padding */
    switch ( src_len%3 ) {
    case 1:
        *--dst = '=';
    case 2:
        *--dst = '=';
    }
    return buf;
}


int
basic_auth (SOCKET s)
{
    char *userpass;
    char *cred;
    const char *user = relay_user;
    char *pass = NULL;
    int len, ret;

    /* Get username/password for authentication */
    if (user == NULL)
        fatal(&quot;Cannot decide username for proxy authentication.&quot;);
    if ((pass = determine_relay_password ()) == NULL &amp;&amp;
        (pass = readpass(&quot;Enter proxy authentication password for&nbsp;%s@%s: &quot;,
                         relay_user, relay_host)) == NULL)
        fatal(&quot;Cannot decide password for proxy authentication.&quot;);

    len = strlen(user)+strlen(pass)+1;
    userpass = xmalloc(len+1);
    snprintf(userpass, len+1, &quot;%s:%s&quot;, user, pass);
    memset (pass, 0, strlen(pass));
    cred = make_base64_string(userpass);
    memset (userpass, 0, len);

    f_report = 0;                               /* don't report for security */
    ret = sendf(s, &quot;Proxy-Authorization: Basic&nbsp;%s\r\n&quot;, cred);
    f_report = 1;
    report_text(&quot;&gt;&gt;&gt;&quot;, &quot;Proxy-Authorization: Basic xxxxx\r\n&quot;);

    memset(cred, 0, strlen(cred));
    free(cred);

    return ret;
}

/* begin relaying via HTTP proxy
   Directs CONNECT method to proxy server to connect to
   destination host (and port). It may not be allowed on your
   proxy server.
 */
int
begin_http_relay( SOCKET s )
{
    char buf[1024];
    int result;
    char *auth_what;

    debug(&quot;begin_http_relay()\n&quot;);

    if (sendf(s,&quot;CONNECT&nbsp;%s:%d HTTP/1.0\r\n&quot;, dest_host, dest_port) &lt; 0)
        return START_ERROR;
    if (proxy_auth_type == PROXY_AUTH_BASIC &amp;&amp; basic_auth (s) &lt; 0)
        return START_ERROR;
    if (sendf(s,&quot;\r\n&quot;) &lt; 0)
        return START_ERROR;

    /* get response */
    if ( line_input(s, buf, sizeof(buf)) &lt; 0 ) {
        debug(&quot;failed to read http response.\n&quot;);
        return START_ERROR;
    }

    /* check status */
    if (!strchr(buf, ' ')) {
	error (&quot;Unexpected http response: '%s'.\n&quot;, buf);
	return START_ERROR;
    }
    result = atoi(strchr(buf,' '));

    switch ( result ) {
    case 200:
        /* Conguraturation, connected via http proxy server! */
        debug(&quot;connected, start user session.\n&quot;);
        break;
    case 302:                                   /* redirect */
        do {
            if (line_input(s, buf, sizeof(buf)))
                break;
            downcase(buf);
            if (expect(buf, &quot;Location: &quot;)) {
                relay_host = cut_token(buf, &quot;//&quot;);
                cut_token(buf, &quot;/&quot;);
                relay_port = atoi(cut_token(buf, &quot;:&quot;));
            }
        } while (strcmp(buf,&quot;\r\n&quot;)&nbsp;!= 0);
        return START_RETRY;

    /* We handle both 401 and 407 codes here: 401 is WWW-Authenticate, which
     * not strictly the correct response, but some proxies do send this (e.g.
     * Symantec's Raptor firewall) */
    case 401:                                   /* WWW-Auth required */
    case 407:                                   /* Proxy-Auth required */
        /** NOTE: As easy implementation, we support only BASIC scheme
            and ignore realm. */
        /* If proxy_auth_type is PROXY_AUTH_BASIC and get
         this result code, authentication was failed. */
        if (proxy_auth_type&nbsp;!= PROXY_AUTH_NONE) {
            error(&quot;Authentication failed.\n&quot;);
            return START_ERROR;
        }
        auth_what = (result == 401)&nbsp;? &quot;WWW-Authenticate:&quot;&nbsp;: &quot;Proxy-Authenticate:&quot;;
        do {
            if ( line_input(s, buf, sizeof(buf)) ) {
                break;
            }
            downcase(buf);
            if (expect(buf, auth_what)) {
                /* parse type and realm */
                char *scheme, *realm;
                scheme = cut_token(buf, &quot; &quot;);
                realm = cut_token(scheme, &quot; &quot;);
                if ( scheme == NULL || realm == NULL ) {
                    debug(&quot;Invalid format of&nbsp;%s field.&quot;, auth_what);
                    return START_ERROR;         /* fail */
                }
                /* check supported auth type */
                if (expect(scheme, &quot;basic&quot;)) {
                    proxy_auth_type = PROXY_AUTH_BASIC;
                } else {
                    debug(&quot;Unsupported authentication type:&nbsp;%s&quot;, scheme);
                }
            }
        } while (strcmp(buf,&quot;\r\n&quot;)&nbsp;!= 0);
        if ( proxy_auth_type == PROXY_AUTH_NONE ) {
            debug(&quot;Can't find&nbsp;%s in response header.&quot;, auth_what);
            return START_ERROR;
        } else {
            return START_RETRY;
        }

    default:
        /* Not allowed */
        debug(&quot;http proxy is not allowed.\n&quot;);
        return START_ERROR;
    }
    /* skip to end of response header */
    do {
        if ( line_input(s, buf, sizeof(buf) ) ) {
            debug(&quot;Can't skip response headers\n&quot;);
            return START_ERROR;
        }
    } while ( strcmp(buf,&quot;\r\n&quot;)&nbsp;!= 0 );

    return START_OK;
}

/* begin relaying via TELNET proxy.
   Sends string specified by telnet_command (-c option) with
   replacing host name and port number to the socket.  */
int
begin_telnet_relay( SOCKET s )
{
    char buf[1024];
    char *cmd;
    char *good_phrase = &quot;connected to&quot;;
    char *bad_phrase_list[] = {
	&quot; failed&quot;, &quot; refused&quot;, &quot; rejected&quot;, &quot; closed&quot;
    };
    char sep = ' ';
    int i;

    debug(&quot;begin_telnet_relay()\n&quot;);

    /* report phrase */
    debug(&quot;good phrase: '%s'\n&quot;, good_phrase);
    debug(&quot;bad phrases&quot;);
    sep = ':';
    for (i=0; i&lt; (sizeof(bad_phrase_list) / sizeof(char*)); i++) {
	debug_(&quot;%c '%s'&quot;, sep, bad_phrase_list[i]);
	sep = ',';
    }
    debug_(&quot;\n&quot;);

    /* make request string with replacing&nbsp;%h by destination hostname
       and&nbsp;%p by port number, etc. */
    cmd = expand_host_and_port(telnet_command, dest_host, dest_port);
    
    /* Sorry, we send request string now without waiting a prompt. */
    if (sendf(s, &quot;%s\r\n&quot;, cmd) &lt; 0) {
	free(cmd);
        return START_ERROR;
    }
    free(cmd);

    /* Process answer from proxy until good or bad phrase is detected.  We
       assume that the good phrase should be appeared only in the final
       line of proxy responses. Bad keywods in the line causes operation
       fail. First checks a good phrase, then checks bad phrases.
       If no match, continue reading line from proxy. */
    while (!line_input(s, buf, sizeof(buf)) &amp;&amp; buf[0]&nbsp;!= '\0') {
	downcase(buf);
	/* first, check good phrase */
        if (strstr(buf, good_phrase)) {
	    debug(&quot;good phrase is detected: '%s'\n&quot;, good_phrase);
            return START_OK;
        }
	/* then, check bad phrase */
	for (i=0; i&lt;(sizeof(bad_phrase_list)/sizeof(char*)); i++) {
	    if (strstr(buf, bad_phrase_list[i])&nbsp;!= NULL) {
		debug(&quot;bad phrase is detected: '%s'\n&quot;, bad_phrase_list[i]);
		return START_ERROR;
	    }
        }
    }
    debug(&quot;error reading from telnet proxy\n&quot;);

    return START_ERROR;
}


#ifdef _WIN32
/* ddatalen()
   Returns 1 if data is available, otherwise return 0
 */
int
stdindatalen (void)
{
    DWORD len = 0;
    struct stat st;
    fstat( 0, &amp;st );
    if ( st.st_mode &amp; _S_IFIFO ) {
        /* in case of PIPE */
        if (&nbsp;!PeekNamedPipe( GetStdHandle(STD_INPUT_HANDLE),
                             NULL, 0, NULL, &amp;len, NULL) ) {
            if ( GetLastError() == ERROR_BROKEN_PIPE ) {
                /* PIPE source is closed */
                /* read() will detects EOF */
                len = 1;
            } else {
                fatal(&quot;PeekNamedPipe() failed, errno=%d\n&quot;,
                      GetLastError());
            }
        }
    } else if ( st.st_mode &amp; _S_IFREG ) {
        /* in case of regular file (redirected) */
        len = 1;                        /* always data ready */
    } else if ( _kbhit() ) {
        /* in case of console */
        len = 1;
    }
    return len;
}
#endif /* _WIN32 */

/* relay byte from stdin to socket and fro socket to stdout.
   returns reason of termination */
int
do_repeater( SOCKET local_in, SOCKET local_out, SOCKET remote )
{
    /** vars for local input data **/
    char lbuf[1024];                            /* local input buffer */
    int lbuf_len;                               /* available data in lbuf */
    int f_local;                                /* read local input more? */
    /** vars for remote input data **/
    char rbuf[1024];                            /* remote input buffer */
    int rbuf_len;                               /* available data in rbuf */
    int f_remote;                               /* read remote input more? */
    int close_reason = REASON_UNK;              /* reason of end repeating */
    /** other variables **/
    int nfds, len;
    fd_set ifds, ofds;
    struct timeval *tmo;
#ifdef _WIN32
    struct timeval win32_tmo;
#endif /* _WIN32 */

    /* repeater between stdin/out and socket  */
    nfds = ((local_in&lt;remote)? remote: local_in) +1;
    f_local = 1;                                /* yes, read from local */
    f_remote = 1;                               /* yes, read from remote */
    lbuf_len = 0;
    rbuf_len = 0;

    while ( f_local || f_remote ) {
        FD_ZERO(&amp;ifds );
        FD_ZERO(&amp;ofds );
        tmo = NULL;

        /** prepare for reading local input **/
        if ( f_local &amp;&amp; (lbuf_len &lt; (int)sizeof(lbuf)) ) {
#ifdef _WIN32
            if ( local_type&nbsp;!= LOCAL_SOCKET ) {
                /* select() on Winsock is not accept standard handle.
                   So use select() with short timeout and checking data
                   in stdin by another method. */
                win32_tmo.tv_sec = 0;
                win32_tmo.tv_usec = 10*1000;    /* 10 ms */
                tmo = &amp;win32_tmo;
            } else
#endif /*&nbsp;!_WIN32 */
            FD_SET( local_in, &amp;ifds );
        }

        /** prepare for reading remote input **/
        if ( f_remote &amp;&amp; (rbuf_len &lt; (int)sizeof(rbuf)) ) {
            FD_SET( remote, &amp;ifds );
        }

        /* FD_SET( local_out, ofds ); */
        /* FD_SET( remote, ofds ); */

        if ( select( nfds, &amp;ifds, &amp;ofds, (fd_set*)NULL, tmo ) == -1 ) {
            /* some error */
            error( &quot;select() failed,&nbsp;%d\n&quot;, socket_errno());
            return REASON_ERROR;
        }
#ifdef _WIN32
        /* fake ifds if local is stdio handle because
           select() of Winsock does not accept stdio
           handle. */
        if (f_local &amp;&amp; (local_type!=LOCAL_SOCKET) &amp;&amp; (0&lt;stdindatalen()))
            FD_SET(0,&amp;ifds);            /* data ready */
#endif

        /* remote =&gt; local */
        if ( FD_ISSET(remote, &amp;ifds) &amp;&amp; (rbuf_len &lt; (int)sizeof(rbuf)) ) {
            len = recv( remote, rbuf + rbuf_len, sizeof(rbuf)-rbuf_len, 0);
            if ( len == 0 ) {
                debug(&quot;connection closed by peer\n&quot;);
                close_reason = REASON_CLOSED_BY_REMOTE;
                f_remote = 0;                   /* no more read from socket */
                f_local = 0;
            } else if ( len == -1 ) {
                if (socket_errno()&nbsp;!= ECONNRESET) {
                    /* error */
                    fatal(&quot;recv() faield,&nbsp;%d\n&quot;, socket_errno());
                } else {
                    debug(&quot;ECONNRESET detected\n&quot;);
                }
            } else {
                debug(&quot;recv&nbsp;%d bytes\n&quot;, len);
                if ( 1 &lt; f_debug )              /* more verbose */
                    report_bytes( &quot;&lt;&lt;&lt;&quot;, rbuf, rbuf_len);
                rbuf_len += len;
            }
        }

        /* local =&gt; remote */
        if ( FD_ISSET(local_in, &amp;ifds) &amp;&amp; (lbuf_len &lt; (int)sizeof(lbuf)) ) {
            if (local_type == LOCAL_SOCKET)
                len = recv(local_in, lbuf + lbuf_len,
                           sizeof(lbuf)-lbuf_len, 0);
            else
                len = read(local_in, lbuf + lbuf_len, sizeof(lbuf)-lbuf_len);
            if ( len == 0 ) {
                /* stdin is EOF */
                debug(&quot;local input is EOF\n&quot;);
                if (!f_hold_session)
                    shutdown(remote, 1);        /* no-more writing */
                f_local = 0;
                close_reason = REASON_CLOSED_BY_LOCAL;
            } else if ( len == -1 ) {
                /* error on reading from stdin */
                if (f_hold_session) {
                    debug (&quot;failed to read from local\n&quot;);
                    f_local = 0;
                    close_reason = REASON_CLOSED_BY_LOCAL;
                } else
                    fatal(&quot;recv() failed, errno =&nbsp;%d\n&quot;, errno);
            } else {
                /* repeat */
                lbuf_len += len;
            }
        }

        /* flush data in buffer to socket */
        if ( 0 &lt; lbuf_len ) {
            len = send(remote, lbuf, lbuf_len, 0);
            if ( 1 &lt; f_debug )          /* more verbose */
                report_bytes( &quot;&gt;&gt;&gt;&quot;, lbuf, lbuf_len);
            if ( len == -1 ) {
                fatal(&quot;send() failed,&nbsp;%d\n&quot;, socket_errno());
            } else if ( 0 &lt; len ) {
                /* move data on to top of buffer */
                debug(&quot;send&nbsp;%d bytes\n&quot;, len);
                lbuf_len -= len;
                if ( 0 &lt; lbuf_len )
                    memcpy( lbuf, lbuf+len, lbuf_len );
                assert( 0 &lt;= lbuf_len );
            }
        }

        /* flush data in buffer to local output */
        if ( 0 &lt; rbuf_len ) {
            if (local_type == LOCAL_SOCKET)
                len = send( local_out, rbuf, rbuf_len, 0);
            else
                len = write( local_out, rbuf, rbuf_len);
            if ( len == -1 ) {
                fatal(&quot;output (local) failed, errno=%d\n&quot;, errno);
            }
            rbuf_len -= len;
            if ( len &lt; rbuf_len )
                memcpy( rbuf, rbuf+len, rbuf_len );
            assert( 0 &lt;= rbuf_len );
        }
        if (f_local == 0 &amp;&amp; f_hold_session) {
            debug (&quot;closing local port without disconnecting from remote\n&quot;);
            f_remote = 0;
            shutdown (local_out, 2);
            close (local_out);
            break;
        }
    }

    return close_reason;
}

int
accept_connection (u_short port)
{
    static int sock = -1;
    int connection;
    struct sockaddr_in name;
    struct sockaddr client;
    int socklen;
    fd_set ifds;
    int nfds;
    int sockopt;

    /* Create the socket. */
    debug(&quot;Creating source port to forward.\n&quot;);
    sock = socket (PF_INET, SOCK_STREAM, 0);
    if (sock &lt; 0)
        fatal(&quot;socket() failed, errno=%d\n&quot;, socket_errno());
    sockopt = 1;
    setsockopt (sock, SOL_SOCKET, SO_REUSEADDR,
                (void*)&amp;sockopt, sizeof(sockopt));

    /* Give the socket a name. */
    name.sin_family = AF_INET;
    name.sin_port = htons (port);
    name.sin_addr.s_addr = htonl (INADDR_ANY);
    if (bind (sock, (struct sockaddr *) &amp;name, sizeof (name)) &lt; 0)
        fatal (&quot;bind() failed, errno=%d\n&quot;, socket_errno());

    if (listen( sock, 1) &lt; 0)
        fatal (&quot;listen() failed, errno=%d\n&quot;, socket_errno());

    /* wait for new connection with watching EOF of stdin. */
    debug (&quot;waiting new connection at port&nbsp;%d (socket=%d)\n&quot;, port, sock);
    nfds = sock + 1;
    do {
        int n;
        struct timeval *ptmo = NULL;
#ifdef _WIN32
        struct timeval tmo;
        tmo.tv_sec = 0;
        tmo.tv_usec = 100*1000;                 /* On Windows, 100ms timeout */
        ptmo = &amp;tmo;
#endif /* _WIN32 */
        FD_ZERO (&amp;ifds);
        FD_SET ((SOCKET)sock, &amp;ifds);
#ifndef _WIN32
        FD_SET (0, &amp;ifds);                      /* watch stdin */
#endif
        n = select (nfds, &amp;ifds, NULL, NULL, ptmo);
        if (n == -1) {
            fatal (&quot;select() failed,&nbsp;%d\n&quot;, socket_errno());
            exit (1);
        }
#ifdef _WIN32
        if (0 &lt; stdindatalen()) {
            FD_SET (0, &amp;ifds);          /* fake */
            n++;
        }
#endif
        if (0 &lt; n) {
            if (FD_ISSET(0, &amp;ifds) &amp;&amp; (getchar() &lt;= 0)) {
                /* EOF */
                debug (&quot;Give-up waiting port because stdin is closed.&quot;);
                exit(0);
            }
            if (FD_ISSET(sock, &amp;ifds))
                break;                          /* socket is stimulated */
        }
    } while (1);
    socklen = sizeof(client);
    connection = accept( sock, &amp;client, &amp;socklen);
    if ( connection &lt; 0 )
        fatal (&quot;accept() failed, errno=%d\n&quot;, socket_errno());
    return connection;
}



/** Main of program **/
int
main( int argc, char **argv )
{
    int ret;
    int remote;                                 /* socket */
    int local_in;                               /* Local input */
    int local_out;                              /* Local output */
    int reason;
#ifdef _WIN32
    WSADATA wsadata;
    WSAStartup( 0x101, &amp;wsadata);
#endif /* _WIN32 */

    /* initialization */
    make_revstr();
    getarg( argc, argv );
    debug(&quot;Program is $Revision: 1.95 $\n&quot;);

    /* Open local_in and local_out if forwarding a port */
    if ( local_type == LOCAL_SOCKET ) {
        /* Relay between local port and destination */
        local_in = local_out = accept_connection( local_port );
    } else {
        /* Relay between stdin/stdout and desteination */
        local_in = 0;
        local_out = 1;
#ifdef _WIN32
        _setmode(local_in, O_BINARY);
        _setmode(local_out, O_BINARY);
#endif
    }

retry:
#ifndef _WIN32
    if (0 &lt; connect_timeout)
        set_timeout (connect_timeout);
#endif /* not _WIN32 */

    /* make connection */
    if ( relay_method == METHOD_DIRECT ) {
        remote = open_connection (dest_host, dest_port);
        if ( remote == SOCKET_ERROR )
            fatal( &quot;Unable to connect to destination host, errno=%d\n&quot;,
                   socket_errno());
    } else {
        remote = open_connection (relay_host, relay_port);
        if ( remote == SOCKET_ERROR )
            fatal( &quot;Unable to connect to relay host, errno=%d\n&quot;,
                   socket_errno());
    }

    /** resolve destination host (SOCKS) **/
#if&nbsp;!defined(_WIN32) &amp;&amp;&nbsp;!defined(__CYGWIN32__)
    if (socks_ns.sin_addr.s_addr&nbsp;!= 0)
        switch_ns (&amp;socks_ns);
#endif /* not _WIN32 &amp;&amp; not __CYGWIN32__ */
    if (relay_method == METHOD_SOCKS &amp;&amp;
        socks_resolve == RESOLVE_LOCAL &amp;&amp;
        local_resolve (dest_host, &amp;dest_addr) &lt; 0) {
        fatal(&quot;Unknown host:&nbsp;%s&quot;, dest_host);
    }

    /** relay negociation **/
    switch ( relay_method ) {
    case METHOD_SOCKS:
        if ( ((socks_version == 5) &amp;&amp; (begin_socks5_relay(remote) &lt; 0)) ||
             ((socks_version == 4) &amp;&amp; (begin_socks4_relay(remote) &lt; 0)) )
            fatal( &quot;failed to begin relaying via SOCKS.\n&quot;);
        break;

    case METHOD_HTTP:
        ret = begin_http_relay(remote);
        switch (ret) {
        case START_ERROR:
            close (remote);
            fatal(&quot;failed to begin relaying via HTTP.\n&quot;);
        case START_OK:
            break;
        case START_RETRY:
            /* retry with authentication */
            close (remote);
            goto retry;
        }
        break;
    case METHOD_TELNET:
        if (begin_telnet_relay(remote) &lt; 0)
             fatal(&quot;failed to begin relaying via telnet.\n&quot;);
        break;
    }
    debug(&quot;connected\n&quot;);

#ifndef _WIN32
    if (0 &lt; connect_timeout)
        set_timeout (0);
#endif /* not _WIN32 */

    /* main loop */
    debug (&quot;start relaying.\n&quot;);
do_repeater:
    reason = do_repeater(local_in, local_out, remote);
    debug (&quot;relaying done.\n&quot;);
    if (local_type == LOCAL_SOCKET &amp;&amp;
        reason == REASON_CLOSED_BY_LOCAL &amp;&amp;
        f_hold_session) {
        /* re-wait at local port without closing remote session */
        debug (&quot;re-waiting at local port&nbsp;%d\n&quot;, local_port);
        local_in = local_out = accept_connection( local_port );
        debug (&quot;re-start relaying\n&quot;);
        goto do_repeater;
    }
    closesocket(remote);
    if ( local_type == LOCAL_SOCKET)
        closesocket(local_in);
#ifdef _WIN32
    WSACleanup();
#endif /* _WIN32 */
    debug (&quot;that's all, bye.\n&quot;);

    return 0;
}

/* ------------------------------------------------------------
   Local Variables:
   compile-command: &quot;cc connect.c -o connect&quot;
   tab-width: 8
   fill-column: 74
   comment-column: 48
   End:
   ------------------------------------------------------------ */

/*** end of connect.c ***/
</pre>

<!-- 
NewPP limit report
Preprocessor node count: 4/1000000
Post-expand include size: 0/2097152 bytes
Template argument size: 0/2097152 bytes
Expensive parser function count: 0/100
-->

<!-- Saved in parser cache with key cryptoanarchy_wiki:pcache:idhash:32-0!1!0!!en!2!edit=0 and timestamp 20121020023305 -->
<div class="printfooter">
Retrieved from "<a href="https://cryptoanarchy.org/wiki/Connect.c">https://cryptoanarchy.org/wiki/Connect.c</a>"</div>
						<!-- end content -->
						<div class="visualClear"></div>
		</div>
	</div>
		</div>
		<div id="column-one">
	<div id="p-cactions" class="portlet">
		<h5>Views</h5>
		<div class="pBody">
			<ul>
	
				 <li id="ca-nstab-main" class="selected"><a href="/wiki/Connect.c" title="View the content page [c]" accesskey="c">Page</a></li>
				 <li id="ca-talk" class="new"><a href="/w/index.php?title=Talk:Connect.c&amp;action=edit&amp;redlink=1" title="Discussion about the content page [t]" accesskey="t">Discussion</a></li>
				 <li id="ca-viewsource"><a href="/w/index.php?title=Connect.c&amp;action=edit" title="This page is protected.&#10;You can view its source [e]" accesskey="e">View source</a></li>
				 <li id="ca-history"><a href="/w/index.php?title=Connect.c&amp;action=history" title="Past revisions of this page [h]" accesskey="h">History</a></li>			</ul>
		</div>
	</div>
	<div class="portlet" id="p-personal">
		<h5>Personal tools</h5>
		<div class="pBody">
			<ul>
				<li id="pt-login"><a href="/w/index.php?title=Special:UserLogin&amp;returnto=Connect.c" title="You are encouraged to log in; however, it is not mandatory [o]" accesskey="o">Log in / create account</a></li>
			</ul>
		</div>
	</div>
	<div class="portlet" id="p-logo">
		<a style="background-image: url(/w/tcmb.png);" href="/wiki/Main_Page" title="Visit the main page [z]" accesskey="z"></a>
	</div>
	<script type="text/javascript"> if (window.isMSIE55) fixalpha(); </script>
	<div class='generated-sidebar portlet' id='p-navigation'>
		<h5>Navigation</h5>
		<div class='pBody'>
			<ul>
				<li id="n-mainpage-description"><a href="/wiki/Main_Page">Main Page</a></li>
				<li id="n-portal"><a href="/wiki/Telecomix_Crypto_Munitions_Bureau:Community_Portal" title="About the project, what you can do, where to find things">Community portal</a></li>
				<li id="n-currentevents"><a href="/wiki/Telecomix_Crypto_Munitions_Bureau:Current_events" title="Find background information on current events">Current events</a></li>
				<li id="n-recentchanges"><a href="/wiki/Special:RecentChanges" title="The list of recent changes in the wiki [r]" accesskey="r">Recent changes</a></li>
				<li id="n-randompage"><a href="/wiki/Special:Random" title="Load a random page [x]" accesskey="x">Random page</a></li>
				<li id="n-help"><a href="/wiki/Help:Contents" title="The place to find out">Help</a></li>
			</ul>
		</div>
	</div>
	<div id="p-search" class="portlet">
		<h5><label for="searchInput">Search</label></h5>
		<div id="searchBody" class="pBody">
			<form action="/w/index.php" id="searchform"><div>
				<input type='hidden' name="title" value="Special:Search"/>
				<input id="searchInput" name="search" type="text" title="Search Telecomix Crypto Munitions Bureau [f]" accesskey="f" value="" />
				<input type='submit' name="go" class="searchButton" id="searchGoButton"	value="Go" title="Go to a page with this exact name if exists" />&nbsp;
				<input type='submit' name="fulltext" class="searchButton" id="mw-searchButton" value="Search" title="Search the pages for this text" />
			</div></form>
		</div>
	</div>
	<div class="portlet" id="p-tb">
		<h5>Toolbox</h5>
		<div class="pBody">
			<ul>
				<li id="t-whatlinkshere"><a href="/wiki/Special:WhatLinksHere/Connect.c" title="List of all wiki pages that link here [j]" accesskey="j">What links here</a></li>
				<li id="t-recentchangeslinked"><a href="/wiki/Special:RecentChangesLinked/Connect.c" title="Recent changes in pages linked from this page [k]" accesskey="k">Related changes</a></li>
<li id="t-specialpages"><a href="/wiki/Special:SpecialPages" title="List of all special pages [q]" accesskey="q">Special pages</a></li>
				<li id="t-print"><a href="/w/index.php?title=Connect.c&amp;printable=yes" rel="alternate" title="Printable version of this page [p]" accesskey="p">Printable version</a></li>				<li id="t-permalink"><a href="/w/index.php?title=Connect.c&amp;oldid=98" title="Permanent link to this revision of the page">Permanent link</a></li>			</ul>
		</div>
	</div>
		</div><!-- end of the left (by default at least) column -->
			<div class="visualClear"></div>
			<div id="footer">
				<div id="f-poweredbyico"><a href="http://www.mediawiki.org/"><img src="/w/skins/common/images/poweredby_mediawiki_88x31.png" alt="Powered by MediaWiki" /></a></div>
				<div id="f-copyrightico"><a href="http://creativecommons.org/licenses/publicdomain/"><img src="/w/skins/common/images/public-domain.png" alt='Public Domain' /></a></div>
			<ul id="f-list">
					<li id="lastmod"> This page was last modified on 24 February 2010, at 13:23.</li>
					<li id="viewcount">This page has been accessed 1,015 times.</li>
					<li id="copyright">Content is available under <a href="http://creativecommons.org/licenses/publicdomain/" class="external " title="http://creativecommons.org/licenses/publicdomain/">Public Domain</a>.</li>
					<li id="privacy"><a href="/wiki/Telecomix_Crypto_Munitions_Bureau:Privacy_policy" title="Telecomix Crypto Munitions Bureau:Privacy policy">Privacy policy</a></li>
					<li id="about"><a href="/wiki/Telecomix_Crypto_Munitions_Bureau:About" title="Telecomix Crypto Munitions Bureau:About">About Telecomix Crypto Munitions Bureau</a></li>
					<li id="disclaimer"><a href="/wiki/Telecomix_Crypto_Munitions_Bureau:General_disclaimer" title="Telecomix Crypto Munitions Bureau:General disclaimer">Disclaimers</a></li>
			</ul>
		</div>
</div>

		<script type="text/javascript">if (window.runOnloadHook) runOnloadHook();</script>
<!-- Served in 0.242 secs. --></body></h
5
tml>

0

