/*******************************************************************************
 * Size: 16 px
 * Bpp: 1
 * Opts: 
 ******************************************************************************/

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
#include "lvgl.h"
#else
#include "../../lvgl.h"
#endif

#ifndef ICONFONT_SYMBOL
#define ICONFONT_SYMBOL 1
#endif

#if ICONFONT_SYMBOL

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+E695 "" */
    0x0, 0x0, 0x0, 0x78, 0x0, 0x0, 0x0, 0x0,
    0x0, 0xf, 0xfc, 0x0, 0x0, 0x0, 0x0, 0x1,
    0xff, 0xfe, 0x0, 0x0, 0x0, 0x0, 0x3f, 0xff,
    0xff, 0x0, 0x0, 0x0, 0x7, 0xff, 0xff, 0xff,
    0x80, 0x0, 0x0, 0x7f, 0xff, 0xff, 0xff, 0x80,
    0x0, 0x0, 0x0, 0x7f, 0xf8, 0x0, 0x0, 0x0,
    0x0, 0x1, 0xff, 0xe0, 0x0, 0x0, 0x0, 0x0,
    0x7, 0xff, 0x80, 0x0, 0x0, 0x0, 0x0, 0x1f,
    0xfe, 0x0, 0x0, 0x0, 0x0, 0x0, 0x7f, 0xf8,
    0x0, 0x0, 0x7, 0xff, 0xf1, 0xff, 0xe3, 0xff,
    0xf8, 0x1f, 0xff, 0xf0, 0x0, 0x3f, 0xff, 0xe0,
    0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0x81, 0xff,
    0xff, 0xff, 0xff, 0x1c, 0x7e, 0x7, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xf8,

    /* U+EB21 "" */
    0x0, 0x0, 0x7, 0xff, 0x80, 0x0, 0x0, 0x0,
    0x0, 0x1f, 0xfe, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x7f, 0xf8, 0x0, 0x0, 0x0, 0x0, 0x1, 0xff,
    0xe0, 0x0, 0x0, 0x0, 0x0, 0x7, 0xff, 0x80,
    0x0, 0x0, 0x0, 0x0, 0x1f, 0xfe, 0x0, 0x0,
    0x0, 0x1, 0xff, 0xff, 0xff, 0xfe, 0x0, 0x0,
    0x1, 0xff, 0xff, 0xff, 0xe0, 0x0, 0x0, 0x0,
    0xff, 0xff, 0xfc, 0x0, 0x0, 0x0, 0x0, 0x7f,
    0xff, 0x80, 0x0, 0x0, 0x0, 0x0, 0x3f, 0xf0,
    0x0, 0x0, 0x7, 0xff, 0xfe, 0x1e, 0x1f, 0xff,
    0xf8, 0x1f, 0xff, 0xff, 0x3, 0xff, 0xff, 0xe0,
    0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0x81, 0xff,
    0xff, 0xff, 0xff, 0x1c, 0x7e, 0x7, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xf8
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 256, .box_w = 54, .box_h = 16, .ofs_x = -1, .ofs_y = -2},
    {.bitmap_index = 108, .adv_w = 256, .box_w = 54, .box_h = 16, .ofs_x = -1, .ofs_y = -2}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/

static const uint16_t unicode_list_0[] = {
    0x0, 0x48c
};

/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 59029, .range_length = 1165, .glyph_id_start = 1,
        .unicode_list = unicode_list_0, .glyph_id_ofs_list = NULL, .list_length = 2, .type = LV_FONT_FMT_TXT_CMAP_SPARSE_TINY
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
    .bpp = 1,
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
const lv_font_t iconfont_symbol = {
#else
lv_font_t iconfont_symbol = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 16,          /*The maximum line height required by the font*/
    .base_line = 2,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_HOR,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = 0,
    .underline_thickness = 0,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};



#endif /*#if ICONFONT_SYMBOL*/

