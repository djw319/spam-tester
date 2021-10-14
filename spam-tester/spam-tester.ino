/*DJ Walsh
 *Measurements and Analysis Term Project
 *This code collects data from an array of thermocouples to test the temperature distrobution of microwaved spam
 *Initial Commit: 10-08-2021
 */

//libraries
#include "max6675.h"


//Global Variables
  //Thermoresistor Setup
    int thermoDO = 4;
    int thermoCLK = 6;
    int SC_TC1 = 5;
    int SC_TC2 = 7;
    
  //Time Setup
    unsigned long myTime = 0;

//Thermocouple Initialization
  MAX6675 TC1(thermoCLK, SC_TC1, thermoDO);
  MAX6675 TC2(thermoCLK, SC_TC2, thermoDO);

void setup() {
  // put your setup code here, to run once:

  Serial.begin(115200);

}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print(TC1.readCelsius());
  Serial.print(", ");
  Serial.print(TC2.readCelsius());
  Serial.print("\n");

  delay(200);

}
