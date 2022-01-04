//  ESPxxTime Edited by 3tawi
//  ESPxxTime Library: https://github.com/3tawi/ESPxxTime
//  Lien vidéo: https://youtu.be/_o3kPfuHsdk

#include <ESPxxTime.h>

ESPxxTime rtc;

void setup() {
  Serial.begin(115200);
  rtc.setTime(30, 58, 19, 13, 1, 2022);  // 13 Jan 2022 19:58:30
  //rtc.setTime(1642103915);  // 13 Jan 2022 19:58:35
   Serial.println("");    
}
void loop() {
  Serial.println(rtc.getTime("%A, %B %d %Y %H:%M:%S"));   // (String) returns time with specified format 
// formating options  http://www.cplusplus.com/reference/ctime/strftime/
  
      Serial.println("");          
      Serial.println(rtc.getTime());          //  (String) 19:58:30
      Serial.println(rtc.getDate());          //  (String) Thu, Jan 13 2022
      Serial.println(rtc.getDate(true));      //  (String) Thursday, January 13 2022
      Serial.println(rtc.getDateTime());      //  (String) Thu, Jan 13 2022 19:58:30
      Serial.println(rtc.getDateTime(true));  //  (String) Thursday, January 13 2022 19:58:30
      Serial.println(rtc.getTimeDate());      //  (String) 19:58:30 Thu, Jan 13 2022
      Serial.println(rtc.getTimeDate(true));  //  (String) 19:58:30 Thursday, January 13 2022
      Serial.println(""); 
      Serial.println(rtc.getMicros());        //  (long)    9309
      Serial.println(rtc.getMillis());        //  (long)    9
      Serial.println(rtc.getEpoch());         //  (long)    1642103910
      Serial.println(rtc.getSecond());        //  (int)     30    (0-59)
      Serial.println(rtc.getMinute());        //  (int)     58    (0-59)
      Serial.println(rtc.getHour());          //  (int)     7     (0-12)
      Serial.println(rtc.getHour(true));      //  (int)     19    (0-23)
      Serial.println(rtc.getDay());           //  (int)     13    (1-31)
      Serial.println(rtc.getMonth());         //  (int)     0     (0-11)
      Serial.println(rtc.getYear());          //  (int)     2022
      Serial.println(rtc.getDayofWeek());     //  (int)     4     (0-6)
      Serial.println(rtc.getDayofYear());     //  (int)     12    (0-365)
      Serial.println(rtc.getAmPm());          //  (String)  pm
      Serial.println(rtc.getAmPm(true));      //  (String)  PM
      Serial.println(""); 
  
  delay(1000);
}
