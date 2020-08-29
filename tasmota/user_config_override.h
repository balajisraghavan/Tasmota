//build via https://tasmota.github.io/docs/Gitpod/
//create & paste below into /tasmota/user_config_override.h & ** press ctrl-s to save each file **
//enable override in main file (tasmota/my_user-config.h - uncomment #define USE_CONFIG_OVERRIDE)
//platformio run -e tasmota                  //dont run tasmota-sensors, enables too many i2c devices, address & drivers conflict on startup, not clean
//download .pioenvs/tasmota/firmware.bin
//lots of conflicts for i2c sensor addresses. easier to just include ones needed and build everytime


#ifndef USE_DISPLAY
#define USE_DISPLAY
//#define USE_DISPLAY_SSD1306
//#define USE_DISPLAY_SH1106
//#define SHOW_SPLASH
//#define USE_AWATCH	
//#define USE_GRAPH
#endif
#define USE_APDS9960
    #define USE_APDS9960_GESTURE                   // Enable APDS9960 Gesture feature (+2k code)
//    #define USE_APDS9960_PROXIMITY                 // Enable APDS9960 Proximity feature (>50 code)
//    #define USE_APDS9960_COLOR                     // Enable APDS9960 Color feature (+0.8k code)
    #define USE_APDS9960_STARTMODE  0              // Default to enable Gesture mode

#define USE_PAJ7620                            // [I2cDriver34] Enable PAJ7620 gesture sensor (I2C address 0x73) (+2.5k code)
#define USE_MLX90614
#define USE_VL53L0X                            // [I2cDriver31] Enable VL53L0x time of flight sensor (I2C address 0x29) (+4k code)
#define USE_SR04
#define USE_BME680 
#define USE_AS3935

#define  USE_EXPRESSION
#define  SUPPORT_IF_STATEMENT
#define DEBUG_TASMOTA_SENSOR  
#define USE_RULES_COMPRESSION
#define SUPPORT_IF_STATEMENT

//conflicts with lightning sensor i2c address
#ifdef USE_CHIRP
#undef  USE_CHIRP
#endif

//conflicts with lightning sensor i2c address
#ifdef USE_WEMOS_MOTOR_V1
#undef  USE_WEMOS_MOTOR_V1
#endif

//conflicts with adps gesture sensor i2c address
#ifdef USE_TSL2561
#undef USE_TSL2561


#endif 
