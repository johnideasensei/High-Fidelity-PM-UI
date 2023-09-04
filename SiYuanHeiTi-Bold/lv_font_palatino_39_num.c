/*******************************************************************************
 * Size: 39 px
 * Bpp: 4
 * Opts: 
 ******************************************************************************/

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif

#ifndef LV_FONT_PALATINO_39_NUM
#define LV_FONT_PALATINO_39_NUM 1
#endif

#if LV_FONT_PALATINO_39_NUM

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0043 "C" */
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x35, 0x67,
    0x76, 0x53, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x17, 0xcf, 0xff, 0xff, 0xff, 0xff, 0xfd,
    0x95, 0x0, 0x0, 0x0, 0x0, 0x19, 0xff, 0xfd,
    0x85, 0x32, 0x34, 0x7b, 0xff, 0xff, 0xf2, 0x0,
    0x0, 0x6, 0xff, 0xfb, 0x30, 0x0, 0x0, 0x0,
    0x0, 0x17, 0xef, 0xf0, 0x0, 0x0, 0x9f, 0xff,
    0x60, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1e,
    0xd0, 0x0, 0x8, 0xff, 0xf4, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0xc, 0xb0, 0x0, 0x5f,
    0xff, 0x70, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0xc, 0x90, 0x0, 0xef, 0xfd, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x6, 0x50,
    0x7, 0xff, 0xf5, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xe, 0xff, 0xf0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x3f, 0xff, 0xc0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x6f,
    0xff, 0xa0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x8f, 0xff, 0x80, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x9f, 0xff, 0x80, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x9f, 0xff,
    0x90, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x8f, 0xff, 0xa0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x6f, 0xff, 0xd0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x3f, 0xff, 0xf2,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0xe, 0xff, 0xf8, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x8,
    0xff, 0xff, 0x10, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x1, 0xff, 0xff, 0xa0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x6f, 0xff, 0xf7, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x9,
    0xff, 0xff, 0x70, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x9f, 0xff, 0xfb,
    0x20, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x44,
    0x0, 0x0, 0x6, 0xff, 0xff, 0xf9, 0x30, 0x0,
    0x0, 0x0, 0x0, 0x4b, 0xf3, 0x0, 0x0, 0x0,
    0x2a, 0xff, 0xff, 0xff, 0xc9, 0x88, 0x8a, 0xcf,
    0xff, 0x80, 0x0, 0x0, 0x0, 0x0, 0x18, 0xcf,
    0xff, 0xff, 0xff, 0xff, 0xfa, 0x60, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x35, 0x67, 0x76,
    0x52, 0x0, 0x0, 0x0,

    /* U+0044 "D" */
    0x6f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xed, 0xb8, 0x30, 0x0, 0x0, 0x0, 0x0, 0x13,
    0xaf, 0xff, 0xfc, 0xa9, 0x88, 0x9a, 0xbe, 0xff,
    0xff, 0xd6, 0x0, 0x0, 0x0, 0x0, 0x3, 0xff,
    0xf9, 0x0, 0x0, 0x0, 0x0, 0x2, 0x7e, 0xff,
    0xfc, 0x20, 0x0, 0x0, 0x0, 0x2f, 0xff, 0x90,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x8, 0xff, 0xfe,
    0x20, 0x0, 0x0, 0x1, 0xff, 0xf8, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x5, 0xff, 0xfe, 0x10,
    0x0, 0x0, 0x1f, 0xff, 0x80, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x7, 0xff, 0xfb, 0x0, 0x0,
    0x1, 0xff, 0xf7, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0xd, 0xff, 0xf4, 0x0, 0x0, 0x1f,
    0xff, 0x70, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x6f, 0xff, 0xb0, 0x0, 0x1, 0xff, 0xf7,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1,
    0xff, 0xff, 0x10, 0x0, 0x1f, 0xff, 0x70, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xd, 0xff,
    0xf5, 0x0, 0x1, 0xff, 0xf7, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xaf, 0xff, 0x60,
    0x0, 0x1f, 0xff, 0x70, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x9, 0xff, 0xf8, 0x0, 0x1,
    0xff, 0xf7, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x8f, 0xff, 0x70, 0x0, 0x1f, 0xff,
    0x70, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x9, 0xff, 0xf6, 0x0, 0x1, 0xff, 0xf7, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xaf,
    0xff, 0x40, 0x0, 0x1f, 0xff, 0x70, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xd, 0xff, 0xf0,
    0x0, 0x1, 0xff, 0xf7, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x1, 0xff, 0xfb, 0x0, 0x0,
    0x1f, 0xff, 0x70, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x5f, 0xff, 0x40, 0x0, 0x1, 0xff,
    0xf7, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0xc, 0xff, 0xc0, 0x0, 0x0, 0x2f, 0xff, 0x70,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x4, 0xff,
    0xf3, 0x0, 0x0, 0x2, 0xff, 0xf8, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x1, 0xdf, 0xf7, 0x0,
    0x0, 0x0, 0x3f, 0xff, 0x80, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0xcf, 0xf9, 0x0, 0x0, 0x0,
    0x3, 0xff, 0xf8, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x3, 0xdf, 0xf8, 0x0, 0x0, 0x0, 0x0, 0x4f,
    0xff, 0x90, 0x0, 0x0, 0x0, 0x1, 0x5b, 0xff,
    0xe4, 0x0, 0x0, 0x0, 0x0, 0xa, 0xff, 0xff,
    0xdb, 0xa9, 0x9a, 0xbd, 0xff, 0xfe, 0x70, 0x0,
    0x0, 0x0, 0x0, 0xd, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xfe, 0xdb, 0x83, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,

    /* U+004D "M" */
    0x4f, 0xff, 0xff, 0xff, 0x50, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xcf, 0xff,
    0xff, 0xff, 0x2, 0x25, 0xef, 0xff, 0xc0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x3,
    0xff, 0xff, 0xc4, 0x21, 0x0, 0x0, 0xaf, 0xff,
    0xf3, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0xa, 0xff, 0xff, 0x50, 0x0, 0x0, 0x0,
    0x9f, 0xff, 0xfb, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x1f, 0xff, 0xff, 0x40, 0x0,
    0x0, 0x0, 0x8f, 0xef, 0xff, 0x30, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x9f, 0x9f, 0xff,
    0x40, 0x0, 0x0, 0x0, 0x8f, 0x6f, 0xff, 0xb0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0xfd,
    0x4f, 0xff, 0x30, 0x0, 0x0, 0x0, 0x8f, 0x4a,
    0xff, 0xf3, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x8, 0xf5, 0x4f, 0xff, 0x30, 0x0, 0x0, 0x0,
    0x7f, 0x42, 0xff, 0xfb, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x1f, 0xd0, 0x4f, 0xff, 0x30, 0x0,
    0x0, 0x0, 0x7f, 0x40, 0xaf, 0xff, 0x30, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x8f, 0x50, 0x4f, 0xff,
    0x30, 0x0, 0x0, 0x0, 0x7f, 0x40, 0x2f, 0xff,
    0xb0, 0x0, 0x0, 0x0, 0x0, 0x1, 0xfd, 0x0,
    0x4f, 0xff, 0x30, 0x0, 0x0, 0x0, 0x7f, 0x40,
    0xa, 0xff, 0xf3, 0x0, 0x0, 0x0, 0x0, 0x8,
    0xf5, 0x0, 0x4f, 0xff, 0x30, 0x0, 0x0, 0x0,
    0x7f, 0x40, 0x2, 0xff, 0xfb, 0x0, 0x0, 0x0,
    0x0, 0x1f, 0xd0, 0x0, 0x4f, 0xff, 0x30, 0x0,
    0x0, 0x0, 0x7f, 0x40, 0x0, 0x9f, 0xff, 0x30,
    0x0, 0x0, 0x0, 0x8f, 0x50, 0x0, 0x4f, 0xff,
    0x30, 0x0, 0x0, 0x0, 0x7f, 0x40, 0x0, 0x2f,
    0xff, 0xb0, 0x0, 0x0, 0x1, 0xfd, 0x0, 0x0,
    0x4f, 0xff, 0x30, 0x0, 0x0, 0x0, 0x7f, 0x40,
    0x0, 0x9, 0xff, 0xf3, 0x0, 0x0, 0x8, 0xf5,
    0x0, 0x0, 0x4f, 0xff, 0x30, 0x0, 0x0, 0x0,
    0x7f, 0x40, 0x0, 0x1, 0xff, 0xfb, 0x0, 0x0,
    0x1f, 0xc0, 0x0, 0x0, 0x4f, 0xff, 0x30, 0x0,
    0x0, 0x0, 0x7f, 0x40, 0x0, 0x0, 0x9f, 0xff,
    0x30, 0x0, 0x8f, 0x50, 0x0, 0x0, 0x4f, 0xff,
    0x30, 0x0, 0x0, 0x0, 0x7f, 0x40, 0x0, 0x0,
    0x1f, 0xff, 0xb0, 0x1, 0xfd, 0x0, 0x0, 0x0,
    0x4f, 0xff, 0x30, 0x0, 0x0, 0x0, 0x8f, 0x40,
    0x0, 0x0, 0x9, 0xff, 0xf4, 0x8, 0xf5, 0x0,
    0x0, 0x0, 0x4f, 0xff, 0x30, 0x0, 0x0, 0x0,
    0x8f, 0x40, 0x0, 0x0, 0x1, 0xff, 0xfc, 0x1f,
    0xd0, 0x0, 0x0, 0x0, 0x4f, 0xff, 0x30, 0x0,
    0x0, 0x0, 0x8f, 0x40, 0x0, 0x0, 0x0, 0x8f,
    0xff, 0xbf, 0x50, 0x0, 0x0, 0x0, 0x5f, 0xff,
    0x30, 0x0, 0x0, 0x0, 0x8f, 0x40, 0x0, 0x0,
    0x0, 0x1f, 0xff, 0xfd, 0x0, 0x0, 0x0, 0x0,
    0x5f, 0xff, 0x30, 0x0, 0x0, 0x0, 0x9f, 0x50,
    0x0, 0x0, 0x0, 0x8, 0xff, 0xf6, 0x0, 0x0,
    0x0, 0x0, 0x5f, 0xff, 0x40, 0x0, 0x0, 0x0,
    0xaf, 0x60, 0x0, 0x0, 0x0, 0x1, 0xff, 0xe0,
    0x0, 0x0, 0x0, 0x0, 0x6f, 0xff, 0x50, 0x0,
    0x2, 0x36, 0xff, 0xd4, 0x22, 0x0, 0x0, 0x0,
    0x9f, 0x80, 0x0, 0x0, 0x2, 0x24, 0xdf, 0xff,
    0xc4, 0x22, 0x4f, 0xff, 0xff, 0xff, 0xff, 0x0,
    0x0, 0x0, 0x2f, 0x10, 0x0, 0x0, 0x1f, 0xff,
    0xff, 0xff, 0xff, 0xff, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0,

    /* U+0050 "P" */
    0xf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe,
    0xdb, 0x71, 0x0, 0x0, 0x45, 0x6d, 0xff, 0xfe,
    0xb7, 0x55, 0x58, 0xcf, 0xff, 0xf7, 0x0, 0x0,
    0x0, 0x6f, 0xff, 0x80, 0x0, 0x0, 0x0, 0x4e,
    0xff, 0xf7, 0x0, 0x0, 0x5, 0xff, 0xf7, 0x0,
    0x0, 0x0, 0x0, 0x3f, 0xff, 0xf2, 0x0, 0x0,
    0x4f, 0xff, 0x60, 0x0, 0x0, 0x0, 0x0, 0xaf,
    0xff, 0x70, 0x0, 0x4, 0xff, 0xf6, 0x0, 0x0,
    0x0, 0x0, 0x6, 0xff, 0xf9, 0x0, 0x0, 0x4f,
    0xff, 0x60, 0x0, 0x0, 0x0, 0x0, 0x5f, 0xff,
    0x80, 0x0, 0x4, 0xff, 0xf6, 0x0, 0x0, 0x0,
    0x0, 0x6, 0xff, 0xf4, 0x0, 0x0, 0x3f, 0xff,
    0x60, 0x0, 0x0, 0x0, 0x0, 0xaf, 0xfe, 0x0,
    0x0, 0x3, 0xff, 0xf6, 0x0, 0x0, 0x0, 0x0,
    0x2f, 0xff, 0x40, 0x0, 0x0, 0x3f, 0xff, 0x60,
    0x0, 0x0, 0x0, 0x1d, 0xff, 0x60, 0x0, 0x0,
    0x3, 0xff, 0xf6, 0x1, 0x31, 0x2, 0x7e, 0xfe,
    0x40, 0x0, 0x0, 0x0, 0x3f, 0xff, 0x60, 0x2f,
    0xff, 0xff, 0xc6, 0x0, 0x0, 0x0, 0x0, 0x3,
    0xff, 0xf6, 0x0, 0x2, 0x32, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x3f, 0xff, 0x60, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x3, 0xff,
    0xf6, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x3f, 0xff, 0x60, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x3, 0xff, 0xf6,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x3f, 0xff, 0x60, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x4, 0xff, 0xf6, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x4f, 0xff, 0x60, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x4, 0xff, 0xf6, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x4f,
    0xff, 0x70, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x6, 0xff, 0xf8, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x1, 0x24, 0xcf, 0xff,
    0xe5, 0x32, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xf3, 0x0, 0x0,
    0x0, 0x0, 0x0,

    /* U+0053 "S" */
    0x0, 0x0, 0x0, 0x15, 0x67, 0x75, 0x30, 0x0,
    0x0, 0x0, 0x0, 0x5, 0xcf, 0xff, 0xff, 0xff,
    0xfb, 0x60, 0x0, 0x0, 0x1b, 0xff, 0xc6, 0x32,
    0x35, 0xbf, 0xff, 0xc0, 0x0, 0xc, 0xff, 0x70,
    0x0, 0x0, 0x0, 0x2c, 0xfa, 0x0, 0x8, 0xff,
    0x90, 0x0, 0x0, 0x0, 0x0, 0x1f, 0x80, 0x0,
    0xff, 0xf1, 0x0, 0x0, 0x0, 0x0, 0x0, 0xf6,
    0x0, 0x5f, 0xfd, 0x0, 0x0, 0x0, 0x0, 0x0,
    0xf, 0x50, 0x7, 0xff, 0xb0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x31, 0x0, 0x8f, 0xfd, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x6, 0xff, 0xf4,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x2f,
    0xff, 0xe4, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0xaf, 0xff, 0xfd, 0x85, 0x30, 0x0, 0x0,
    0x0, 0x0, 0x1, 0xdf, 0xff, 0xff, 0xff, 0xfe,
    0xb7, 0x30, 0x0, 0x0, 0x0, 0x8f, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xc2, 0x0, 0x0, 0x0, 0x5,
    0x9c, 0xef, 0xff, 0xff, 0xff, 0xf2, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x14, 0x7c, 0xff, 0xff, 0xd0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x5, 0xff,
    0xff, 0x30, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x5, 0xff, 0xf7, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0xe, 0xff, 0x80, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0xcf, 0xf7, 0x47, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xd, 0xff, 0x48,
    0xc0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xff,
    0xe0, 0x8d, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x6f, 0xf6, 0x9, 0xf1, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x2f, 0xfb, 0x0, 0xaf, 0xd4, 0x0, 0x0,
    0x0, 0x0, 0x5e, 0xfa, 0x0, 0xb, 0xff, 0xfd,
    0x96, 0x44, 0x58, 0xdf, 0xf6, 0x0, 0x0, 0x29,
    0xef, 0xff, 0xff, 0xff, 0xfd, 0x71, 0x0, 0x0,
    0x0, 0x0, 0x24, 0x67, 0x76, 0x51, 0x0, 0x0,
    0x0, 0x0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 442, .box_w = 26, .box_h = 28, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 364, .adv_w = 483, .box_w = 29, .box_h = 27, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 756, .adv_w = 590, .box_w = 36, .box_h = 27, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1242, .adv_w = 377, .box_w = 23, .box_h = 26, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1541, .adv_w = 328, .box_w = 19, .box_h = 28, .ofs_x = 1, .ofs_y = -1}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/

static const uint16_t unicode_list_0[] = {
    0x0, 0x1, 0xa, 0xd, 0x10
};

/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 67, .range_length = 17, .glyph_id_start = 1,
        .unicode_list = unicode_list_0, .glyph_id_ofs_list = NULL, .list_length = 5, .type = LV_FONT_FMT_TXT_CMAP_SPARSE_TINY
    }
};



/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LV_VERSION_CHECK(8, 0, 0)
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = NULL,
    .kern_scale = 0,
    .cmap_num = 1,
    .bpp = 4,
    .kern_classes = 0,
    .bitmap_format = 0,
#if LV_VERSION_CHECK(8, 0, 0)
    .cache = &cache
#endif
};


/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LV_VERSION_CHECK(8, 0, 0)
const lv_font_t lv_font_palatino_39_num = {
#else
lv_font_t lv_font_palatino_39_num = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 28,          /*The maximum line height required by the font*/
    .base_line = 1,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -4,
    .underline_thickness = 2,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};



#endif /*#if LV_FONT_PALATINO_39_NUM*/

