//
// Created by Litong Deng on 2022/10/11.
//

#ifndef MCU_STC89_LED_MATRIX_H
#define MCU_STC89_LED_MATRIX_H

#include <8051.h>

void turn_on_led_matrix_normal();

void turn_on_led_matrix_with_interrupt(unsigned int interrupt_millis);

void show_image_on_led_matrix_up_bottom();

void show_image_on_led_matrix_left_right();

void InterruptTime1_led_matrix() __interrupt(3);

unsigned int digit_row();

unsigned int digit_col();

unsigned char bit_revert(unsigned char a);

void enable_led_row(unsigned char row);

void enable_led_column(unsigned char col);

void turn_off_led_matrix();

void show_heart_image();

void show_digit_image();

void show_digit_image_dynamic_up_to_bottom();

void show_digit_image_dynamic_left_to_right();

#endif // MCU_STC89_LED_MATRIX_H
