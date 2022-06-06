# RC522-Arduino-Aime-Reader
RC522Based Arduino Aime Card Reader  

# Info
This repository is based on OSSLibraries / Arduino_MFRC522v2 (https://github.com/OSSLibraries/Arduino_MFRC522v2)  
Codes are partially edited to fit the reading process.  
Huge Thanks to library contributors :)  
The codes are poorly optimized due to time issues (Sorry for that)  


# How to USE
The codes are tested with Arduino UNO and a common seen RC522 moudule.  
See PinOUT in https://github.com/OSSLibraries/Arduino_MFRC522v2/blob/master/README.rst for hardware connection.  


In case using Arduino UNO:  
RST      -- 9  
SPI SS   -- 10  
SPI MOSI -- 11  
SPI MISO -- 12  
SPI CLK  -- 13  

After download, open serial monitor and swipe an aime card.  
The card number are expected to printed via serial.  
![image](https://user-images.githubusercontent.com/34715205/172122028-65dfd9de-9679-463a-846b-6d95f88cd0b8.png)
