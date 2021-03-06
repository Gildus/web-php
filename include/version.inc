<?php // vim: et
/* The format is:
 * array(
 *     "major release number" => array(
 *         "release" => array(
 *             "source/windows" => array(
 *                 "filename" => "filename.tar.bz2",
 *                 "name"     => "package name",
 *                 "md5"      => "crc32, right?",
 *                 "date"     => "this files release date",
 *                 "note"     => "this file was updated 29feb due to broken phar files..",
 *             ),
 *             "announcement" => "bool, release announcement exists in releases/?"
 *         ),
 *     ),
 * );6 Dec
/* PHP 5.5 Release */
$PHP_5_5_RC = '5.5.6RC1'; // Current RC version (e.g., '5.6.7RC1') or false
$PHP_5_5_RC_DATE = '31 Oct 2013';

$PHP_5_5_VERSION         = "5.5.5";
$PHP_5_5_DATE            = "17 Oct 2013";
$PHP_5_5_MD5     = array(
                       "tar.bz2"       => "186c330c272d6322d254db9b2d18482a",
                       "tar.gz"        => "6bb31ee3466ed7a47943dcc04dd64195",
                       "tar.xz"        => "a4788118fdb0c4d8cef08be72025e983",
);
/* PHP 5.4 Release */
$PHP_5_4_RC = '5.4.22RC1'; //'5.4.21RC1'; // Current RC version (e.g., '5.6.7RC1') or false
$PHP_5_4_RC_DATE = '31 Oct 2013';

$PHP_5_4_VERSION         = "5.4.21";
$PHP_5_4_DATE            = "17 Oct 2013";
$PHP_5_4_MD5     = array(
                       "tar.bz2"       => "3dcf021e89b039409d0b1c346b936b5f",
                       "tar.gz"        => "cc8da0d18683e3a83b332f264af7ca83",
);

/* PHP 5.3 Release */
$PHP_5_3_RC      = false; //'5.3.27RC1'; // Current RC version (e.g., '5.6.7RC1') or false
$PHP_5_3_RC_DATE = '20 Jun 2013';

$PHP_5_3_VERSION         = "5.3.27";
$PHP_5_3_DATE            = "11 Jul 2013";

$PHP_5_3_MD5     = array(
                       "tar.bz2"       => "25ae23a5b9615fe8d33de5b63e1bb788",
                       "tar.gz"        => "bd03bfa9e7db40b6f2950fcbcf6a8276",
);

$RELEASES = array(
    5 => array(
        $PHP_5_5_VERSION => array(
            "announcement" => true,
            "source" => array(
                array(
                    "filename" => "php-$PHP_5_5_VERSION.tar.bz2",
                    "name"     => "PHP $PHP_5_5_VERSION (tar.bz2)",
                    "md5"      => $PHP_5_5_MD5["tar.bz2"],
                    "date"     => $PHP_5_5_DATE,
                ),
                array(
                    "filename" => "php-$PHP_5_5_VERSION.tar.gz",
                    "name"     => "PHP $PHP_5_5_VERSION (tar.gz)",
                    "md5"      => $PHP_5_5_MD5["tar.gz"],
                    "date"     => $PHP_5_5_DATE,
                ),
                array(
                    "filename" => "php-$PHP_5_5_VERSION.tar.xz",
                    "name"     => "PHP $PHP_5_5_VERSION (tar.xz)",
                    "md5"      => $PHP_5_5_MD5["tar.xz"],
                    "date"     => $PHP_5_5_DATE,
                ),
                array(
                    "link"  => 'http://windows.php.net/download/#php-5.5',
                    "name"  => "Windows $PHP_5_5_VERSION binaries and source",
                ),
            ),
        ),
        $PHP_5_4_VERSION => array(
            "announcement" => true,
            "source" => array(
                array(
                    "filename" => "php-$PHP_5_4_VERSION.tar.bz2",
                    "name"     => "PHP $PHP_5_4_VERSION (tar.bz2)",
                    "md5"      => $PHP_5_4_MD5["tar.bz2"],
                    "date"     => $PHP_5_4_DATE,
                ),
                array(
                    "filename" => "php-$PHP_5_4_VERSION.tar.gz",
                    "name"     => "PHP $PHP_5_4_VERSION (tar.gz)",
                    "md5"      => $PHP_5_4_MD5["tar.gz"],
                    "date"     => $PHP_5_4_DATE,
                ),
                array(
                    "link"  => 'http://windows.php.net/download/#php-5.4',
                    "name"  => "Windows $PHP_5_4_VERSION binaries and source",
                ),
            ),
        ),
        $PHP_5_3_VERSION => array(
            "announcement" => true,
            "source" => array(
                array(
                    "filename" => "php-$PHP_5_3_VERSION.tar.bz2",
                    "name"     => "PHP $PHP_5_3_VERSION (tar.bz2)",
                    "md5"      => $PHP_5_3_MD5["tar.bz2"],
                    "date"     => $PHP_5_3_DATE,
                ),
                array(
                    "filename" => "php-$PHP_5_3_VERSION.tar.gz",
                    "name"     => "PHP $PHP_5_3_VERSION (tar.gz)",
                    "md5"      => $PHP_5_3_MD5["tar.gz"],
                    "date"     => $PHP_5_3_DATE,
                ),
                array(
                    "link"  => 'http://windows.php.net/download/#php-5.3',
                    "name"  => "Windows $PHP_5_3_VERSION binaries and source",
                ),
            ),
        ),
    ),
);

$PHP_5_VERSION = $PHP_5_5_VERSION; // Some scripts require this set
$PHP_5_DATE    = $PHP_5_5_DATE; // Used by buumpRelease script
$PHP_5_RC_DATE = $PHP_5_5_RC_DATE; // Used by master

