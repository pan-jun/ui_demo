/**
 * @file my_slider_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "my_slider_gen.h"
#include "ui_demo.h"

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/***********************
 *  STATIC VARIABLES
 **********************/

/***********************
 *  STATIC PROTOTYPES
 **********************/

/**********************
 *   GLOBAL FUNCTIONS
 **********************/

lv_obj_t * my_slider_create(lv_obj_t * parent)
{
    LV_TRACE_OBJ_CREATE("begin");

    static lv_style_t style_base;

    static bool style_inited = false;

    if (!style_inited) {
        lv_style_init(&style_base);
        lv_style_set_bg_color(&style_base, lv_color_hex(0xFF8800));
        lv_style_set_text_color(&style_base, lv_color_hex(0x000000));
        lv_style_set_width(&style_base, LV_SIZE_CONTENT);
        lv_style_set_height(&style_base, LV_SIZE_CONTENT);

        style_inited = true;
    }

    lv_obj_t * lv_slider_0 = lv_slider_create(parent);
    lv_obj_set_name_static(lv_slider_0, "my_slider_#");
    lv_slider_bind_value(lv_slider_0, &slider_value);
    lv_obj_set_flex_flow(lv_slider_0, LV_FLEX_FLOW_ROW);

    lv_obj_add_style(lv_slider_0, &style_base, 0);
    lv_obj_add_style(lv_slider_0, &red, LV_PART_KNOB);
    lv_obj_add_style(lv_slider_0, &blue, LV_PART_KNOB | LV_STATE_FOCUSED);
    lv_obj_bind_style(lv_slider_0, &green, LV_PART_KNOB | LV_STATE_FOCUSED, &slider_value, 50);
    lv_obj_t * lv_label_0 = lv_label_create(lv_slider_0);
    lv_label_set_text(lv_label_0, "Current value: ");
    
    lv_obj_t * lv_label_1 = lv_label_create(lv_slider_0);
    lv_label_bind_text(lv_label_1, &slider_value, NULL);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_slider_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

