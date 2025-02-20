// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.2
// LVGL version: 8.3.11
// Project name: SquareLine_Project

#include "../ui.h"
#include "../app/app_wifi.h"


// COMPONENT Panel2

lv_obj_t * ui_Panel2_create(lv_obj_t * comp_parent)
{

    lv_obj_t * cui_Panel2;
    cui_Panel2 = lv_obj_create(comp_parent);
    lv_obj_set_width(cui_Panel2, 240);
    lv_obj_set_height(cui_Panel2, 20);
    lv_obj_set_align(cui_Panel2, LV_ALIGN_TOP_MID);
    lv_obj_clear_flag(cui_Panel2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(cui_Panel2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(cui_Panel2, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(cui_Panel2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(cui_Panel2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(cui_Panel2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(cui_Panel2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(cui_Panel2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(cui_Panel2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_t * cui_wifistate;
    cui_wifistate = lv_img_create(cui_Panel2);
    //printf("wifi_connected:%d",wifi_connected);
    if(1){
        lv_img_set_src(cui_wifistate, &ui_img_wifi_png);
    }else     lv_img_set_src(cui_wifistate, &ui_img_wifi_disconnection_png);
    lv_obj_set_width(cui_wifistate, LV_SIZE_CONTENT);   /// 10
    lv_obj_set_height(cui_wifistate, LV_SIZE_CONTENT);    /// 10
    lv_obj_set_x(cui_wifistate, 55);
    lv_obj_set_y(cui_wifistate, 0);
    lv_obj_set_align(cui_wifistate, LV_ALIGN_CENTER);
    lv_obj_add_flag(cui_wifistate, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(cui_wifistate, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_img_set_zoom(cui_wifistate, 400);
    lv_obj_set_style_img_recolor(cui_wifistate, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_img_recolor_opa(cui_wifistate, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_t * cui_powerstate;
    cui_powerstate = lv_slider_create(cui_Panel2);
    lv_slider_set_value(cui_powerstate, 70, LV_ANIM_OFF);
    if(lv_slider_get_mode(cui_powerstate) == LV_SLIDER_MODE_RANGE) lv_slider_set_left_value(cui_powerstate, 0, LV_ANIM_OFF);
    lv_obj_set_width(cui_powerstate, 15);
    lv_obj_set_height(cui_powerstate, 4);
    lv_obj_set_x(cui_powerstate, -8);
    lv_obj_set_y(cui_powerstate, 8);
    lv_obj_set_align(cui_powerstate, LV_ALIGN_TOP_RIGHT);
    lv_obj_set_style_radius(cui_powerstate, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(cui_powerstate, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(cui_powerstate, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_opa(cui_powerstate, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(cui_powerstate, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(cui_powerstate, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(cui_powerstate, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(cui_powerstate, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(cui_powerstate, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_radius(cui_powerstate, 0, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(cui_powerstate, lv_color_hex(0xFFFFFF), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(cui_powerstate, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(cui_powerstate, lv_color_hex(0xFFFFFF), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(cui_powerstate, 0, LV_PART_KNOB | LV_STATE_DEFAULT);

    lv_obj_t * cui_batterybor;
    cui_batterybor = lv_img_create(cui_Panel2);
    lv_img_set_src(cui_batterybor, &ui_img_battery_png);
    lv_obj_set_width(cui_batterybor, LV_SIZE_CONTENT);   /// 20
    lv_obj_set_height(cui_batterybor, LV_SIZE_CONTENT);    /// 20
    lv_obj_set_x(cui_batterybor, 106);
    lv_obj_set_y(cui_batterybor, 0);
    lv_obj_set_align(cui_batterybor, LV_ALIGN_CENTER);
    lv_obj_add_flag(cui_batterybor, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(cui_batterybor, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_img_set_zoom(cui_batterybor, 400);
    lv_obj_set_style_img_recolor(cui_batterybor, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_img_recolor_opa(cui_batterybor, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_t * cui_timestate;
    cui_timestate = lv_label_create(cui_Panel2);
    lv_obj_set_width(cui_timestate, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(cui_timestate, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(cui_timestate, -95);
    lv_obj_set_y(cui_timestate, 0);
    lv_obj_set_align(cui_timestate, LV_ALIGN_CENTER);
    lv_label_set_text(cui_timestate, "23:59");
    lv_obj_set_style_text_color(cui_timestate, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(cui_timestate, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(cui_timestate, &lv_font_montserrat_12, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_t * cui_batterytxt;
    cui_batterytxt = lv_label_create(cui_Panel2);
    lv_obj_set_width(cui_batterytxt, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(cui_batterytxt, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(cui_batterytxt, 80);
    lv_obj_set_y(cui_batterytxt, 0);
    lv_obj_set_align(cui_batterytxt, LV_ALIGN_CENTER);
    lv_label_set_text(cui_batterytxt, "75%");
    lv_obj_set_style_text_color(cui_batterytxt, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(cui_batterytxt, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(cui_batterytxt, &lv_font_montserrat_10, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_t ** children = lv_mem_alloc(sizeof(lv_obj_t *) * _UI_COMP_PANEL2_NUM);
    children[UI_COMP_PANEL2_PANEL2] = cui_Panel2;
    children[UI_COMP_PANEL2_WIFISTATE] = cui_wifistate;
    children[UI_COMP_PANEL2_POWERSTATE] = cui_powerstate;
    children[UI_COMP_PANEL2_BATTERYBOR] = cui_batterybor;
    children[UI_COMP_PANEL2_TIMESTATE] = cui_timestate;
    children[UI_COMP_PANEL2_BATTERYBORDER] = cui_batterytxt;
    lv_obj_add_event_cb(cui_Panel2, get_component_child_event_cb, LV_EVENT_GET_COMP_CHILD, children);
    lv_obj_add_event_cb(cui_Panel2, del_component_child_event_cb, LV_EVENT_DELETE, children);
    ui_comp_Panel2_create_hook(cui_Panel2);
    return cui_Panel2;
}

