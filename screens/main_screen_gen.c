/**
 * @file main_screen_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "main_screen_gen.h"
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

lv_obj_t * main_screen_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");

    static lv_style_t style_main;

    static bool style_inited = false;

    if (!style_inited) {
        lv_style_init(&style_main);
        lv_style_set_bg_color(&style_main, SCREEN_BG_COLOR);

        style_inited = true;
    }

    if (main_screen == NULL) main_screen = lv_obj_create(NULL);
    lv_obj_t * lv_obj_0 = main_screen;
    lv_obj_set_name_static(lv_obj_0, "main_screen_#");

    lv_obj_t * lv_obj_1 = lv_obj_create(lv_obj_0);
    lv_obj_set_align(lv_obj_1, LV_ALIGN_CENTER);
    lv_obj_set_width(lv_obj_1, lv_pct(100));
    lv_obj_set_height(lv_obj_1, lv_pct(100));
    lv_obj_set_flex_flow(lv_obj_1, LV_FLEX_FLOW_COLUMN);
    lv_obj_t * my_button_0 = my_button_create(lv_obj_1, "ToAbout");
    lv_obj_add_screen_create_event(my_button_0, LV_EVENT_CLICKED, about_screen_create, LV_SCREEN_LOAD_ANIM_FADE_IN, 300, 0);
    
    lv_obj_t * my_group_button_0 = my_group_button_create(lv_obj_1, "r1", "g1", "b1");
    
    lv_obj_t * my_group_button_1 = my_group_button_create(lv_obj_1, "r2", "g2", "b2");
    
    lv_obj_t * my_group_button_2 = my_group_button_create(lv_obj_1, "r3", "g3", "b3");

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

