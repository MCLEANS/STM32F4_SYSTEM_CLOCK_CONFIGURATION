/**
  ******************************************************************************
  * @file    main.c
  * @author  Ac6
  * @version V1.0
  * @date    01-December-2013
  * @brief   Default main function.
  ******************************************************************************
*/


#include "stm32f4xx.h"
#include "clockconfig.h"
			

int main(void)
{

	custom_libraries::clock_config sys_clock;
	sys_clock.initialize();


	while(1){

	}
}
