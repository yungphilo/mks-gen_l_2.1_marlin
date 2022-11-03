/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */
#include <U8glib.h>

#if defined(__AVR__) && ENABLED(NOT_EXTENDED_ISO10646_1_5X7)
  // reduced font (only symbols 1 - 127) - saves about 1278 bytes of FLASH

/*
  Fontname: -Marlin6x12-Fixed-Medium-R-SemiCondensed--12-90-100-100-C-111-ISO10646-1
  Copyright: Public domain terminal emulator font.  Share and enjoy. original font -Misc-Fixed-Medium-R-SemiCondensed--12-110-75-75-C-60-ISO10646-1
  Capital A Height: 7, '1' Height: 7
  Calculated Max Values w= 7 h=10 x= 5 y= 5 dx= 7 dy= 0 ascent= 8 len=10
  Font Bounding box     w=12 h=15 x= 0 y=-2
  Calculated Min Values           x= 0 y=-2 dx= 0 dy= 0
  Pure Font   ascent = 7 descent=-2
  X Font      ascent = 8 descent=-2
  Max Font    ascent = 8 descent=-2
*/
const u8g_fntpgm_uint8_t ISO10646_1_5x7[1324] U8G_FONT_SECTION("ISO10646_1_5x7") = {
  0,12,15,0,254,7,2,37,3,187,1,127,254,8,254,8,
  254,5,8,8,6,0,0,64,240,200,136,136,152,120,16,5,
  8,8,6,0,0,192,248,136,136,136,136,136,248,5,5,5,
  6,0,1,32,48,248,48,32,5,8,8,6,0,0,32,112,
  248,32,32,32,32,224,5,9,9,6,0,255,32,112,168,168,
  184,136,136,112,32,7,5,5,7,0,1,216,108,54,108,216,
  5,9,9,6,0,255,248,168,136,136,136,136,136,168,248,5,
  10,10,6,0,254,32,80,80,80,80,136,168,168,136,112,3,
  3,3,6,0,3,64,160,64,255,255,255,255,255,255,255,255,
  255,255,255,255,255,255,255,255,255,255,255,255,255,255,0,0,
  0,6,5,255,1,7,7,6,2,0,128,128,128,128,128,0,
  128,3,3,3,6,1,5,160,160,160,5,6,6,6,0,0,
  80,248,80,80,248,80,5,9,9,6,0,255,32,112,168,160,
  112,40,168,112,32,5,7,7,6,0,0,200,200,16,32,64,
  152,152,5,7,7,6,0,0,64,160,160,64,168,144,104,1,
  3,3,6,2,5,128,128,128,3,9,9,6,1,255,32,64,
  64,128,128,128,64,64,32,3,9,9,6,1,255,128,64,64,
  32,32,32,64,64,128,5,7,7,6,0,0,32,168,112,32,
  112,168,32,5,5,5,6,0,1,32,32,248,32,32,2,3,
  3,6,1,255,192,64,128,5,1,1,6,0,3,248,2,2,
  2,6,1,0,192,192,5,7,7,6,0,0,8,16,16,32,
  64,64,128,5,7,7,6,0,0,112,136,152,168,200,136,112,
  3,7,7,6,1,0,64,192,64,64,64,64,224,5,7,7,
  6,0,0,112,136,8,16,32,64,248,5,7,7,6,0,0,
  248,8,16,48,8,136,112,5,7,7,6,0,0,16,48,80,
  144,248,16,16,5,7,7,6,0,0,248,128,240,8,8,136,
  112,5,7,7,6,0,0,48,64,128,240,136,136,112,5,7,
  7,6,0,0,248,8,16,16,32,32,32,5,7,7,6,0,
  0,112,136,136,112,136,136,112,5,7,7,6,0,0,112,136,
  136,120,8,16,96,2,5,5,6,1,0,192,192,0,192,192,
  2,6,6,6,1,255,192,192,0,192,64,128,3,5,5,6,
  1,1,32,64,128,64,32,5,3,3,6,0,2,248,0,248,
  3,5,5,6,1,1,128,64,32,64,128,5,7,7,6,0,
  0,112,136,16,32,32,0,32,5,7,7,6,0,0,112,136,
  184,168,184,128,112,5,7,7,6,0,0,112,136,136,248,136,
  136,136,5,7,7,6,0,0,240,72,72,112,72,72,240,5,
  7,7,6,0,0,112,136,128,128,128,136,112,5,7,7,6,
  0,0,240,72,72,72,72,72,240,5,7,7,6,0,0,248,
  128,128,240,128,128,248,5,7,7,6,0,0,248,128,128,240,
  128,128,128,5,7,7,6,0,0,112,136,128,128,152,136,112,
  5,7,7,6,0,0,136,136,136,248,136,136,136,3,7,7,
  6,1,0,224,64,64,64,64,64,224,5,7,7,6,0,0,
  56,16,16,16,16,144,96,5,7,7,6,0,0,136,144,160,
  192,160,144,136,5,7,7,6,0,0,128,128,128,128,128,128,
  248,5,7,7,6,0,0,136,216,168,136,136,136,136,5,7,
  7,6,0,0,136,136,200,168,152,136,136,5,7,7,6,0,
  0,112,136,136,136,136,136,112,5,7,7,6,0,0,240,136,
  136,240,128,128,128,5,7,7,6,0,0,112,136,136,136,168,
  144,104,5,7,7,6,0,0,240,136,136,240,160,144,136,5,
  7,7,6,0,0,112,136,128,112,8,136,112,5,7,7,6,
  0,0,248,32,32,32,32,32,32,5,7,7,6,0,0,136,
  136,136,136,136,136,112,5,7,7,6,0,0,136,136,136,136,
  80,80,32,5,7,7,6,0,0,136,136,136,136,168,168,80,
  5,7,7,6,0,0,136,136,80,32,80,136,136,5,7,7,
  6,0,0,136,136,80,32,32,32,32,5,7,7,6,0,0,
  248,8,16,32,64,128,248,3,9,9,6,1,255,224,128,128,
  128,128,128,128,128,224,5,7,7,6,0,0,128,64,64,32,
  16,16,8,3,9,9,6,1,255,224,32,32,32,32,32,32,
  32,224,5,3,3,6,0,5,32,80,136,5,1,1,6,0,
  254,248,3,3,3,6,1,5,128,64,32,5,5,5,6,0,
  0,112,8,120,136,120,5,7,7,6,0,0,128,128,240,136,
  136,136,240,5,5,5,6,0,0,112,128,128,136,112,5,7,
  7,6,0,0,8,8,120,136,136,136,120,5,5,5,6,0,
  0,112,136,240,128,112,5,7,7,6,0,0,48,72,64,224,
  64,64,64,5,7,7,6,0,254,112,136,136,136,120,8,112,
  5,7,7,6,0,0,128,128,240,136,136,136,136,3,7,7,
  6,1,0,64,0,192,64,64,64,224,4,9,9,6,1,254,
  16,0,48,16,16,16,16,144,96,5,7,7,6,0,0,128,
  128,136,144,224,144,136,3,7,7,6,1,0,192,64,64,64,
  64,64,224,5,5,5,6,0,0,208,168,168,168,168,5,5,
  5,6,0,0,176,200,136,136,136,5,5,5,6,0,0,112,
  136,136,136,112,5,7,7,6,0,254,240,136,136,136,240,128,
  128,5,7,7,6,0,254,120,136,136,136,120,8,8,5,5,
  5,6,0,0,176,200,128,128,128,5,5,5,6,0,0,120,
  128,112,8,240,5,7,7,6,0,0,32,32,248,32,32,32,
  24,5,5,5,6,0,0,136,136,136,152,104,5,5,5,6,
  0,0,136,136,136,80,32,5,5,5,6,0,0,136,136,168,
  168,80,5,5,5,6,0,0,136,80,32,80,136,5,7,7,
  6,0,254,136,136,136,80,32,64,128,5,5,5,6,0,0,
  248,16,32,64,248,3,9,9,6,1,255,32,64,64,64,128,
  64,64,64,32,1,9,9,6,2,255,128,128,128,128,128,128,
  128,128,128,3,9,9,6,1,255,128,64,64,64,32,64,64,
  64,128,5,3,3,6,0,2,72,168,144,255};
#else
  // extended (original) font (symbols 1 - 255)

/*
  Fontname: -Marlin6x12-Fixed-Medium-R-SemiCondensed--12-90-100-100-C-111-ISO10646-1
  Copyright: Public domain terminal emulator font.  Share and enjoy. original font -Misc-Fixed-Medium-R-SemiCondensed--12-110-75-75-C-60-ISO10646-1
  Capital A Height: 7, '1' Height: 7
  Calculated Max Values w= 7 h=10 x= 5 y= 7 dx= 7 dy= 0 ascent=10 len=10
  Font Bounding box     w=12 h=15 x= 0 y=-2
  Calculated Min Values           x= 0 y=-2 dx= 0 dy= 0
  Pure Font   ascent = 7 descent=-2
  X Font      ascent = 8 descent=-2
  Max Font    ascent =10 descent=-2
*/
const u8g_fntpgm_uint8_t ISO10646_1_5x7[2647] U8G_FONT_SECTION("ISO10646_1_5x7") = {
  0,12,15,0,254,7,2,37,3,187,1,255,254,10,254,8,
  254,5,8,8,6,0,0,64,240,200,136,136,152,120,16,5,
  8,8,6,0,0,192,248,136,136,136,136,136,248,5,5,5,
  6,0,1,32,48,248,48,32,5,8,8,6,0,0,32,112,
  248,32,32,32,32,224,5,9,9,6,0,255,32,112,168,168,
  184,136,136,112,32,7,5,5,7,0,1,216,108,54,108,216,
  5,9,9,6,0,255,248,168,136,136,136,136,136,168,248,5,
  10,10,6,0,254,32,80,80,80,80,136,168,168,136,112,3,
  3,3,6,0,3,64,160,64,255,255,255,255,255,255,255,255,
  255,255,255,255,255,255,255,255,255,255,255,255,255,255,0,0,
  0,6,5,255,1,7,7,6,2,0,128,128,128,128,128,0,
  128,3,3,3,6,1,5,160,160,160,5,6,6,6,0,0,
  80,248,80,80,248,80,5,9,9,6,0,255,32,112,168,160,
  112,40,168,112,32,5,7,7,6,0,0,200,200,16,32,64,
  152,152,5,7,7,6,0,0,64,160,160,64,168,144,104,1,
  3,3,6,2,5,128,128,128,3,9,9,6,1,255,32,64,
  64,128,128,128,64,64,32,3,9,9,6,1,255,128,64,64,
  32,32,32,64,64,128,5,7,7,6,0,0,32,168,112,32,
  112,168,32,5,5,5,6,0,1,32,32,248,32,32,2,3,
  3,6,1,255,192,64,128,5,1,1,6,0,3,248,2,2,
  2,6,1,0,192,192,5,7,7,6,0,0,8,16,16,32,
  64,64,128,5,7,7,6,0,0,112,136,152,168,200,136,112,
  3,7,7,6,1,0,64,192,64,64,64,64,224,5,7,7,
  6,0,0,112,136,8,16,32,64,248,5,7,7,6,0,0,
  248,8,16,48,8,136,112,5,7,7,6,0,0,16,48,80,
  144,248,16,16,5,7,7,6,0,0,248,128,240,8,8,136,
  112,5,7,7,6,0,0,48,64,128,240,136,136,112,5,7,
  7,6,0,0,248,8,16,16,32,32,32,5,7,7,6,0,
  0,112,136,136,112,136,136,112,5,7,7,6,0,0,112,136,
  136,120,8,16,96,2,5,5,6,1,0,192,192,0,192,192,
  2,6,6,6,1,255,192,192,0,192,64,128,3,5,5,6,
  1,1,32,64,128,64,32,5,3,3,6,0,2,248,0,248,
  3,5,5,6,1,1,128,64,32,64,128,5,7,7,6,0,
  0,112,136,16,32,32,0,32,5,7,7,6,0,0,112,136,
  184,168,184,128,112,5,7,7,6,0,0,112,136,136,248,136,
  136,136,5,7,7,6,0,0,240,72,72,112,72,72,240,5,
  7,7,6,0,0,112,136,128,128,128,136,112,5,7,7,6,
  0,0,240,72,72,72,72,72,240,5,7,7,6,0,0,248,
  128,128,240,128,128,248,5,7,7,6,0,0,248,128,128,240,
  128,128,128,5,7,7,6,0,0,112,136,128,128,152,136,112,
  5,7,7,6,0,0,136,136,136,248,136,136,136,3,7,7,
  6,1,0,224,64,64,64,64,64,224,5,7,7,6,0,0,
  56,16,16,16,16,144,96,5,7,7,6,0,0,136,144,160,
  192,160,144,136,5,7,7,6,0,0,128,128,128,128,128,128,
  248,5,7,7,6,0,0,136,216,168,136,136,136,136,5,7,
  7,6,0,0,136,136,200,168,152,136,136,5,7,7,6,0,
  0,112,136,136,136,136,136,112,5,7,7,6,0,0,240,136,
  136,240,128,128,128,5,7,7,6,0,0,112,136,136,136,168,
  144,104,5,7,7,6,0,0,240,136,136,240,160,144,136,5,
  7,7,6,0,0,112,136,128,112,8,136,112,5,7,7,6,
  0,0,248,32,32,32,32,32,32,5,7,7,6,0,0,136,
  136,136,136,136,136,112,5,7,7,6,0,0,136,136,136,136,
  80,80,32,5,7,7,6,0,0,136,136,136,136,168,168,80,
  5,7,7,6,0,0,136,136,80,32,80,136,136,5,7,7,
  6,0,0,136,136,80,32,32,32,32,5,7,7,6,0,0,
  248,8,16,32,64,128,248,3,9,9,6,1,255,224,128,128,
  128,128,128,128,128,224,5,7,7,6,0,0,128,64,64,32,
  16,16,8,3,9,9,6,1,255,224,32,32,32,32,32,32,
  32,224,5,3,3,6,0,5,32,80,136,5,1,1,6,0,
  254,248,3,3,3,6,1,5,128,64,32,5,5,5,6,0,
  0,112,8,120,136,120,5,7,7,6,0,0,128,128,240,136,
  136,136,240,5,5,5,6,0,0,112,128,128,136,112,5,7,
  7,6,0,0,8,8,120,136,136,136,120,5,5,5,6,0,
  0,112,136,240,128,112,5,7,7,6,0,0,48,72,64,224,
  64,64,64,5,7,7,6,0,254,112,136,136,136,120,8,112,
  5,7,7,6,0,0,128,128,240,136,136,136,136,3,7,7,
  6,1,0,64,0,192,64,64,64,224,4,9,9,6,1,254,
  16,0,48,16,16,16,16,144,96,5,7,7,6,0,0,128,
  128,136,144,224,144,136,3,7,7,6,1,0,192,64,64,64,
  64,64,224,5,5,5,6,0,0,208,168,168,168,168,5,5,
  5,6,0,0,176,200,136,136,136,5,5,5,6,0,0,112,
  136,136,136,112,5,7,7,6,0,254,240,136,136,136,240,128,
  128,5,7,7,6,0,254,120,136,136,136,120,8,8,5,5,
  5,6,0,0,176,200,128,128,128,5,5,5,6,0,0,120,
  128,112,8,240,5,7,7,6,0,0,32,32,248,32,32,32,
  24,5,5,5,6,0,0,136,136,136,152,104,5,5,5,6,
  0,0,136,136,136,80,32,5,5,5,6,0,0,136,136,168,
  168,80,5,5,5,6,0,0,136,80,32,80,136,5,7,7,
  6,0,254,136,136,136,80,32,64,128,5,5,5,6,0,0,
  248,16,32,64,248,3,9,9,6,1,255,32,64,64,64,128,
  64,64,64,32,1,9,9,6,2,255,128,128,128,128,128,128,
  128,128,128,3,9,9,6,1,255,128,64,64,64,32,64,64,
  64,128,5,3,3,6,0,2,72,168,144,255,255,255,255,255,
  255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
  255,255,255,255,255,255,255,255,255,255,255,255,0,0,0,6,
  5,255,1,7,7,6,2,0,128,0,128,128,128,128,128,5,
  7,7,6,0,255,32,112,168,160,168,112,32,5,7,7,6,
  0,0,48,72,64,224,64,72,176,5,5,5,6,0,0,168,
  80,136,80,168,5,7,7,6,0,0,136,80,248,32,248,32,
  32,1,7,7,6,2,0,128,128,128,0,128,128,128,4,8,
  8,6,1,0,112,128,96,144,144,96,16,224,3,1,1,6,
  1,7,160,6,7,7,6,0,0,120,132,180,164,180,132,120,
  3,5,5,6,1,4,96,160,96,0,224,5,5,5,6,0,
  0,40,80,160,80,40,5,3,3,6,0,1,248,8,8,3,
  1,1,6,1,3,224,6,7,7,6,0,0,120,132,180,164,
  164,132,120,5,1,1,6,0,7,248,4,4,4,6,1,5,
  96,144,144,96,5,7,7,6,0,0,32,32,248,32,32,0,
  248,3,5,5,6,1,4,64,160,32,64,224,3,5,5,6,
  1,4,192,32,64,32,192,3,3,3,6,1,5,32,64,128,
  5,7,7,6,0,254,136,136,136,152,232,128,128,5,8,8,
  6,0,0,120,232,232,232,104,40,40,40,2,2,2,6,2,
  3,192,192,3,2,2,6,1,254,32,192,3,5,5,6,1,
  4,64,192,64,64,224,3,5,5,6,1,5,64,160,64,0,
  224,5,5,5,6,0,0,160,80,40,80,160,5,10,10,6,
  0,0,64,192,72,80,96,80,176,80,120,16,5,10,10,6,
  0,0,64,192,72,80,96,80,168,8,16,56,5,10,10,6,
  0,0,192,32,72,48,224,80,176,80,120,16,5,7,7,6,
  0,0,32,0,32,32,64,136,112,5,10,10,6,0,0,64,
  32,0,112,136,136,248,136,136,136,5,10,10,6,0,0,16,
  32,0,112,136,136,248,136,136,136,5,10,10,6,0,0,32,
  80,0,112,136,136,248,136,136,136,5,10,10,6,0,0,104,
  176,0,112,136,136,248,136,136,136,5,9,9,6,0,0,80,
  0,112,136,136,248,136,136,136,5,10,10,6,0,0,32,80,
  32,112,136,136,248,136,136,136,5,7,7,6,0,0,120,160,
  160,240,160,160,184,5,9,9,6,0,254,112,136,128,128,128,
  136,112,16,96,5,10,10,6,0,0,64,32,0,248,128,128,
  240,128,128,248,5,10,10,6,0,0,16,32,0,248,128,128,
  240,128,128,248,5,10,10,6,0,0,32,80,0,248,128,128,
  240,128,128,248,5,9,9,6,0,0,80,0,248,128,128,240,
  128,128,248,3,10,10,6,1,0,128,64,0,224,64,64,64,
  64,64,224,3,10,10,6,1,0,32,64,0,224,64,64,64,
  64,64,224,3,10,10,6,1,0,64,160,0,224,64,64,64,
  64,64,224,3,9,9,6,1,0,160,0,224,64,64,64,64,
  64,224,5,7,7,6,0,0,112,72,72,232,72,72,112,5,
  10,10,6,0,0,104,176,0,136,136,200,168,152,136,136,5,
  10,10,6,0,0,64,32,0,112,136,136,136,136,136,112,5,
  10,10,6,0,0,16,32,0,112,136,136,136,136,136,112,5,
  10,10,6,0,0,32,80,0,112,136,136,136,136,136,112,5,
  10,10,6,0,0,104,176,0,112,136,136,136,136,136,112,5,
  9,9,6,0,0,80,0,112,136,136,136,136,136,112,5,5,
  5,6,0,1,136,80,32,80,136,5,9,9,6,0,255,8,
  112,152,168,168,168,200,112,128,5,10,10,6,0,0,64,32,
  0,136,136,136,136,136,136,112,5,10,10,6,0,0,16,32,
  0,136,136,136,136,136,136,112,5,10,10,6,0,0,32,80,
  0,136,136,136,136,136,136,112,5,9,9,6,0,0,80,0,
  136,136,136,136,136,136,112,5,10,10,6,0,0,16,32,0,
  136,136,80,32,32,32,32,4,7,7,6,1,0,128,224,144,
  144,144,224,128,5,7,7,6,0,0,112,136,144,160,144,136,
  176,5,8,8,6,0,0,64,32,0,112,8,120,136,120,5,
  8,8,6,0,0,16,32,0,112,8,120,136,120,5,8,8,
  6,0,0,32,80,0,112,8,120,136,120,5,8,8,6,0,
  0,104,176,0,112,8,120,136,120,5,7,7,6,0,0,80,
  0,112,8,120,136,120,5,8,8,6,0,0,32,80,32,112,
  8,120,136,120,5,5,5,6,0,0,112,40,112,160,120,5,
  7,7,6,0,254,112,136,128,136,112,16,96,5,8,8,6,
  0,0,64,32,0,112,136,240,128,112,5,8,8,6,0,0,
  16,32,0,112,136,240,128,112,5,8,8,6,0,0,32,80,
  0,112,136,240,128,112,5,7,7,6,0,0,80,0,112,136,
  240,128,112,3,8,8,6,1,0,128,64,0,192,64,64,64,
  224,3,8,8,6,1,0,32,64,0,192,64,64,64,224,3,
  8,8,6,1,0,64,160,0,192,64,64,64,224,3,7,7,
  6,1,0,160,0,192,64,64,64,224,5,9,9,6,0,0,
  80,32,80,8,120,136,136,136,112,5,8,8,6,0,0,104,
  176,0,176,200,136,136,136,5,8,8,6,0,0,64,32,0,
  112,136,136,136,112,5,8,8,6,0,0,16,32,0,112,136,
  136,136,112,5,8,8,6,0,0,32,80,0,112,136,136,136,
  112,5,8,8,6,0,0,104,176,0,112,136,136,136,112,5,
  7,7,6,0,0,80,0,112,136,136,136,112,5,5,5,6,
  0,1,32,0,248,0,32,5,5,5,6,0,0,120,152,168,
  200,240,5,8,8,6,0,0,64,32,0,136,136,136,136,112,
  5,8,8,6,0,0,16,32,0,136,136,136,136,112,5,8,
  8,6,0,0,32,80,0,136,136,136,136,112,5,7,7,6,
  0,0,80,0,136,136,136,136,112,5,10,10,6,0,254,16,
  32,0,136,136,136,80,32,64,128,5,9,9,6,0,254,128,
  128,240,136,136,136,240,128,128,5,9,9,6,0,254,80,0,
  136,136,136,80,32,64,128};

#endif