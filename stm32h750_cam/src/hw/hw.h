/*
 * hw.h
 *
 *  Created on: 2020. 1. 21.
 *      Author: Baram
 */

#ifndef SRC_HW_HW_H_
#define SRC_HW_HW_H_


#ifdef __cplusplus
extern "C" {
#endif


#include "hw_def.h"

#include "reset.h"
#include "rtc.h"
#include "delay.h"
#include "micros.h"
#include "millis.h"
#include "led.h"
#include "uart.h"
#include "cmdif.h"
#include "swtimer.h"
#include "qspi.h"
#include "flash.h"
#include "usb.h"
#include "gpio.h"
#include "pwm.h"
#include "spi.h"
#include "ili9225.h"
#include "lcd.h"
#include "button.h"
#include "adc.h"
#include "joypad.h"
#include "dac.h"
#include "speaker.h"
#include "i2c.h"
#include "ov7725.h"


#include "sd.h"
#include "fatfs/fatfs.h"

void hwInit(void);


#ifdef __cplusplus
}
#endif


#endif /* SRC_HW_HW_H_ */
