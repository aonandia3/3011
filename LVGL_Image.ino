#include "SD_Card.h"
#include "Display_ST7789.h"
#include "LCD_Image.h"

int i = 1; 
char filePath[10];

void setup() {
  Serial.begin(115200);
  pinMode(9, INPUT);
  pinMode(18, INPUT);  
  pinMode(19, INPUT);
  pinMode(20, INPUT);  
  pinMode(23, INPUT); 

  Flash_test();  
  LCD_Init();    
  SD_Init();   

  sprintf(filePath, "/%d/", i); // Correctly format the file path
  Display_Image(filePath, ".png", 0);
  i++; 
}

void loop() {
  delay(0);
  int bit0  = digitalRead(9);
  int bit1 = digitalRead(18);
  int bit2 = digitalRead(19);
  int bit3 = digitalRead(20);
  int bit4 = digitalRead(23);

  Serial.println("////////////");
  Serial.println("Pin Values: ");
  Serial.print(bit4);
  Serial.print(bit3);
  Serial.print(bit2);
  Serial.print(bit1);
  Serial.println(bit0);
  Serial.println("////////////");

  Serial.println("////////////");
  Serial.println("Test_i: ");
  Serial.println(i);
  Serial.println("////////////");

  sprintf(filePath, "/%d/", i);
  Display_Image(filePath, ".png", 0);



  // if (i <= 30) {
  //   i++; 
  // } else {
  //   i = 1;
  // }

    i = 
  (bit4 << 4) 
  + (bit3 << 3) 
  + (bit2 << 2) 
  + (bit1 << 1) 
  + (bit0 << 0) 
  ;
}
