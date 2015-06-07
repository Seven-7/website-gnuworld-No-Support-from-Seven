<? require("../../php_includes/cmaster.inc");
$cTheme = get_theme_info();
 ?>
<!-- $Id: people.php,v 1.2 2012/04/06 23:58:03 Shadow Exp $ //-->
<html>
 <head>
  <title>C S E R V I C E -- People</title>
 </head>
 <?
	echo "<body bgcolor=#" . $cTheme->main_bgcolor . " text=#" . $cTheme->main_textcolor;
	if ($cTheme->main_bgimage!="") {
		echo " background=\"themes/data/" . $cTheme->sub_dir . "/" . $cTheme->main_bgimage . "\"";
	}
	echo ">";
 ?>
<body bgcolor=#a0a0a0 text=#000000 alink=#330000 link=#330000 vlink=#330000>
<font face="arial,helvetica,sans-serif" size="-1">
<center><table><td width="500">
<center><h1>CService People</h1>
</center>
  <font face="Verdana, Arial, Helvetica, sans-serif" size="-1">
  Since Early 2011, a dedicated and ever growing group of individuals have been bringing 
X and W to the many thousand users of the Underworld. Channel Service (X) help users keep their channels 
open, and help to keep ops in channels. The following people run this service for you. 
CService Coders write the code that runs X (And Z on AUnet) 
You can find a copy of the code used to run X on Underworld at SourceForge. 
CService Admins setup Channels for the owners, and provide other services to the owner. 
CService helpers hang out in #cservice to assist the many thousand of users of X. <br>
<table border=0><tr valign="top">
<td width=33%><h3>Coders</h3>
<a href="coder.php">coder</a><br>
<a href="Shadow.php">Shadow</a><br>
<a href="antimony.php">Antimony</a><br>
<a href="DoS.php">DoS</a><br>
<a href="Seven.php">Seven</a><br>
<br><h3>Past Co-ordinators</h3>
<a href="robert.php">Robert</a><br>
<a href="bokike.php">bokike</a><br>
<a href="hunor.php">HunoR</a><br>
<a href="bors.php">bors</a><br>
<a href="szabi37.php">Szabi37</a><br>
<a href="brolly.php">brolly</a><br>
</td><td width=33%><h3>Co-ordinators</h3>
<a href="nopurge.php">NoPurge</a><br>
<br><h3>Senior Administrators</h3>
<a href="god.php">God</a><br>
</td><td width=33%><h3>Administrators</h3>
<a href="uram.php">Uram</a><br>
<a href="sad.php">replay</a><br>
</td><td width=33%><h3>Official Helpers</h3>
<a href="cservice.php">CService</a><br>
<a href="tzepesh.php">TzepesH</a><br>


</font>
</td>
</tr>
</table>




</font>
</body></html>
                                           
