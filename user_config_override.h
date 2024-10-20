/*
  user_config_override.h - user configuration overrides my_user_config.h for Tasmota

  Copyright (C) 2021  Theo Arends

  This program is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef _USER_CONFIG_OVERRIDE_H_
#define _USER_CONFIG_OVERRIDE_H_

/*****************************************************************************************************\
 * USAGE:
 *   To modify the stock configuration without changing the my_user_config.h file:
 *   (1) copy this file to "user_config_override.h" (It will be ignored by Git)
 *   (2) define your own settings below
 *
 ******************************************************************************************************
 * ATTENTION:
 *   - Changes to SECTION1 PARAMETER defines will only override flash settings if you change define CFG_HOLDER.
 *   - Expect compiler warnings when no ifdef/undef/endif sequence is used.
 *   - You still need to update my_user_config.h for major define USE_MQTT_TLS.
 *   - All parameters can be persistent changed online using commands via MQTT, WebConsole or Serial.
\*****************************************************************************************************/

/*
Examples :

// -- Master parameter control --------------------
#undef  CFG_HOLDER
#define CFG_HOLDER        4617                   // [Reset 1] Change this value to load SECTION1 configuration parameters to flash

// -- Setup your own Wifi settings  ---------------
#undef  STA_SSID1
#define STA_SSID1         "YourSSID"             // [Ssid1] Wifi SSID

#undef  STA_PASS1
#define STA_PASS1         "YourWifiPassword"     // [Password1] Wifi password

// -- Setup your own MQTT settings  ---------------
#undef  MQTT_HOST
#define MQTT_HOST         "your-mqtt-server.com" // [MqttHost]

#undef  MQTT_PORT
#define MQTT_PORT         1883                   // [MqttPort] MQTT port (10123 on CloudMQTT)

#undef  MQTT_USER
#define MQTT_USER         "YourMqttUser"         // [MqttUser] Optional user

#undef  MQTT_PASS
#define MQTT_PASS         "YourMqttPass"         // [MqttPassword] Optional password

// You might even pass some parameters from the command line ----------------------------
// Ie:  export PLATFORMIO_BUILD_FLAGS='-DUSE_CONFIG_OVERRIDE -DMY_IP="192.168.1.99" -DMY_GW="192.168.1.1" -DMY_DNS="192.168.1.1"'

#ifdef MY_IP
#undef  WIFI_IP_ADDRESS
#define WIFI_IP_ADDRESS     MY_IP                // Set to 0.0.0.0 for using DHCP or enter a static IP address
#endif

#ifdef MY_GW
#undef  WIFI_GATEWAY
#define WIFI_GATEWAY        MY_GW                // if not using DHCP set Gateway IP address
#endif

#ifdef MY_DNS
#undef  WIFI_DNS
#define WIFI_DNS            MY_DNS               // If not using DHCP set DNS IP address (might be equal to WIFI_GATEWAY)
#endif

#ifdef MY_DNS2
#undef  WIFI_DNS2
#define WIFI_DNS2           MY_DNS2              // If not using DHCP set DNS IP address (might be equal to WIFI_GATEWAY)
#endif

// !!! Remember that your changes GOES AT THE BOTTOM OF THIS FILE right before the last #endif !!!
*/
#ifdef CODE_IMAGE_STR
  #undef CODE_IMAGE_STR
#endif
#define CODE_IMAGE_STR "tasmota-by-ferenc"



#ifdef USE_MHZ19
  #undef USE_MHZ19
#endif

#ifdef USE_SENSEAIR
  #undef USE_SENSEAIR
#endif

#ifdef USE_PMS5003
  #undef USE_PMS5003
#endif

#ifdef USE_MGS
  #undef USE_MGS
#endif

#ifdef USE_NOVA_SDS
  #undef USE_NOVA_SDS
#endif

#ifdef USE_SGP30
  #undef USE_SGP30
#endif

#ifdef USE_CCS811
  #undef USE_CCS811
#endif

#ifdef USE_SCD30
  #undef USE_SCD30
#endif

#ifdef USE_SPS30
  #undef USE_SPS30
#endif

#ifdef USE_SGP4X
  #undef USE_SGP4X
#endif

#ifdef USE_SEN5X
  #undef USE_SEN5X
#endif

#ifdef USE_HPMA
  #undef USE_HPMA
#endif

#ifdef USE_IAQ
  #undef USE_IAQ
#endif

#ifdef USE_T67XX
  #undef USE_T67XX
#endif

#ifdef USE_VINDRIKTNING
  #undef USE_VINDRIKTNING
#endif

#ifdef USE_SCD40
  #undef USE_SCD40
#endif

#ifdef USE_HM330X
  #undef USE_HM330X
#endif

#ifdef USE_EMULATION
  #undef USE_EMULATION
#endif

#ifdef USE_EMULATION_HUE
  #undef USE_EMULATION_HUE
#endif

#ifdef USE_EMULATION_WEMO
  #undef USE_EMULATION_WEMO
#endif

#ifdef USE_TASMOTA_CLIENT
  #undef USE_TASMOTA_CLIENT
#endif

#ifdef USE_DISPLAY
  #undef USE_DISPLAY
#endif

#ifdef USE_UNIVERSAL_DISPLAY
  #undef USE_UNIVERSAL_DISPLAY
#endif

#ifdef USE_UNIVERSAL_TOUCH
  #undef USE_UNIVERSAL_TOUCH
#endif

#ifdef USE_DISPLAY_TM1637
  #undef USE_DISPLAY_TM1637
#endif

#ifdef USE_DISPLAY_MAX7219
  #undef USE_DISPLAY_MAX7219
#endif

#ifdef USE_DISPLAY_MODES1TO5
  #undef USE_DISPLAY_MODES1TO5
#endif

#ifdef USE_DISPLAY_LCD
  #undef USE_DISPLAY_LCD
#endif

#ifdef USE_DISPLAY_MATRIX
  #undef USE_DISPLAY_MATRIX
#endif

#ifdef USE_DISPLAY_TM1650
  #undef USE_DISPLAY_TM1650
#endif

#ifdef USE_DISPLAY_EPAPER_29
  #undef USE_DISPLAY_EPAPER_29
#endif

#ifdef USE_DISPLAY_EPAPER_42
  #undef USE_DISPLAY_EPAPER_42
#endif

#ifdef USE_DISPLAY_RA8876
  #undef USE_DISPLAY_RA8876
#endif

#ifdef USE_DISPLAY_SEVENSEG
  #undef USE_DISPLAY_SEVENSEG
#endif

#ifdef USE_ADC_VCC
  #undef USE_ADC_VCC
#endif

#ifdef USE_DOMOTICZ
  #undef USE_DOMOTICZ
#endif

#ifdef USE_ENERGY_SENSOR
  #undef USE_ENERGY_SENSOR
#endif

#ifdef USE_HLW8012
  #undef USE_HLW8012
#endif

#ifdef USE_CSE7766
  #undef USE_CSE7766
#endif

#ifdef USE_PZEM004T
  #undef USE_PZEM004T
#endif

#ifdef USE_MCP39F501
  #undef USE_MCP39F501
#endif

#ifdef USE_PZEM_AC
  #undef USE_PZEM_AC
#endif

#ifdef USE_PZEM_DC
  #undef USE_PZEM_DC
#endif

#ifdef USE_ADE7953
  #undef USE_ADE7953
#endif

#ifdef USE_SDM120
  #undef USE_SDM120
#endif

#ifdef USE_DDS2382
  #undef USE_DDS2382
#endif

#ifdef USE_SDM630
  #undef USE_SDM630
#endif

#ifdef USE_DDSU666
  #undef USE_DDSU666
#endif

#ifdef USE_SOLAX_X1
  #undef USE_SOLAX_X1
#endif

#ifdef USE_LE01MR
  #undef USE_LE01MR
#endif

#ifdef USE_BL09XX
  #undef USE_BL09XX
#endif

#ifdef USE_TELEINFO
  #undef USE_TELEINFO
#endif

#ifdef USE_IEM3000
  #undef USE_IEM3000
#endif

#ifdef USE_WE517
  #undef USE_WE517
#endif

#ifdef USE_ENERGY_DUMMY
  #undef USE_ENERGY_DUMMY
#endif

#ifdef USE_SONOFF_SC
  #undef USE_SONOFF_SC
#endif

#ifdef USE_DS18x20
  #undef USE_DS18x20
#endif

#ifdef USE_DHT
  #undef USE_DHT
#endif

#ifdef USE_SHT
  #undef USE_SHT
#endif

#ifdef USE_HTU
  #undef USE_HTU
#endif

#ifdef USE_BMP
  #undef USE_BMP
#endif

#ifdef USE_SHT3X
  #undef USE_SHT3X
#endif

#ifdef USE_LM75AD
  #undef USE_LM75AD
#endif

#ifdef USE_APDS9960
  #undef USE_APDS9960
#endif

#ifdef USE_AZ7798
  #undef USE_AZ7798
#endif

#ifdef USE_MAX31855
  #undef USE_MAX31855
#endif

#ifdef USE_MLX90614
  #undef USE_MLX90614
#endif

#ifdef USE_MAX31865
  #undef USE_MAX31865
#endif

#ifdef USE_HIH6
  #undef USE_HIH6
#endif

#ifdef USE_DHT12
  #undef USE_DHT12
#endif

#ifdef USE_DS1624
  #undef USE_DS1624
#endif

#ifdef USE_AHT1x
  #undef USE_AHT1x
#endif

#ifdef USE_HDC1080
  #undef USE_HDC1080
#endif

#ifdef USE_MCP9808
  #undef USE_MCP9808
#endif

#ifdef USE_HP303B
  #undef USE_HP303B
#endif

#ifdef USE_LMT01
  #undef USE_LMT01
#endif

#ifdef USE_AM2320
  #undef USE_AM2320
#endif

#ifdef USE_BME68X
  #undef USE_BME68X
#endif

#ifdef USE_BH1750
  #undef USE_BH1750
#endif

#ifdef USE_VEML6070
  #undef USE_VEML6070
#endif

#ifdef USE_TSL2561
  #undef USE_TSL2561
#endif

#ifdef USE_SI1145
  #undef USE_SI1145
#endif

#ifdef USE_VEML6075
  #undef USE_VEML6075
#endif

#ifdef USE_MAX44009
  #undef USE_MAX44009
#endif

#ifdef USE_TSL2591
  #undef USE_TSL2591
#endif

#ifdef USE_AS3935
  #undef USE_AS3935
#endif

#ifdef USE_VEML7700
  #undef USE_VEML7700
#endif

#ifdef USE_HOME_ASSISTANT
  #undef USE_HOME_ASSISTANT
#endif

#ifdef USE_MCP230xx
  #undef USE_MCP230xx
#endif

#ifdef USE_MCP230xx_OUTPUT
  #undef USE_MCP230xx_OUTPUT
#endif

#ifdef USE_MCP230xx_DISPLAYOUTPUT
  #undef USE_MCP230xx_DISPLAYOUTPUT
#endif

#ifdef USE_KNX
  #undef USE_KNX
#endif

#ifdef USE_IR_REMOTE
  #undef USE_IR_REMOTE
#endif

#ifdef USE_IR_REMOTE_FULL
  #undef USE_IR_REMOTE_FULL
#endif

#ifdef USE_DISCOVERY
  #undef USE_DISCOVERY
#endif

#ifdef USE_MQTT_TLS
  #undef USE_MQTT_TLS
#endif

#ifdef USE_RC_SWITCH
  #undef USE_RC_SWITCH
#endif

#ifdef USE_RULES
  #undef USE_RULES
#endif
#define USE_RULES

#ifdef USE_EXPRESSION
  #undef USE_EXPRESSION
#endif
#define USE_EXPRESSION

#ifdef SUPPORT_IF_STATEMENT
  #undef SUPPORT_IF_STATEMENT
#endif
#define SUPPORT_IF_STATEMENT

#ifdef USE_SCRIPT
  #undef USE_SCRIPT
#endif

#ifdef USE_TIMERS
  #undef USE_TIMERS
#endif
#define USE_TIMERS

#ifdef USE_TUYA_MCU
  #undef USE_TUYA_MCU
#endif

#ifdef USE_SR04
  #undef USE_SR04
#endif

#ifdef USE_VL53L0X
  #undef USE_VL53L0X
#endif

#ifdef USE_HRXL
  #undef USE_HRXL
#endif

#ifdef USE_DYP
  #undef USE_DYP
#endif

#ifdef USE_VL53L1X
  #undef USE_VL53L1X
#endif

#ifdef USE_WEBSERVER
  #undef USE_WEBSERVER
#endif
#define USE_WEBSERVER

#ifdef USE_WS2812
  #undef USE_WS2812
#endif

#ifdef USE_UFILESYS
  #undef USE_UFILESYS
#endif

#ifdef USE_SDCARD
  #undef USE_SDCARD
#endif

#ifdef GUI_TRASH_FILE
  #undef GUI_TRASH_FILE
#endif

#ifdef GUI_EDIT_FILE
  #undef GUI_EDIT_FILE
#endif

#ifdef USE_SHUTTER
  #undef USE_SHUTTER
#endif

#ifdef USE_MODBUS_BRIDGE
  #undef USE_MODBUS_BRIDGE
#endif

#ifdef USE_MODBUS_BRIDGE_TCP
  #undef USE_MODBUS_BRIDGE_TCP
#endif

#ifdef USE_I2C
  #undef USE_I2C
#endif

#ifdef USE_SPI
  #undef USE_SPI
#endif


























#ifdef MY_LANGUAGE
  #undef MY_LANGUAGE
#endif
#define MY_LANGUAGE	hu_HU


#ifdef PROJECT
  #undef PROJECT
#endif
#define PROJECT "Macska Etető"

#ifdef WIFI_CONFIG_TOOL
  #undef WIFI_CONFIG_TOOL
#endif 
#define WIFI_CONFIG_TOOL 2

#ifdef DEVICE_NAME
  #undef DEVICE_NAME
#endif
#define DEVICE_NAME "Eteto"

#ifdef USER_TEMPLATE
  #undef USER_TEMPLATE
#endif
#define USER_TEMPLATE "{\"NAME\":\"Eteto-NodeMcu\",\"GPIO\":[1,1,1,1,65,225,1,1,1,1,1,224,1,1],\"FLAG\":0,\"BASE\":18}"

#ifdef WIFI_DEFAULT_HOSTNAME
  #undef WIFI_DEFAULT_HOSTNAME
#endif
#define WIFI_DEFAULT_HOSTNAME  "%04d"         // [Hostname] Expands to <MQTT_TOPIC>-<last 4 decimal chars of MAC address>


#define USER_BACKLOG "Module 0; Timezone 99; TimeStd 0,0,10,1,3,60; TimeDst 0,0,3,1,2,120; Hostname macska-eteto; WebButton1 LED; WebButton2 Kaja; Power1 on; SetOption3 0"



#endif  // _USER_CONFIG_OVERRIDE_H_
