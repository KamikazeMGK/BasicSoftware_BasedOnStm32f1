/*****************************************************************
 *  @brief MCU watchdog for stm32f103c8tc
 *         This configuration is generate by CubeMX
 *		   Source file provide configuration function to uppper layer
 *  @author Bui Duong
 *  @date	10/9/2018
 *
 *
 * ****************************************************************/
#include "Watdog_Cfg.h"
#include "stm32f1xx_hal.h"


static IWDG_HandleTypeDef hiwdg;
/***************************************************************************
 *
 * @brief This function will initialize independent watchdog timer
 *
 *
 *
 ****************************************************************************/
 void MX_IWDG_Init(void)
{

  hiwdg.Instance = IWDG;
  hiwdg.Init.Prescaler = IWDG_PRESCALER_4;
  hiwdg.Init.Reload = 4095;
  if (HAL_IWDG_Init(&hiwdg) != HAL_OK)
  {
    _Error_Handler(__FILE__, __LINE__);
  }

}
