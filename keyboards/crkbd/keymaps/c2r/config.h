/*
This is the c configuration file for the keymap

Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

/* Select hand configuration */

// #define MASTER_LEFT
#define MASTER_RIGHT
// #define EE_HANDS

#define QUICK_TAP_TERM 0
#define TAPPING_TERM 300

#define UNICODE_SELECTED_LANGUAGE  es


// #define RETRO_TAPPING
// #define IGNORE_MOD_TAP_INTERRUPT

#ifdef RGBLIGHT_ENABLE
    #define RGBLIGHT_SLEEP
    #define RGBLIGHT_SPLIT
    #define RGBLIGHT_LIMIT_VAL 120
    #define RGBLIGHT_HUE_STEP 10
    #define RGBLIGHT_SAT_STEP 17
    #define RGBLIGHT_VAL_STEP 17
#endif


#ifdef OLED_ENABLE
#   define SPLIT_LAYER_STATE_ENABLE
#   define SPLIT_LED_STATE_ENABLE
#   define SPLIT_MODS_ENABLE
#   define SPLIT_OLED_ENABLE
#   define OLED_FONT_H "keyboards/crkbd/keymaps/c2r/glcdfont.c"
#   define OLED_TIMEOUT 30000
#endif

#ifdef RGB_MATRIX_ENABLE
#   define RGB_MATRIX_KEYPRESSES // reacciona a las pulsaciones de teclas
#   define RGB_MATRIX_KEYRELEASES // reacciona a la liberación de teclas (en lugar de pulsaciones de teclas)
#   define RGB_DISABLE_WHEN_USB_SUSPENDED // apagar los efectos cuando se suspende
#   define RGB_MATRIX_FRAMEBUFFER_EFFECTS
#   define RGB_MATRIX_LED_PROCESS_LIMIT (RGB_MATRIX_LED_COUNT + 4) / 5 // limita la cantidad de LED para procesar en una animación por ejecución de tarea (aumenta la capacidad de respuesta del teclado)
#   define RGB_MATRIX_LED_FLUSH_LIMIT 16 // limita en milisegundos la frecuencia con la que una animación actualizará los LED. 16 (16 ms) es equivalente a limitar a 60 fps (aumenta la capacidad de respuesta del teclado)
#   define RGB_MATRIX_MAXIMUM_BRIGHTNESS 150 // limita el brillo máximo de los LED a 150 de 255. Más alto puede causar que el controlador se bloquee.
#   define RGB_MATRIX_HUE_STEP 8
#   define RGB_MATRIX_SAT_STEP 8
#   define RGB_MATRIX_VAL_STEP 8
#   define RGB_MATRIX_SPD_STEP 10

/* Deshabilite las animaciones que no desea/necesita. Deberá deshabilitar un buen número de estos    *
 * porque ocupan mucho espacio. Desactive hasta que pueda compilar con éxito su firmware. */
//#   define ENABLE_RGB_MATRIX_ALPHAS_MODS
//#    undef ENABLE_RGB_MATRIX_GRADIENT_UP_DOWN
//#   define ENABLE_RGB_MATRIX_BREATHING
//#    undef ENABLE_RGB_MATRIX_BAND_SAT
//#    undef ENABLE_RGB_MATRIX_BAND_VAL
//#   define ENABLE_RGB_MATRIX_BAND_PINWHEEL_SAT
//#    undef ENABLE_RGB_MATRIX_BAND_PINWHEEL_VAL
//#    undef ENABLE_RGB_MATRIX_BAND_SPIRAL_SAT
//#    undef ENABLE_RGB_MATRIX_BAND_SPIRAL_VAL
//#    undef ENABLE_RGB_MATRIX_CYCLE_ALL
//#   define ENABLE_RGB_MATRIX_CYCLE_LEFT_RIGHT
//#   define ENABLE_RGB_MATRIX_CYCLE_UP_DOWN
//#    undef ENABLE_RGB_MATRIX_CYCLE_OUT_IN
//#    undef ENABLE_RGB_MATRIX_CYCLE_OUT_IN_DUAL
/**#   define ENABLE_RGB_MATRIX_RAINBOW_MOVING_CHEVRON
#    undef ENABLE_RGB_MATRIX_DUAL_BEACON
#    undef ENABLE_RGB_MATRIX_CYCLE_PINWHEEL
#   define ENABLE_RGB_MATRIX_CYCLE_SPIRAL
#   define ENABLE_RGB_MATRIX_RAINBOW_BEACON
#   define ENABLE_RGB_MATRIX_RAINBOW_PINWHEELS
#    undef ENABLE_RGB_MATRIX_RAINDROPS
#    undef ENABLE_RGB_MATRIX_JELLYBEAN_RAINDROPS */
#   define ENABLE_RGB_MATRIX_TYPING_HEATMAP
#   define ENABLE_RGB_MATRIX_DIGITAL_RAIN
#    undef ENABLE_RGB_MATRIX_SOLID_REACTIVE
#    undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_SIMPLE
#    undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_WIDE
#   define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTIWIDE
#    undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_CROSS
#    undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTICROSS
#   define ENABLE_RGB_MATRIX_SOLID_REACTIVE_NEXUS
#   define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTINEXUS
#    undef ENABLE_RGB_MATRIX_SPLASH
#   define ENABLE_RGB_MATRIX_MULTISPLASH
#    undef ENABLE_RGB_MATRIX_SOLID_SPLASH
#    undef ENABLE_RGB_MATRIX_SOLID_MULTISPLASH
#endif

// Iluminacion por tecla pulsada
#ifndef BACKLIGHT_PIN
#define BACKLIGHT_PIN D1
#endif

#ifndef BACKLIGHT_LEVELS
#define BACKLIGHT_LEVELS 3
#endif


