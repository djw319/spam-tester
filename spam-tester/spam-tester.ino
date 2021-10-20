/*DJ Walsh
 *Measurements and Analysis Term Project
 *This code collects data from an array of thermocouples to test the temperature distrobution of microwaved spam
 *Initial Commit: 10-08-2021
 */

//libraries
#include "max6675.h"


//Global Variables

  //Analog Pin Definitions
    #define PIN_A0   (14)
    #define PIN_A1   (15)
    #define PIN_A2   (16)
    #define PIN_A3   (17)
    #define PIN_A4   (18)
    #define PIN_A5   (19)
    #define PIN_A6   (20)
    #define PIN_A7   (21)
    static const uint8_t A0 = PIN_A0;
    static const uint8_t A1 = PIN_A1;
    static const uint8_t A2 = PIN_A2;
    static const uint8_t A3 = PIN_A3;
    static const uint8_t A4 = PIN_A4;
    static const uint8_t A5 = PIN_A5;
    static const uint8_t A6 = PIN_A6;
    static const uint8_t A7 = PIN_A7;


  //Pin Setup
    int thermoDO = 4;
    int thermoCLK = 6;
    int SC_TC1 = 5;
    int SC_TC2 = 7;
    int SC_TC3 = 8;
    int SC_TC4 = 9;
    int SC_TC5 = 10;
    int SC_TC6 = 11;
    int SC_TC7 = 12;
    int SC_TC8 = 14;
    int SC_TC9 = 15;
    int SC_TC10 = 16;
    int SC_TC11 = 17;
    int SC_TC12 = 18;
    int LED_PIN = 13;
    int BUTTON_PIN = 19;
    
    
  //Time Setup
    unsigned long myTime = 0;

//Thermocouple Initialization
  MAX6675 TC1(thermoCLK, SC_TC1, thermoDO);
  MAX6675 TC2(thermoCLK, SC_TC2, thermoDO);
  MAX6675 TC3(thermoCLK, SC_TC3, thermoDO);
  MAX6675 TC4(thermoCLK, SC_TC4, thermoDO);
  MAX6675 TC5(thermoCLK, SC_TC5, thermoDO);
  MAX6675 TC6(thermoCLK, SC_TC6, thermoDO);
  MAX6675 TC7(thermoCLK, SC_TC7, thermoDO);
  MAX6675 TC8(thermoCLK, SC_TC8, thermoDO);
  MAX6675 TC9(thermoCLK, SC_TC9, thermoDO);
  MAX6675 TC10(thermoCLK, SC_TC10, thermoDO);
  MAX6675 TC11(thermoCLK, SC_TC11, thermoDO);
  MAX6675 TC12(thermoCLK, SC_TC12, thermoDO);
  

  
void setup() {

  //Serial Initialization
  Serial.begin(115200);

  //Pin Initialization
  pinMode(LED_PIN, OUTPUT);
  pinMode(BUTTON_PIN, INPUT);

  digitalWrite(LED_PIN,LOW);

}

void loop() {

  buttonState = digitalRead(BUTTON_PIN);
  
  if(buttonState==HIGH){

    digitalWrite(LED_PIN,HIGH);

    //Write Header Row
    Serial.print("\n");
    Serial.print("TC1, ");
    Serial.print("TC2, ");
    Serial.print("TC3, ");
    Serial.print("TC4, ");
    Serial.print("TC5, ");
    Serial.print("TC6, ");
    Serial.print("TC7, ");
    Serial.print("TC8, ");
    Serial.print("TC9, ");
    Serial.print("TC10, ");
    Serial.print("TC11, ");
    Serial.print("TC12, ");
    Serial.print("\n");
    
    for(int x = 0, x<=20, x++){

      //Data Printout
      Serial.print(TC1.readCelsius());
      Serial.print(", ");
      Serial.print(TC2.readCelsius());
      Serial.print(", ");
      Serial.print(TC3.readCelsius());
      Serial.print(", ");
      Serial.print(TC4.readCelsius());
      Serial.print(", ");
      Serial.print(TC5.readCelsius());
      Serial.print(", ");
      Serial.print(TC6.readCelsius());
      Serial.print(", ");
      Serial.print(TC7.readCelsius());
      Serial.print(", ");
      Serial.print(TC8.readCelsius());
      Serial.print(", ");
      Serial.print(TC9.readCelsius());
      Serial.print(", ");
      Serial.print(TC10.readCelsius());
      Serial.print(", ");
      Serial.print(TC11.readCelsius());
      Serial.print(", ");
      Serial.print(TC12.readCelsius());
      Serial.print("\n");
    
      delay(50);
    }

    digitalWrite(LED_PIN,LOW);
    Serial.print("Finished Recording");
    Serial.print("\n");
    
  }

}
