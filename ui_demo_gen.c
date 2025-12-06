/**
 * @file ui_demo_gen.c
 */

/*********************
 *      INCLUDES
 *********************/

#include "ui_demo_gen.h"

#if LV_USE_XML
#endif /* LV_USE_XML */

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

/*----------------
 * Translations
 *----------------*/

/**********************
 *  GLOBAL VARIABLES
 **********************/

/*--------------------
 *  Permanent screens
 *-------------------*/

lv_obj_t * about_screen = NULL;
lv_obj_t * main_screen = NULL;

/*----------------
 * Global styles
 *----------------*/

lv_style_t red;
lv_style_t blue;
lv_style_t green;

/*----------------
 * Fonts
 *----------------*/

/*----------------
 * Images
 *----------------*/

/*----------------
 * Subjects
 *----------------*/

lv_subject_t test_text;
lv_subject_t test_int;
lv_subject_t test_int_string;
lv_subject_t slider_value;

/**********************
 *      MACROS
 **********************/

/**********************
 *   GLOBAL FUNCTIONS
 **********************/

void ui_demo_init_gen(const char * asset_path)
{
    char buf[256];

    /*----------------
     * Global styles
     *----------------*/

    static bool style_inited = false;

    if (!style_inited) {
        lv_style_init(&red);
        lv_style_set_border_width(&red, 2);
        lv_style_set_border_color(&red, lv_color_hex(0xFF0000));

        lv_style_init(&blue);
        lv_style_set_border_width(&blue, 2);
        lv_style_set_border_color(&blue, lv_color_hex(0x0000FF));

        lv_style_init(&green);
        lv_style_set_border_width(&green, 2);
        lv_style_set_border_color(&green, lv_color_hex(0x00FF00));

        style_inited = true;
    }

    /*----------------
     * Fonts
     *----------------*/


    /*----------------
     * Images
     *----------------*/
    /*----------------
     * Subjects
     *----------------*/
    static char test_text_buf[UI_SUBJECT_STRING_LENGTH];
    static char test_text_prev_buf[UI_SUBJECT_STRING_LENGTH];
    lv_subject_init_string(&test_text,
                           test_text_buf,
                           test_text_prev_buf,
                           UI_SUBJECT_STRING_LENGTH,
                           ""
                          );
    lv_subject_init_int(&test_int, 0);
    lv_subject_set_min_value_int(&test_int, 0);
    lv_subject_set_max_value_int(&test_int, 10);
    static char test_int_string_buf[UI_SUBJECT_STRING_LENGTH];
    static char test_int_string_prev_buf[UI_SUBJECT_STRING_LENGTH];
    lv_subject_init_string(&test_int_string,
                           test_int_string_buf,
                           test_int_string_prev_buf,
                           UI_SUBJECT_STRING_LENGTH,
                           ""
                          );
    lv_subject_init_int(&slider_value, 0);

    /*----------------
     * Translations
     *----------------*/

#if LV_USE_XML
    /* Register widgets */

    /* Register fonts */

    /* Register subjects */
    lv_xml_register_subject(NULL, "test_text", &test_text);
    lv_xml_register_subject(NULL, "test_int", &test_int);
    lv_xml_register_subject(NULL, "test_int_string", &test_int_string);
    lv_xml_register_subject(NULL, "slider_value", &slider_value);

    /* Register callbacks */
    lv_xml_register_event_cb(NULL, "my_callback_1", my_callback_1);
    lv_xml_register_event_cb(NULL, "my_callback_2", my_callback_2);
#endif

    /* Register all the global assets so that they won't be created again when globals.xml is parsed.
     * While running in the editor skip this step to update the preview when the XML changes */
#if LV_USE_XML && !defined(LV_EDITOR_PREVIEW)
    /* Register images */
#endif

#if LV_USE_XML == 0
    /*--------------------
     *  Permanent screens
     *-------------------*/
    /* If XML is enabled it's assumed that the permanent screens are created
     * manaully from XML using lv_xml_create() */
    /* To allow screens to reference each other, create them all before calling the sceen create functions */
    about_screen = lv_obj_create(NULL);
    main_screen = lv_obj_create(NULL);

    about_screen_create();
    main_screen_create();
#endif
}

/* Callbacks */
#if defined(LV_EDITOR_PREVIEW)
void __attribute__((weak)) my_callback_1(lv_event_t * e)
{
    LV_UNUSED(e);
    LV_LOG("my_callback_1 was called\n");
}
void __attribute__((weak)) my_callback_2(lv_event_t * e)
{
    LV_UNUSED(e);
    LV_LOG("my_callback_2 was called\n");
}
#endif

/**********************
 *   STATIC FUNCTIONS
 **********************/