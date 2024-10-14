// Copyright 2024 Anton (@Ant0ha)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT


#define PS2_PIO_USE_PIO1 // Force the usage of PIO1 peripheral, by default the PS2 implementation uses the PIO0 peripheral

/* To debug the mouse reports */
#define PS2_MOUSE_DEBUG_HID
#define PS2_MOUSE_DEBUG_RAW

#define PS2_MOUSE_INVERT_X
#define PS2_MOUSE_ENABLE_SCROLLING


