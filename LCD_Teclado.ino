#include <Keypad.h>
#include <LiquidCrystal.h>
#include "CI.h"

LiquidCrystal lcd(22, 23, 24, 25, 26, 27);//Pinos LCD 4,6,11,12,13,14

char keys [4] [3] = {
  {'1', '2', '3'},
  {'4', '5', '6'},
  {'7', '8', '9'},
  {'*', '0', '#'},
  };
byte rowPins[4] = {28, 29, 30, 31};  //Pinos do teclado 3,8,7,5
byte colPins[3] = {32, 33, 34};    //Pinos 4,2,6
char codigo[4];
byte indice=0;
Keypad mykeypad = Keypad( makeKeymap(keys), rowPins, colPins, 4, 3);

void setup() {
  Serial.begin(9600);
  lcd.begin(16,2);
  lcd.setCursor(0,0);
  lcd.print ("Referencia:");
  lcd.setCursor(0,1); 
  lcd.print("74");
  } 
     
  void mensagem(bool integrado){
  if(integrado){
   lcd.setCursor(0,1); 
   lcd.print("Circuito OK");
   Serial.println("\t");
   Serial.println("Circuito OK");
   Serial.print("\t");
  }
  else{
   lcd.setCursor(0,1); 
   lcd.print("Circuito NOK");
   Serial.println("\t");
   Serial.println("Circuito NOK");
   Serial.print("\t");
  } 
  }
  
  void limparArray(){
  indice=0;
  lcd.setCursor(0,0);
  lcd.print ("Referencia:");
  lcd.setCursor(0,1); 
  lcd.print("74                ");
     }
    
   void checkintegrado(){
    if(strcmp(codigo, "00") == 0){
      mensagem(IC74LS00());
      return;
    }
    if(strcmp(codigo, "02") == 0){
      mensagem(IC74LS02());
      return;
    }
    if(strcmp(codigo, "04") == 0){
      mensagem(IC74LS04());
      return;
    }
    if(strcmp(codigo, "08") == 0){
      mensagem(IC74LS08());
      return;
    }
    if(strcmp(codigo, "32") == 0){
      mensagem(IC74LS32());
      return;
    }
    if(strcmp(codigo, "46") == 0){
      mensagem(IC74LS46());
      return;
    }
    if(strcmp(codigo, "48") == 0){
      mensagem(IC74LS48());
      return;
    }
    if(strcmp(codigo, "74") == 0){
      mensagem(IC74LS74());
      return;
    }
    if(strcmp(codigo, "86") == 0){
      mensagem(IC74LS86());
      return;
    }
    if(strcmp(codigo, "114") == 0){
      mensagem(IC74LS114());
      return;
    }
   lcd.setCursor(0,1); 
   lcd.print("CI nao existe");
   Serial.println("\t");
   Serial.println("CI não existe");
   Serial.print("\t");
    }   
     
void loop() {
  char key = mykeypad.getKey();

  if (key!=NO_KEY){
    if (key>=48 && key<=57){
    if(indice<3){
      lcd.setCursor(2+indice,1);
      codigo[indice]=key;
      lcd.print(key);
      indice++;  
    }
    codigo[indice]='\0';
  }
  }
  switch(key) {
    case '#': checkintegrado();
              break;           
    case '*': limparArray();
              break;           
  }
  }
