SET(SOURCES components/ui_comp_panel2.c
    components/ui_comp.c
    screens/ui_home.c
    screens/ui_muyuplay.c
    screens/ui_shaiziplay.c
    ui.c
    components/ui_comp_hook.c
    ui_helpers.c
    ui_events.c
    images/ui_img_clody_png.c
    images/ui_img_wifi_png.c
    images/ui_img_battery_png.c
    images/ui_img_muyu_png.c
    images/ui_img_wifi_disconnection_png.c
    fonts/ui_font_ComfortaaBold75.c
    fonts/ui_font_ComfortaaLight70.c
    fonts/ui_font_OPPOSansH18.c
    fonts/ui_font_OPPOSansH25.c
    fonts/ui_font_OPPOSansL70.c)

add_library(ui ${SOURCES})
