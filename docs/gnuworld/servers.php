<? require("../../php_includes/cmaster.inc");
$cTheme = get_theme_info();
 ?>
<!-- $Id: servers.php,v 1.2 2012/04/06 23:58:03 Shadow Exp $ //-->
<html>
 <head>
  <title>C S E R V I C E -- Servers</title>
 </head>
 <?
	echo "<body bgcolor=#" . $cTheme->main_bgcolor . " text=#" . $cTheme->main_textcolor;
	if ($cTheme->main_bgimage!="") {
		echo " background=\"themes/data/" . $cTheme->sub_dir . "/" . $cTheme->main_bgimage . "\"";
	}
	echo ">";
 ?>
  <font face=arial,helvetica size=+1><b>
  Here you have a complete list with servers , direct connection , E-mails and ADMINS NAME</b><br>
  <ul>
    <li>Underworld.org - uw1.sytes.net:6667 - Admin : coder - Email : coder@underworld.org</li>
    <li>Underworld2.org - uw2.sytes.net:6667 - Admin : DoS - Email : dos@underworld.org</li>
    <li>Underworld3.org - uw3.sytes.net:1986 - Admin : Shadow  - Email : shadow@underworld.org</li>
    <li>Underworld4.org - uw4.sytes.net:6667 - Admin : ??? - Email : ???@underworld.org</li>
    <li>Underworld5.org - uw5.sytes.net:6667 - Admin : allein - Email : allein@underworld.org</li>
  </ul>
</font>
</body></html>
                                           
