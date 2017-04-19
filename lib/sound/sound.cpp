#include "Arduino.h"
#include "sound.hpp"

//FREQUENCIES
#define cL 129
#define cLS 139
#define dL 146
#define dLS 156
#define eL 163
#define fL 173
#define fLS 185
#define gL 194
#define gLS 207
#define aL 219
#define aLS 228
#define bL 232

#define c 261
#define cS 277
#define d 294
#define dS 311
#define e 329
#define f 349
#define fS 370
#define g 391
#define gS 415
#define a 440
#define aS 455
#define b 466

#define cH 523
#define cHS 554
#define dH 587
#define dHS 622
#define eH 659
#define fH 698
#define fHS 740
#define gH 784
#define gHS 830
#define aH 880
#define aHS 910
#define bH 933

Sound::Sound(unsigned short speaker, unsigned short btMario, unsigned short btSw){
    Sound::pin = speaker;
    Sound::pinBtMario = btMario;
    Sound::pinBtSw = btSw;
    pinMode(speaker, OUTPUT);
    pinMode(btMario, INPUT);
    pinMode(btSw, INPUT);
}

bool Sound::onPushMario(){
    return (bool) digitalRead(Sound::pinBtMario);
}

bool Sound::onPushSt(){
    return (bool) digitalRead(Sound::pinBtSw);
}

void Sound::mario(){
    tone(Sound::pin,660,100);
    delay(150);
    tone(Sound::pin,660,100);
    delay(300);
    tone(Sound::pin,660,100);
    delay(300);
    tone(Sound::pin,510,100);
    delay(100);
    tone(Sound::pin,660,100);
    delay(300);
    tone(Sound::pin,770,100);
    delay(550);
    tone(Sound::pin,380,100);
    delay(575);

    tone(Sound::pin,510,100);
    delay(450);
    tone(Sound::pin,380,100);
    delay(400);
    tone(Sound::pin,320,100);
    delay(500);
    tone(Sound::pin,440,100);
    delay(300);
    tone(Sound::pin,480,80);
    delay(330);
    tone(Sound::pin,450,100);
    delay(150);
    tone(Sound::pin,430,100);
    delay(300);
    tone(Sound::pin,380,100);
    delay(200);
    tone(Sound::pin,660,80);
    delay(200);
    tone(Sound::pin,760,50);
    delay(150);
    tone(Sound::pin,860,100);
    delay(300);
    tone(Sound::pin,700,80);
    delay(150);
    tone(Sound::pin,760,50);
    delay(350);
    tone(Sound::pin,660,80);
    delay(300);
    tone(Sound::pin,520,80);
    delay(150);
    tone(Sound::pin,580,80);
    delay(150);
    tone(Sound::pin,480,80);
    delay(500);

    tone(Sound::pin,510,100);
    delay(450);
    tone(Sound::pin,380,100);
    delay(400);
    tone(Sound::pin,320,100);
    delay(500);
    tone(Sound::pin,440,100);
    delay(300);
    tone(Sound::pin,480,80);
    delay(330);
    tone(Sound::pin,450,100);
    delay(150);
    tone(Sound::pin,430,100);
    delay(300);
    tone(Sound::pin,380,100);
    delay(200);
    tone(Sound::pin,660,80);
    delay(200);
    tone(Sound::pin,760,50);
    delay(150);
    tone(Sound::pin,860,100);
    delay(300);
    tone(Sound::pin,700,80);
    delay(150);
    tone(Sound::pin,760,50);
    delay(350);
    tone(Sound::pin,660,80);
    delay(300);
    tone(Sound::pin,520,80);
    delay(150);
    tone(Sound::pin,580,80);
    delay(150);
    tone(Sound::pin,480,80);
    delay(500);

    tone(Sound::pin,500,100);
    delay(300);

    tone(Sound::pin,760,100);
    delay(100);
    tone(Sound::pin,720,100);
    delay(150);
    tone(Sound::pin,680,100);
    delay(150);
    tone(Sound::pin,620,150);
    delay(300);

    tone(Sound::pin,650,150);
    delay(300);
    tone(Sound::pin,380,100);
    delay(150);
    tone(Sound::pin,430,100);
    delay(150);

    tone(Sound::pin,500,100);
    delay(300);
    tone(Sound::pin,430,100);
    delay(150);
    tone(Sound::pin,500,100);
    delay(100);
    tone(Sound::pin,570,100);
    delay(220);

    tone(Sound::pin,500,100);
    delay(300);

    tone(Sound::pin,760,100);
    delay(100);
    tone(Sound::pin,720,100);
    delay(150);
    tone(Sound::pin,680,100);
    delay(150);
    tone(Sound::pin,620,150);
    delay(300);

    tone(Sound::pin,650,200);
    delay(300);

    tone(Sound::pin,1020,80);
    delay(300);
    tone(Sound::pin,1020,80);
    delay(150);
    tone(Sound::pin,1020,80);
    delay(300);

    tone(Sound::pin,380,100);
    delay(300);
    tone(Sound::pin,500,100);
    delay(300);

    tone(Sound::pin,760,100);
    delay(100);
    tone(Sound::pin,720,100);
    delay(150);
    tone(Sound::pin,680,100);
    delay(150);
    tone(Sound::pin,620,150);
    delay(300);

    tone(Sound::pin,650,150);
    delay(300);
    tone(Sound::pin,380,100);
    delay(150);
    tone(Sound::pin,430,100);
    delay(150);

    tone(Sound::pin,500,100);
    delay(300);
    tone(Sound::pin,430,100);
    delay(150);
    tone(Sound::pin,500,100);
    delay(100);
    tone(Sound::pin,570,100);
    delay(420);

    tone(Sound::pin,585,100);
    delay(450);

    tone(Sound::pin,550,100);
    delay(420);

    tone(Sound::pin,500,100);
    delay(360);

    tone(Sound::pin,380,100);
    delay(300);
    tone(Sound::pin,500,100);
    delay(300);
    tone(Sound::pin,500,100);
    delay(150);
    tone(Sound::pin,500,100);
    delay(300);

    tone(Sound::pin,500,100);
    delay(300);

    tone(Sound::pin,760,100);
    delay(100);
    tone(Sound::pin,720,100);
    delay(150);
    tone(Sound::pin,680,100);
    delay(150);
    tone(Sound::pin,620,150);
    delay(300);

    tone(Sound::pin,650,150);
    delay(300);
    tone(Sound::pin,380,100);
    delay(150);
    tone(Sound::pin,430,100);
    delay(150);

    tone(Sound::pin,500,100);
    delay(300);
    tone(Sound::pin,430,100);
    delay(150);
    tone(Sound::pin,500,100);
    delay(100);
    tone(Sound::pin,570,100);
    delay(220);

    tone(Sound::pin,500,100);
    delay(300);

    tone(Sound::pin,760,100);
    delay(100);
    tone(Sound::pin,720,100);
    delay(150);
    tone(Sound::pin,680,100);
    delay(150);
    tone(Sound::pin,620,150);
    delay(300);

    tone(Sound::pin,650,200);
    delay(300);

    tone(Sound::pin,1020,80);
    delay(300);
    tone(Sound::pin,1020,80);
    delay(150);
    tone(Sound::pin,1020,80);
    delay(300);

    tone(Sound::pin,380,100);
    delay(300);
    tone(Sound::pin,500,100);
    delay(300);

    tone(Sound::pin,760,100);
    delay(100);
    tone(Sound::pin,720,100);
    delay(150);
    tone(Sound::pin,680,100);
    delay(150);
    tone(Sound::pin,620,150);
    delay(300);

    tone(Sound::pin,650,150);
    delay(300);
    tone(Sound::pin,380,100);
    delay(150);
    tone(Sound::pin,430,100);
    delay(150);

    tone(Sound::pin,500,100);
    delay(300);
    tone(Sound::pin,430,100);
    delay(150);
    tone(Sound::pin,500,100);
    delay(100);
    tone(Sound::pin,570,100);
    delay(420);

    tone(Sound::pin,585,100);
    delay(450);

    tone(Sound::pin,550,100);
    delay(420);

    tone(Sound::pin,500,100);
    delay(360);

    tone(Sound::pin,380,100);
    delay(300);
    tone(Sound::pin,500,100);
    delay(300);
    tone(Sound::pin,500,100);
    delay(150);
    tone(Sound::pin,500,100);
    delay(300);

    tone(Sound::pin,500,60);
    delay(150);
    tone(Sound::pin,500,80);
    delay(300);
    tone(Sound::pin,500,60);
    delay(350);
    tone(Sound::pin,500,80);
    delay(150);
    tone(Sound::pin,580,80);
    delay(350);
    tone(Sound::pin,660,80);
    delay(150);
    tone(Sound::pin,500,80);
    delay(300);
    tone(Sound::pin,430,80);
    delay(150);
    tone(Sound::pin,380,80);
    delay(600);

    tone(Sound::pin,500,60);
    delay(150);
    tone(Sound::pin,500,80);
    delay(300);
    tone(Sound::pin,500,60);
    delay(350);
    tone(Sound::pin,500,80);
    delay(150);
    tone(Sound::pin,580,80);
    delay(150);
    tone(Sound::pin,660,80);
    delay(550);

    tone(Sound::pin,870,80);
    delay(325);
    tone(Sound::pin,760,80);
    delay(600);

    tone(Sound::pin,500,60);
    delay(150);
    tone(Sound::pin,500,80);
    delay(300);
    tone(Sound::pin,500,60);
    delay(350);
    tone(Sound::pin,500,80);
    delay(150);
    tone(Sound::pin,580,80);
    delay(350);
    tone(Sound::pin,660,80);
    delay(150);
    tone(Sound::pin,500,80);
    delay(300);
    tone(Sound::pin,430,80);
    delay(150);
    tone(Sound::pin,380,80);
    delay(600);

    tone(Sound::pin,660,100);
    delay(150);
    tone(Sound::pin,660,100);
    delay(300);
    tone(Sound::pin,660,100);
    delay(300);
    tone(Sound::pin,510,100);
    delay(100);
    tone(Sound::pin,660,100);
    delay(300);
    tone(Sound::pin,770,100);
    delay(550);
    tone(Sound::pin,380,100);
    delay(575);
}

void Sound::beep(int freqHz, long timeMs){

    double timeDelay = (double)(1000000/freqHz);
    double timeLoop = (double)((timeMs*1000)/(timeDelay*2));

    for(int i = 0; i < timeLoop; i++){
        digitalWrite(Sound::pin, HIGH);
        delayMicroseconds(timeDelay);
        digitalWrite(Sound::pin, LOW);
        delayMicroseconds(timeDelay);
    }
    delay(20);
}

void Sound::starwars(){
    beep(a, 500);
     beep(a, 500);
     beep(a, 500);
     beep(f, 350);
     beep(cH, 150);

     beep(a, 500);
     beep(f, 350);
     beep(cH, 150);
     beep(a, 1000);
     beep(eH, 500);

     beep(eH, 500);
     beep(eH, 500);
     beep(fH, 350);
     beep(cH, 150);
     beep(gS, 500);

     beep(f, 350);
     beep(cH, 150);
     beep(a, 1000);
     beep(aH, 500);
     beep(a, 350);

     beep(a, 150);
     beep(aH, 500);
     beep(gHS, 250);
     beep(gH, 250);
     beep(fHS, 125);

     beep(fH, 125);
     beep(fHS, 250);

     delay(250);

     beep(aS, 250);
     beep(dHS, 500);
     beep(dH, 250);
     beep(cHS, 250);
     beep(cH, 125);

     beep(b, 125);
     beep(cH, 250);

     delay(250);

     beep(f, 125);
     beep(gS, 500);
     beep(f, 375);
     beep(a, 125);
     beep(cH, 500);

     beep(a, 375);
     beep(cH, 125);
     beep(eH, 1000);
     beep(aH, 500);
     beep(a, 350);

     beep(a, 150);
     beep(aH, 500);
     beep(gHS, 250);
     beep(gH, 250);
     beep(fHS, 125);

     beep(fH, 125);
     beep(fHS, 250);

     delay(250);

     beep(aS, 250);
     beep(dHS, 500);
     beep(dH, 250);
     beep(cHS, 250);
     beep(cH, 125);

     beep(b, 125);
     beep(cH, 250);

     delay(250);

     beep(f, 250);
     beep(gS, 500);
     beep(f, 375);
     beep(cH, 125);
     beep(a, 500);

     beep(f, 375);
     beep(c, 125);
     beep(a, 1000);
}
