/* Do not modify this file.  */
/* It is created automatically by the Makefile. */
#include "config.h"

#include <gmodule.h>

#include "moduleinfo.h"
/* plugins are DLLs */
#define WS_BUILD_DLL
#include "ws_symbol_export.h"

#ifndef ENABLE_STATIC
WS_DLL_PUBLIC_DEF const gchar version[] = VERSION;

/* Start the functions we need for the plugin stuff */

WS_DLL_PUBLIC_DEF void
plugin_register (void)
{
  {extern void proto_register_tox (void); proto_register_tox ();}
}
WS_DLL_PUBLIC_DEF void
plugin_reg_handoff(void)
{
  {extern void proto_reg_handoff_tox (void); proto_reg_handoff_tox ();}
}
#endif