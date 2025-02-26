dnl Config file for myphp_ext_tanafaat extension

PHP_ARG_ENABLE(myphp_ext_tanafaat, whether to enable myphp_ext_tanafaat,
[  --enable-myphp_ext_tanafaat  Enable myphp_ext_tanafaat extension])

if test "$PHP_MYPHP_EXT_TANAFAAT" != "no"; then
  AC_DEFINE(HAVE_MYPHP_EXT_TANAFAAT, 1, [Enable myphp_ext_tanafaat])
  PHP_NEW_EXTENSION(myphp_ext_tanafaat, myphp_ext_tanafaat.c, $ext_shared)
fi

