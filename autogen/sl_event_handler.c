#include "sl_event_handler.h"

#include "system_si91x.h"
#include "rsi_board.h"
#include "rsi_debug.h"
#include "sl_ulp_timer_instances.h"

void sl_platform_init(void)
{
  SystemCoreClockUpdate();
  RSI_Board_Init();
  DEBUGINIT();
}

void sl_driver_init(void)
{
}

void sl_service_init(void)
{
}

void sl_stack_init(void)
{
}

void sl_internal_app_init(void)
{
}

void sl_platform_process_action(void)
{
}

void sl_service_process_action(void)
{
}

void sl_stack_process_action(void)
{
}

void sl_internal_app_process_action(void)
{
}

