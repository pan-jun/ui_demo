/**
 * @file my_group_button_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "my_group_button_gen.h"
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

lv_obj_t * my_group_button_create(lv_obj_t * parent, const char * red_text, const char * green_text, const char * blue_text)
{
    LV_TRACE_OBJ_CREATE("begin");

    lv_obj_t * lv_obj_0 = lv_obj_create(parent);
    lv_obj_set_name_static(lv_obj_0, "my_group_button_#");
    lv_obj_set_width(lv_obj_0, LV_SIZE_CONTENT);
    lv_obj_set_height(lv_obj_0, LV_SIZE_CONTENT);
    lv_obj_set_flex_flow(lv_obj_0, LV_FLEX_FLOW_ROW);

    lv_obj_t * lv_button_0 = lv_button_create(lv_obj_0);
    lv_obj_set_style_bg_color(lv_button_0, lv_color_hex(0xFF0000), 0);
    lv_obj_t * lv_label_0 = lv_label_create(lv_button_0);
    lv_label_set_text(lv_label_0, red_text);
    lv_obj_set_style_text_color(lv_label_0, lv_color_hex(0x1736da), 0);
    
    lv_obj_t * lv_button_1 = lv_button_create(lv_obj_0);
    lv_obj_set_style_bg_color(lv_button_1, lv_color_hex(0x00FF00), 0);
    lv_obj_t * lv_label_1 = lv_label_create(lv_button_1);
    lv_label_set_text(lv_label_1, green_text);
    lv_obj_set_style_text_color(lv_label_1, lv_color_hex(0xda1785), 0);
    
    lv_obj_t * lv_button_2 = lv_button_create(lv_obj_0);
    lv_obj_set_style_bg_color(lv_button_2, lv_color_hex(0x0000FF), 0);
    lv_obj_t * lv_label_2 = lv_label_create(lv_button_2);
    lv_label_set_text(lv_label_2, blue_text);
    lv_obj_set_style_text_color(lv_label_2, lv_color_hex(0xffffff), 0);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

