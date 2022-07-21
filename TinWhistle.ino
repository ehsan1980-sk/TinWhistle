
#define NOTE_D3  147
#define NOTE_DS3 156
#define NOTE_E3  165
#define NOTE_F3  175
#define NOTE_FS3 185
#define NOTE_G3  196
#define NOTE_GS3 208
#define NOTE_A3  220
#define NOTE_AS3 233
#define NOTE_B3  247
#define NOTE_C4  262
#define NOTE_CS4 277
#define NOTE_D4  294
#define NOTE_DS4 311
#define NOTE_E4  330
#define NOTE_F4  349
#define NOTE_FS4 370
#define NOTE_G4  392
#define NOTE_GS4 415
#define NOTE_A4  440
#define NOTE_AS4 466
#define NOTE_B4  494
#define NOTE_C5  523
#define NOTE_CS5 554
#define NOTE_D5  587
#define NOTE_DS5 622
#define NOTE_E5  659
#define NOTE_F5  698
#define NOTE_FS5 740
#define NOTE_G5  784
#define NOTE_GS5 831
#define NOTE_A5  880
#define NOTE_AS5 932
#define NOTE_B5  988
#define NOTE_C6  1047
#define NOTE_CS6 1109
#define NOTE_D6  1175
#define NOTE_DS6 1245
#define NOTE_E6  1319



int fre[15]={NOTE_D4,NOTE_E4,NOTE_FS4,NOTE_G4,NOTE_A4,NOTE_B4,NOTE_CS5,NOTE_D5,NOTE_E5,NOTE_FS5,NOTE_G5,NOTE_A5,NOTE_B5,NOTE_CS6};

void setup() {
  // put your setup code here, to run once:
pinMode(2,INPUT_PULLUP);
pinMode(7,INPUT_PULLUP);
pinMode(8,INPUT_PULLUP);
pinMode(5,INPUT_PULLUP);
pinMode(6,INPUT_PULLUP);
pinMode(12,INPUT_PULLUP);
pinMode(11,INPUT_PULLUP);
pinMode(10,INPUT_PULLUP);

}

void loop() {

if(digitalRead(2)==0)
 {
 
 if(digitalRead(7)==0 && digitalRead(6)==0 && digitalRead(5)==0 && digitalRead(12)==0 && digitalRead(11)==0 && digitalRead(10)==0 ){
 if(digitalRead(8)==0)
 tone(9,fre[0+7]);
 else
 tone(9,fre[0]);}

 if(digitalRead(7)==0 && digitalRead(6)==0 && digitalRead(5)==0 && digitalRead(12)==0 && digitalRead(11)==0 && digitalRead(10)==1 ){
 if(digitalRead(8)==0)
 tone(9,fre[1+7]);
 else
 tone(9,fre[1]);}


 if(digitalRead(7)==0 && digitalRead(6)==0 && digitalRead(5)==0 && digitalRead(12)==0 && digitalRead(11)==1 && digitalRead(10)==1 ){
 if(digitalRead(8)==0)
 tone(9,fre[2+7]);
 else
 tone(9,fre[2]);}


 if(digitalRead(7)==0 && digitalRead(6)==0 && digitalRead(5)==0 && digitalRead(12)==1 && digitalRead(11)==1 && digitalRead(10)==1 ){
 if(digitalRead(8)==0)
 tone(9,fre[3+7]);
 else
 tone(9,fre[3]);}


 if(digitalRead(7)==0 && digitalRead(6)==0 && digitalRead(5)==1 && digitalRead(12)==1 && digitalRead(11)==1 && digitalRead(10)==1 ){
 if(digitalRead(8)==0)
 tone(9,fre[4+7]);
 else
 tone(9,fre[4]);}


 if(digitalRead(7)==0 && digitalRead(6)==1 && digitalRead(5)==1 && digitalRead(12)==1 && digitalRead(11)==1 && digitalRead(10)==1 ){
 if(digitalRead(8)==0)
 tone(9,fre[5+7]);
 else
 tone(9,fre[5]);}

  if(digitalRead(7)==1 && digitalRead(6)==1 && digitalRead(5)==1 && digitalRead(12)==1 && digitalRead(11)==1 && digitalRead(10)==1 ){
 if(digitalRead(8)==0)
 tone(9,fre[6+7]);
 else
 tone(9,fre[6]);}

}
else {noTone(9);}
 


 
}
