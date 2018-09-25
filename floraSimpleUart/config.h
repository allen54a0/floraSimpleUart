//這是修改過的版本，用來測試EPS32 是否可以正確的讀到小米花花草草的數值------------------------------
#define FLORA_ADDR "C4:7C:8D:66:6B:C9"      // 把 BLE MAC 放在這裡....  


#define SLEEP_DURATION 20ll  // 系統進入睡覺的秒數   2011 = 20(s) +LL，(睡眠20 秒，要睡更久就在這裡改變，5分鐘就是 5 *60 = 300ll) 後面那兩個"ll" 是 "LL" 的小寫
#define SLEEP_WAIT 15        // 系統在進入睡眠之前的秒數， 這個秒數要足夠讓ESP32 可以讀到花花草草感測器的值加上 從LoRa 把資料打出去的時間
                             // Unit : Sec   // time until esp32 is put into deep sleep mode. must be sufficient to connect to xiaomi flora device & push measurement data to Lora

#define BATTERY_INTERVAL 1   // 每幾次醒來後，讀一次電壓值

