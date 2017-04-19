#include "Arduino.h"
#include <LiquidCrystal.h>
#include <sound.hpp>

Sound sound(13, 10, 9);
LiquidCrystal lcd(7, 6, 5, 4, 3, 2);

void mario(){
    //sound.mario();
    lcd.print("Playing Mario Bros");
    lcd.setCursor(0, 1);
}

void st(){
    //sound.starwars();
    lcd.print("Playing Star Wars");
    lcd.setCursor(0, 1);
}

void setup(){
     lcd.begin(16, 2);
     lcd.print("Playing Star Wars");
     lcd.setCursor(0, 1);
}

void loop(){

}
