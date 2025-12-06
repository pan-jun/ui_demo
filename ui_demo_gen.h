/**
 * @file ui_demo_gen.h
 */

#ifndef UI_DEMO_GEN_H
#define UI_DEMO_GEN_H

#ifndef UI_SUBJECT_STRING_LENGTH
#define UI_SUBJECT_STRING_LENGTH 256
#endif

#ifdef __cplusplus
extern "C" {
#endif

/*********************
 *      INCLUDES
 *********************/

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
    #include "lvgl.h"
#else
    #include "lvgl/lvgl.h"
#endif

/*********************
 *      DEFINES
 *********************/

#define SCREEN_BG_COLOR lv_color_hex(0xFFFFFF)

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 * GLOBAL VARIABLES
 **********************/

/*-------------------
 * Permanent screens
 *------------------*/

extern lv_obj_t * about_screen;
extern lv_obj_t * main_screen;

/*----------------
 * Global styles
 *----------------*/

extern lv_style_t red;
extern lv_style_t blue;
extern lv_style_t green;

/*----------------
 * Fonts
 *----------------*/

/*----------------
 * Images
 *----------------*/

/*----------------
 * Subjects
 *----------------*/

extern lv_subject_t test_text;
extern lv_subject_t test_int;
extern lv_subject_t test_int_string;
extern lv_subject_t slider_value;

/**********************
 * GLOBAL PROTOTYPES
 **********************/

/*----------------
 * Event Callbacks
 *----------------*/

void my_callback_1(lv_event_t * e);
void my_callback_2(lv_event_t * e);

/**
 * Initialize the component library
 */

void ui_demo_init_gen(const char * asset_path);

/**********************
 *      MACROS
 **********************/

/**********************
 *   POST INCLUDES
 **********************/

/*Include all the widget and components of this library*/
#include "components/my_button_gen.h"
#include "components/my_group_button_gen.h"
#include "components/my_slider_gen.h"
#include "screens/about_screen_gen.h"
#include "screens/main_screen_gen.h"

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif /*UI_DEMO_GEN_H*/