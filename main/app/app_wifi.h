/*
 * SPDX-FileCopyrightText: 2023 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: Unlicense OR CC0-1.0
 */

#pragma once
#include <esp_err.h>
#include "esp_wifi.h"

#ifdef __cplusplus
extern "C" {
#endif

#define DEFAULT_SCAN_LIST_SIZE  20

typedef struct {
    bool need_hint;
    bool sr_enable;
    bool demo_gui;
    //sr_language_t sr_lang;
    //uint8_t volume;         /**< 0-100.*/
    //uint8_t standby_time;   /**< 0-3.*/
    //uint8_t brightness;     /**< 0-100.*/

    char ssid[32];      /**< SSID of target AP. */
    char password[64];  /**< Password of target AP. */
    uint8_t ssid_len;      /**< SSID of target AP. */
    uint8_t password_len;  /**< Password of target AP. */
} sys_param_t;

typedef enum {
    WIFI_SCAN_IDLE,
    WIFI_SCAN_BUSY,
    WIFI_SCAN_RENEW,
    WIFI_SCAN_UPDATE,
} wifi_scan_status_t;

typedef struct {
    wifi_scan_status_t scan_done;
    wifi_ap_record_t ap_info[DEFAULT_SCAN_LIST_SIZE];
    uint16_t ap_count;
    SemaphoreHandle_t wifi_mux;
} scan_info_t;

typedef enum {
    NET_EVENT_NONE = 0,
    NET_EVENT_RECONNECT,
    NET_EVENT_SCAN,
    NET_EVENT_NTP,
    NET_EVENT_WEATHER,
    NET_EVENT_POWERON_SCAN,
    NET_EVENT_MAX,
} net_event_t;

typedef enum {
    WIFI_STATUS_CONNECTING,
    WIFI_STATUS_CONNECTED_OK,
    WIFI_STATUS_CONNECTED_FAILED,
} WiFi_Connect_Status;

extern scan_info_t scan_info_result;
extern bool wifi_connected;

esp_err_t send_network_event(net_event_t event);
WiFi_Connect_Status wifi_connected_already(void);
esp_err_t app_wifi_get_wifi_ssid(char *ssid, size_t len);

void app_network_start(void);

bool app_wifi_lock(uint32_t timeout_ms);
void app_wifi_unlock(void);
void app_wifi_state_set(wifi_scan_status_t status);

#ifdef __cplusplus
}
#endif
