#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include <php.h>

// Declare argument info for the function (required for PHP 8+)
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_get_abdessamad, 0, 0, IS_STRING, 0)
ZEND_END_ARG_INFO()

// Function that returns "abdessamad see you"
PHP_FUNCTION(get_abdessamad)
{
    RETURN_STRING("abdessamad see you");
}

// Function registration
static const zend_function_entry myphp_ext_tanafaat_functions[] = {
    PHP_FE(get_abdessamad, arginfo_get_abdessamad)
    PHP_FE_END
};


// Module definition
zend_module_entry myphp_ext_tanafaat_module_entry = {
    STANDARD_MODULE_HEADER,
    "myphp_ext_tanafaat",         // Extension name
    myphp_ext_tanafaat_functions, // Function list
    NULL, NULL, NULL, NULL, NULL, // Lifecycle hooks (unused)
    "0.1",                        // Extension version
    STANDARD_MODULE_PROPERTIES
};

#ifdef COMPILE_DL_MYPHP_EXT_TANAFAAT
ZEND_GET_MODULE(myphp_ext_tanafaat)
#endif

