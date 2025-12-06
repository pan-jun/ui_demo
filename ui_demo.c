/**
 * @file ui_demo.c
 */

/*********************
 *      INCLUDES
 *********************/

#include "ui_demo.h"

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 *  STATIC PROTOTYPES
 **********************/

/**********************
 *  STATIC VARIABLES
 **********************/

/**********************
 *      MACROS
 **********************/

/**********************
 *   GLOBAL FUNCTIONS
 **********************/

void ui_demo_init(const char * asset_path)
{
    ui_demo_init_gen(asset_path);

    /* Add your own custom code here if needed */
}

/**********************
 *   STATIC FUNCTIONS
 **********************/
void my_callback_1(lv_event_t * e)
{
    LV_UNUSED(e);
    static int i = 0;

    LV_LOG("my_callback_1 %d was called\n", i);
    lv_subject_snprintf(&test_text, "xxx %d", i);

    i++;
}

void my_callback_2(lv_event_t * e)
{
    LV_UNUSED(e);
    LV_LOG("my_callback_2  %d was called\n", lv_subject_get_int(&test_int));
    lv_subject_snprintf(&test_int_string, "%d", lv_subject_get_int(&test_int));
}
