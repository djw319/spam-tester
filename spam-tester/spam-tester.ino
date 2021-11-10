/*DJ Walsh
 *Measurements and Analysis Term Project
 *This code collects data from an array of thermocouples to test the temperature distribution of microwaved spam
 *The array contains 12 Thermocouples and the Units are in degrees Celsius
 *Initial Commit: 10-08-2021
 */

 /*
  * Thermocouple Array:
  * 
  *   O
  *   | 01 | 02 | 03 | 04 |
  *   | 05 | 06 | 07 | 08 |
  *   | 09 | 10 | 11 | 12 |
  * 
  */

//libraries
#include <max6675.h>
#include <Wire.h>



//Global Variables

  //Pin Setup
    int thermoDO = 5;
    int thermoCLK = 6;
    int SC_TC1 = 4;
    int SC_TC2 = 7;
    int SC_TC3 = 8;
    int SC_TC4 = 9;
    int SC_TC5 = 10;
    int SC_TC6 = A0;
    int SC_TC7 = A1;
    int SC_TC8 = A2;
    int SC_TC9 = A3;
    int SC_TC10 = A4;
    int SC_TC11 = A5;
    int SC_TC12 = A6;
    int LED_PIN = 13;
    int BUTTON_PIN = A7;
        
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
    Wire.begin();
    Serial.begin(9600);

  //Pin Initialization
    pinMode(LED_PIN, OUTPUT);
    pinMode(BUTTON_PIN, INPUT);
    digitalWrite(LED_PIN,HIGH);

}

void loop() {

  //int buttonState = digitalRead(BUTTON_PIN);
  
  //if(buttonState==HIGH){

    //digitalWrite(LED_PIN,HIGH);
//
//    //Write Header Row
//    Serial.print("\n");
//    Serial.print("TC1, ");
//    Serial.print("TC2, ");
//    Serial.print("TC3, ");
//    Serial.print("TC4, ");
//    Serial.print("TC5, ");
//    Serial.print("TC6, ");
//    Serial.print("TC7, ");
//    Serial.print("TC8, ");
//    Serial.print("TC9, ");
//    Serial.print("TC10, ");
//    Serial.print("TC11, ");
//    Serial.print("TC12, ");
//    Serial.print("\n");
    
    //for(int x = 0; 0<= 2000000; x++){

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
    
      delay(200);
    //}

    //digitalWrite(LED_PIN,LOW);
    //Serial.print("Finished Recording");
    //Serial.print("\n");
    
  //}

}
