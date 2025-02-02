/******************************************************************************
 * \file mtb_e2271cs021_display.h
 *
 * Description: This file contains display size and pin macros and definitons.
 *
 * For the details of E-INK display hardware and driver interface, see the
 * documents available at the following website:
 * https://www.pervasivedisplays.com/product/2-71-e-ink-display/
 *
 *******************************************************************************
 * \copyright
 * Copyright 2018-2021 Cypress Semiconductor Corporation
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *******************************************************************************/

#pragma once

#include <stdint.h>
#include <stdbool.h>
#include "Arduino.h"

#if defined(__cplusplus)
extern "C"
{
#endif

/**
 * \addtogroup group_board_libs
 * \{
 */

/** Number of horizontal pixels in the E-ink display */
#define MTB_E2271CS021_DISPLAY_SIZE_X        (264u)
/** Number of vertical pixels in the E-ink display */
#define MTB_E2271CS021_DISPLAY_SIZE_Y      (176u)
/** Number of bits consumed by each pixel for color information */
#define MTB_E2271CS021_DISPLAY_COLOR_BITS    (1u)

/** Configuration structure defining the necessary pins to communicate with the E-ink display */
typedef struct
{
    PinName spi_mosi;  /**< SPI MOSI pin */
    PinName spi_miso;  /**< SPI MISO pin */
    PinName spi_sclk;  /**< SPI SCLK pin */
    PinName spi_cs;    /**< SPI CS pin */
    PinName reset;     /**< GPIO Reset pin */
    PinName busy;      /**< GPIO Busy pin */
    PinName discharge; /**< GPIO Discharge pin */
    PinName enable;    /**< GPIO Enable pin */
    PinName border;    /**< GPIO Border pin */
    PinName io_enable; /**< GPIO IO Enable pin */
} mtb_e2271cs021_pins_t;

/** \} group_board_libs */

#if defined(__cplusplus)
}
#endif
