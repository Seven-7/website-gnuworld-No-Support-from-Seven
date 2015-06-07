<?
/*
<!-- $Id: config.inc,v 1.27 2005/11/18 04:19:33 nighty Exp $ //-->

'config.inc' For GNUworld's mod.cservice's website interface

Created: <nighty@undernet.org> - 2001-10-29
Last modif: <nighty@undernet.org> - 2004-12-29

This file contains two sections,
- what you *MUST* edit to ensure your website can work properly.
- what you *CAN* edit to tweak it more precisely.

Enjoy!@#

*/

/*------------------------------------------------------------------------*/
/*   WHAT YOU NEED TO EDIT (when finished, look at the end of this file)  */
/*------------------------------------------------------------------------*/

define(LIVE_LOCATION,"/live"); // define this to "" if you dont put it in a subdirectory like '/live' (default) but in '/' for example.
define(IFACE_URL,"http://127.0.0.1/live/"); // The GUI main URL (the one to access it), this value affect the eventual REFERER checks
define(SERVICE_CHANNEL,"#cservice"); // The CService Official Channel

/* NOTE: to FORGE reply adresses, user 'nobody' needs a 'Tnobody' line added in /etc/sendmail.cf (or equiv.) */

define(NETWORK_NAME,"YourNetwork"); // Define this to your network name... better to be a "normal" single word ;)
define(BOT_NAME,"X"); // You bot's name, defines some strings in the website to fit more your configuration.
define(IRC_SERVER,"irc.yournetwork.org"); // Default server for irc:// option.
define(NETWORK_EMAIL,"cservice@yournetwork.org"); // the email of your network (default).

define(PURGE_EMAIL,"purge@yournetwork.org"); // the email where channel purge request form is sent.
define(XAT_EMAIL,"x@yournetwork.org"); // the email where manager change form is sent.
define(OBJECT_EMAIL,"object@yournetwork.org"); // the email where replies to password changes are sent.
define(ABUSE_GLOBAL_EMAIL,"abuse@yournetwork.org"); // the email where abuse NOT REGARDING Channel Service should go (for complaints)

define(FROM_NEWUSER,"cmaster@yournetwork.org"); // the From: email for a NEWUSER registration email
define(FROM_NEWUSER_SUBJECT,"Your Channel Service Account"); // the subject of that mail.

define(FROM_FPASS,"cmaster-recovery@yournetwork.org"); // the From: email for a FORGOTTEN PASSWORD email.
define(FROM_FPASS_SUBJECT,"Your Channel Service Password for "); // the sujbect of that mail. 'username' is added at this string's end.

/******************************/
/* LOCAL DATABASE DEFINITIONS */
/******************************/
define(LOCALDB_NAME,"local_db"); // the local database that contains the gnuworld/doc/local_db.sql information.
define(LOCALDB_USER,"gnuworld"); // the local user that has full access to LOCALDB_NAME.
define(LOCALDB_PASS,"foo"); // the password, use blank if you dont use passwords.

/*******************************/
/* REMOTE DATABASE DEFINITIONS */
/*******************************/
define(REMOTEDB_NAME,"cservice"); // the remote databasr that contains cservice.sql, cservice.web.sql information.
define(REMOTEDB_USER,"gnuworld"); // the user that has access remotely to that db
define(REMOTEDB_PASS,"foo"); // the password, use blank if you dont use passwords.
define(REMOTEDB_HOST,"127.0.0.1"); // define to whatever host/IP of the "remote" db is.
define(REMOTEDB_PORT,5432); // define to whatever the pgsql port on the remote db is. (default: 5432)

/*******************************/
/* LOCAL WEBSITE CONFIGURATION */
/*******************************/
define(HOSTING_LOGO,""); // this image should go in website/docs/gnuworld/images and be maximum 250*33 pixels.
define(HOSTING_URL,"");
define(HOSTING_STATS,1); // 1: enable, 0: disable. If you enabled this you *NEED* to ensure that a file
			 // called 'hosting_stats' is WRITABLE by the httpd user in /tmp.
			 //
			 // This option enables/disables the page access to 901+ on the web as well.
			 // If the file is not found, or found not writable, it's disabled.


define(CSERVICE_SITE_URL,"../");






/*---------------------*/
/*  WHAT YOU CAN EDIT  */
/*---------------------*/

define(CRC_SALT_0001,"0123456789");
define(CRC_SALT_0002,"0123456789");
define(CRC_SALT_0003,"0123456789");
define(CRC_SALT_0004,"0123456789");
define(CRC_SALT_0005,"0123456789");
define(CRC_SALT_0006,"0123456789");
define(CRC_SALT_0007,"0123456789");
define(CRC_SALT_0008,"0123456789");
define(CRC_SALT_0009,"0123456789");
define(CRC_SALT_0010,"0123456789");
define(CRC_SALT_0011,"0123456789");
define(CRC_SALT_0012,"0123456789");
define(CRC_SALT_0013,"0123456789");
define(CRC_SALT_0014,"0123456789");
define(CRC_SALT_0015,"0123456789");
define(CRC_SALT_0016,"0123456789");
define(CRC_SALT_0017,"0123456789");
define(CRC_SALT_0018,"0123456789");
define(CRC_SALT_0019,"0123456789");
define(CRC_SALT_0020,"0123456789");

/* SALTs for external authentication capabilities (experimental) */
define(CRC_SALT_EXT1,"0123456789");
define(CRC_SALT_EXT2,"0123456789");
define(CRC_SALT_EXT3,"0123456789");
define(CRC_SALT_EXT4,"0123456789");
define(CRC_SALT_EXT5,"0123456789");


/*
    those options are only used when using multiple mirrors of your CService website
    if you dont do mirrors at all, just leave those options as they are, this wont affect anything.
    if you do mirrors, the following options means that if the website is accessed with "ROUNDROBIN",
    it will automatically redirect accesses to "LOCALMIRROR".
*/
define(ADMINONLY_MIRROR,0); // Define this to 1 if you want that only * person can login.
define(CLIENT_MIRROR_URL,"http://cata7007.dlinkddns.com/live/"); // define this in case ADMINONLY_MIRROR is set to 1.
define(LOCALMIRROR,"cata7007.dlinkddns.com");
define(ROUNDROBIN,"cata7007.dlinkddns.com");

/******************/
/* THEMES OPTIONS */
/******************/
define(STD_THEME,"default");  // define this to your site Theme, this MUST be a valid sub-directory of 'website/docs/gnuworld/themes/data/'
			      // If you want more information on this new feature, please visit http://cservice.undernet.org/gnuworld-setup/
			      // or check the gnuworld/doc/idoc/ directory.
define(AUTO_SWITCH_THEMES,0); // If you set this .. dated themes will appear when they should (latest 'created_ts' "wins" if periods cover each other)
			      // (not working at the moment... sorry)

/*************************/
/* VARIOUS CHECK OPTIONS */
/*************************/
define(ENABLE_NOTES,1); // set this to 1 to enable or 0 to disable the "Notes" link on the web
			// you *NEED* to have your X (mod.cservice) bot running with the code
			// supporting it to enable this, check out 'gnuworld/doc/notes.sql' too.
define(NOTES_ADMIN_ONLY,1); // This applies if 'ENABLE_NOTES' is set to 1, when set to 0, everyone can use the feature
			    // when set to 1, only * persons can.
define(NOTES_LIM_TOTAL,10); // Total number of notes a user can send to all users. (0 = unlimited)
define(NOTES_LIM_PERUSR,3); // Total number of notes a user can send to a single user. (0 = unlimited)
define(NOTES_LIM_INBOX,15); // Total number of notes a user can have in his 'notes box'. (0 = unlimited)
// of course, if ENABLE_NOTES is defined to '0', above three values have no effect.

define(COOKIE_DOMAIN,""); // Blank:default. Define this to ".yourdomain.com" or anything else at your own risks ;P

define(BOFH_PASS_ADMIN,0); // set this to 0 to disable password complexity checking for * people.
define(BOFH_PASS_USER,0); // set this to 1 to enable password complexity checking for all users (overriding BOFH_PASS_ADMIN=0).
define(PW_MIN_CHARS,6); // minimum chars a password must contain.
define(PW_MIN_CAPSL,1); // minimum upper case letters a password must contain.
define(PW_MIN_MINSL,1); // minimum lower case letters a password must contain.
define(PW_MIN_DIGIT,1); // minimum digits a password must contain.
define(PW_MIN_OTHER,1); // minimum other chars a password must contain.

define(IPCHK_MAXHITS,20); // Number of failed forgotten_pass/login attempts before IP_LOCK

define(IPCHK_BANTIME,86400); // Time your IP/username is locked (seconds) when caught into IPCHK_MAXHITS+ failed attempts.
define(ACL_FOR_ANY,0); // set this to 1 if you want to be able to set and use ACLs for users that are not added to '*'.
define(IPR_REQUIRED,0); // set this to 1 if you want * and ACL'd people to REQUIRE one or more IPs in IP restriction list
			// to be able to log in. (for more security, we recommend you set this to 1 after the IP restriction
			// has been defined at least on yourself).

define(ENABLE_COMPLAINTS_MODULE,1); // set this to 0 to disable , 1 to enable, the /complaints reporting module (for example if you dont use it ;P)
define(COMPLAINTS_ADMINCOMMENT_ID,1); // this is *MUST* be set to a PERMANENTLY VALID USERNAME ID, if COMPLAINTS MODULE is enabled.
				      // this will be the user that will post the anonymous objections under the form of an admin comment
				      // when a complaint of this type is sent.

define(CONFIRM_STAR_PWRESET,	0);	// if set to 1, it will require CONFIRM_STAR_PWRESET_MAIL to confirm all requests.
define(CONFIRM_STAR_PWRESET_MAIL, ''); // must contain a valid email if CONFIRM_STAR_PWRESET is set to 1.
define(LOCK_ON_PWCHG,		0);	// if set to 1, will LOCK OUT the * account pending a password change (CONFIRM_STAR_PWRESET*)
define(LOCK_PWCHG_LEVEL,	0);	// set this to 0 to disable, if set to a level (1-1000), people added on * with that level or above
					// will not be able to change their passwords with the system (requires manual DB modification, or modification of this value)
					// suggested value would be 901 (coder level).
define(LOCK_STAR_MAILEDIT,	0);	// if set to 1, it will enable the feature preventing * users to modify email in another * account unless the editor has
					// a level of at least *800

define(NEWUSERS_GFXCHECK,0);				// 1 = add a graphical code entry check to "newusers", 0 = disable the feature (or if no "libgd" is present)
define(FONT_PATH,"/home/gnuworld/website/fonts/");	// ABSOLUTE PATH to the 'website/fonts/' directory (normally "/home/gnuworld/website/fonts/")
define(SPECIFIC_FONT,"rans.ttf");			// if you let this empty, fonts will be randomly chosen into FONT_PATH (one single font used per code/image).
define(JPEG_OUT_QUALITY,60);				// %Quality of the JPEG generated (the less you put this, the harder it will be to read/recognize, ranges 1 to 100).

define(NEWUSERS_IPCHECK,0); // define this to 1, if you want to enable ONE IP = ONE USERNAME per 24h.
define(REMEMBER_LOGIN,0); // set either to 1, or 0 to enable, or disable "username pre-fill" in the LOGIN page(s).
define(PREFILL_NOTICE,0); // Display (1) or not (1) a notice about the "username pre-fill" and how it helps you know you're on the good page.
define(DISALLOW_RESERVED_BLOCKS,0); // define this to 1 if you want to disable access to the website to IANA reserved blocks (10.*, 192.168.*, etc.), 0 to disable check.

define(LREQ_TIME,600); // min time between forgotten password requests to avoid flooding, set this to 0 to disable.


define(UNETUB_TIME,14400); // 4 hours before being able to create another user from the same IP. set to 0 to disable.
			   // NOTE: this variable is not used if UNETUB_IPCHECK is set to 0.


define(REGPROC_IDLECHECK,1); // If this is set to 1, users that are idle more than 21 days will not be allowed to
			     // register a channel or be a channel supporter until they login to the bot on IRC.


define(REGPROC_ALLOWMULTIPLE,0); // If this is set to 1, users will be allowed to register an unlimited amount
				 // of channels, but will still be allowed to have only ONE channel being applied at a time.
define(MAX_CONCURRENT_SUPPORTS,20);	// amount of applications a username can support at a given time
define(MIN_DAYS_BEFORE_REG,0);		// minimum probation period (in days) for a new username to be a new channel applicant
define(MIN_DAYS_BEFORE_SUPPORT,0);	// minimum probation period (in days) for a new username to be a new channel supporter
define(MIN_DAYS_BEFORE_TMGR,0);		// minimum probation period (in days) for a new username to be a temporary manager (manager change)
define(MIN_DAYS_BEFORE_PMGR,0);		// minimum probation period (in days) for a new username to be a permanent manager (manager change)


define(DEFAULT_REQUIRED_SUPPORTERS,0); // this option defines number of default required supporters (see below).
/*
Current feature of REQUIRED_SUPPORTERS :
		0	set it to 0 to allow instant registration (no supporters)	[VERY SMALL NETWORKS]
		1-9	requiring 1 to 9 supporters for standard registration		[VARIOUS NETWORKS]
		10	requires 10 supporters to register a channel.			[WIDE NETWORKS]

>>>>>>> IMPORTANT NOTICE <<<<<<<<
The number of required supporters will be, if not existing in tables "variables" in the remote DB,
updated to the number you set above (ie. first run), BUT, if there's already a definition for it in the DB,
the DB one will be the one used by the interface.
You can change the amount of required supporters using the website itself in 'ACL Manager'.
You must be 901+ to view the [Modify] button next to number of required supporters, ensure
the "New Regs" are LOCKED (at the top of the ACL Manager page) then click on the [Modify] button,
One button there will allow you to reset to "config.inc"'s setting, or change to another number,
after validating, re-open "New Regs" and see the changes.
This requires to login with a user with an admin access of 901 or above (coder level only).
>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<
*/




/* To show you read this whole file, please comment or remove the next line. */
//die("<h2><b>Error</b>: Edit website/php_includes/config.inc file !</h2>");

?>
