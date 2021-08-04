/*
 * This file is part of the MicroPython project, http://micropython.org/
 *
 * The MIT License (MIT)
 *
 * Copyright (c) 2021 Scott Shawcroft for Adafruit Industries
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#ifndef MICROPY_INCLUDED_BROADCOM_COMMON_HAL_MICROCONTROLLER_PIN_H
#define MICROPY_INCLUDED_BROADCOM_COMMON_HAL_MICROCONTROLLER_PIN_H

#include <assert.h>
#include <stdint.h>

#include <py/obj.h>

typedef struct {
    mp_obj_base_t base;
    uint8_t number;
} mcu_pin_obj_t;

extern const mcu_pin_obj_t pin_GPIO0;
extern const mcu_pin_obj_t pin_GPIO1;
extern const mcu_pin_obj_t pin_GPIO2;
extern const mcu_pin_obj_t pin_GPIO3;
extern const mcu_pin_obj_t pin_GPIO4;
extern const mcu_pin_obj_t pin_GPIO5;
extern const mcu_pin_obj_t pin_GPIO6;
extern const mcu_pin_obj_t pin_GPIO7;
extern const mcu_pin_obj_t pin_GPIO8;
extern const mcu_pin_obj_t pin_GPIO9;
extern const mcu_pin_obj_t pin_GPIO10;
extern const mcu_pin_obj_t pin_GPIO11;
extern const mcu_pin_obj_t pin_GPIO12;
extern const mcu_pin_obj_t pin_GPIO13;
extern const mcu_pin_obj_t pin_GPIO14;
extern const mcu_pin_obj_t pin_GPIO15;
extern const mcu_pin_obj_t pin_GPIO16;
extern const mcu_pin_obj_t pin_GPIO17;
extern const mcu_pin_obj_t pin_GPIO18;
extern const mcu_pin_obj_t pin_GPIO19;
extern const mcu_pin_obj_t pin_GPIO20;
extern const mcu_pin_obj_t pin_GPIO21;
extern const mcu_pin_obj_t pin_GPIO22;
extern const mcu_pin_obj_t pin_GPIO23;
extern const mcu_pin_obj_t pin_GPIO24;
extern const mcu_pin_obj_t pin_GPIO25;
extern const mcu_pin_obj_t pin_GPIO26;
extern const mcu_pin_obj_t pin_GPIO27;
extern const mcu_pin_obj_t pin_GPIO28;
extern const mcu_pin_obj_t pin_GPIO29;

extern const mcu_pin_obj_t pin_GPIO48;
extern const mcu_pin_obj_t pin_GPIO49;
extern const mcu_pin_obj_t pin_GPIO50;
extern const mcu_pin_obj_t pin_GPIO51;
extern const mcu_pin_obj_t pin_GPIO52;
extern const mcu_pin_obj_t pin_GPIO53;


void reset_all_pins(void);
// reset_pin_number takes the pin number instead of the pointer so that objects don't
// need to store a full pointer.
void reset_pin_number(uint8_t pin_number);
void never_reset_pin_number(uint8_t pin_number);
void claim_pin(const mcu_pin_obj_t *pin);
bool pin_number_is_free(uint8_t pin_number);

#endif // MICROPY_INCLUDED_BROADCOM_COMMON_HAL_MICROCONTROLLER_PIN_H
