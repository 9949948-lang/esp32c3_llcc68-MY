#ifndef VARIANT_LLCC68_SUPERMINI_H
#define VARIANT_LLCC68_SUPERMINI_H

// Гарантируем, что другие типы радиочипов отключены
#ifdef USE_SX1262
  #undef USE_SX1262
#endif
#ifdef USE_SX1268
  #undef USE_SX1268
#endif

// Тип радиочипа: строго LLCC68
#ifndef USE_LLCC68
  #define USE_LLCC68
#endif

// Аппаратная шина SPI LoRa (Строго по вашей текущей распайке в руках)
#define SX126X_SCK     8   // Пин [ Л ] 4 (GPIO8) — Зеленый
#define SX126X_MISO    9   // Пин [ Л ] 5 (GPIO9) — Бело-синий
#define SX126X_MOSI    1   // Пин [ П ] 7 (GPIO1) — Бело-оранжевый
#define SX126X_CS      0   // Пин [ П ] 8 (GPIO0) — Бело-коричневый

#define LORA_SCK  SX126X_SCK
#define LORA_MOSI SX126X_MOSI
#define LORA_MISO SX126X_MISO
#define LORA_CS   SX126X_CS

#define SX126X_TXEN RADIOLIB_NC
#define SX126X_RXEN RADIOLIB_NC

// Сигналы управления радиочипом LoRa (Строго по вашей текущей распайке)
#define SX126X_BUSY  2   // Пин [ П ] 5 (GPIO2) — Бело-коричневый
#define SX126X_RESET 3   // Пин [ Л ] 8 (GPIO3) — Коричневый
#define SX126X_DIO1  10  // Пин [ Л ] 7 (GPIO10) — Бело-зеленый
#define LORA_DIO1    SX126X_DIO1

#define SX126X_DIO2_AS_RF_SWITCH     
#define SX126X_DIO3_TCXO_VOLTAGE 1.8 
#define SX126X_MAX_POWER 22

// Конфигурация SPI интерфейсов для ESP32-C3
#define SPI_INTERFACES_COUNT 2
#define SPI_SCK    SX126X_SCK
#define SPI_MISO   SX126X_MISO
#define SPI_MOSI   SX126X_MOSI
#define SPI_CS     SX126X_CS

// Базовые параметры ноды (Экран и GPS отсутствуют)
#define HAS_RADIO 1      
#define NO_OTA    1      
#define HAS_SCREEN   0
#define USE_GPS      0   
#define BUTTON_PIN 20

#endif // VARIANT_LLCC68_SUPERMINI_H
