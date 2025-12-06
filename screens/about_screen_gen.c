/**
 * @file about_screen_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "about_screen_gen.h"
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

lv_obj_t * about_screen_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");

    static lv_style_t style_about;

    static bool style_inited = false;

    if (!style_inited) {
        lv_style_init(&style_about);
        lv_style_set_bg_color(&style_about, SCREEN_BG_COLOR);

        style_inited = true;
    }

    if (about_screen == NULL) about_screen = lv_obj_create(NULL);
    lv_obj_t * lv_obj_0 = about_screen;
    lv_obj_set_name_static(lv_obj_0, "about_screen_#");

    lv_obj_t * lv_button_0 = lv_button_create(lv_obj_0);
    lv_obj_set_align(lv_button_0, LV_ALIGN_CENTER);
    lv_obj_set_style_bg_color(lv_button_0, lv_color_hex(0x365be0), 0);
    lv_obj_set_style_radius(lv_button_0, 16, 0);
    lv_obj_t * lv_label_0 = lv_label_create(lv_button_0);
    lv_label_set_text(lv_label_0, "Back");
    
    lv_obj_add_screen_load_event(lv_button_0, LV_EVENT_CLICKED, main_screen, LV_SCREEN_LOAD_ANIM_FADE_IN, 300, 0);
    
    lv_obj_t * lv_button_1 = lv_button_create(lv_obj_0);
    lv_obj_set_align(lv_button_1, LV_ALIGN_TOP_LEFT);
    lv_obj_t * lv_label_1 = lv_label_create(lv_button_1);
    lv_label_bind_text(lv_label_1, &test_text, NULL);
    
    lv_obj_add_event_cb(lv_button_1, my_callback_1, LV_EVENT_CLICKED, NULL);
    
    lv_obj_t * lv_obj_1 = lv_obj_create(lv_obj_0);
    lv_obj_set_align(lv_obj_1, LV_ALIGN_BOTTOM_MID);
    lv_obj_set_flex_flow(lv_obj_1, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_width(lv_obj_1, LV_SIZE_CONTENT);
    lv_obj_set_height(lv_obj_1, LV_SIZE_CONTENT);
    lv_obj_t * lv_label_2 = lv_label_create(lv_obj_1);
    lv_obj_set_style_text_color(lv_label_2, lv_color_hex(0xFF0000), 0);
    lv_label_bind_text(lv_label_2, &test_int_string, NULL);
    
    lv_obj_t * lv_button_2 = lv_button_create(lv_obj_1);
    lv_obj_set_align(lv_button_2, LV_ALIGN_BOTTOM_MID);
    lv_obj_t * lv_label_3 = lv_label_create(lv_button_2);
    lv_label_set_text(lv_label_3, "inc");
    
    lv_subject_increment_dsc_t * subject_increment_event_0 = lv_obj_add_subject_increment_event(lv_button_2, &test_int, LV_EVENT_CLICKED, 1);
    lv_obj_set_subject_increment_event_rollover(lv_button_2, subject_increment_event_0, true);
    lv_obj_add_event_cb(lv_button_2, my_callback_2, LV_EVENT_CLICKED, NULL);
    
    lv_obj_t * my_slider_0 = my_slider_create(lv_obj_0);
    lv_obj_set_width(my_slider_0, lv_pct(100));
    lv_obj_set_y(my_slider_0, 50);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

