// **********************************************************************************
// Author: Sunit Raut   github.com/SunitRaut
// **********************************************************************************
// License
// **********************************************************************************
// This program is free software; you can redistribute it 
// and/or modify it under the terms of the GNU General    
// Public License as published by the Free Software       
// Foundation; either version 3 of the License, or        
// (at your option) any later version.                    
//                                                        
// This program is distributed in the hope that it will   
// be useful, but WITHOUT ANY WARRANTY; without even the  
// implied warranty of MERCHANTABILITY or FITNESS FOR A   
// PARTICULAR PURPOSE. See the GNU General Public        
// License for more details.                              
//                                                        
// Licence can be viewed at                               
// http://www.gnu.org/licenses/gpl-3.0.txt
//
// Please maintain this license information along with authorship
// and copyright notices in any redistribution of this code
// **********************************************************************************
/*
 * Connect the four control pins to any Arduino pins.
 * This example uses digital pins 4, 5, 6, and 7.
 * You will get analog output at the Analog pin that you connect to Sig pin of CD74HC4067
 * This examples loops through all channels and prints theanalog input at all 16 channels
*/

#include <light_CD74HC4067.h>

            // s0 s1 s2 s3: select pins
CD74HC4067 mux(4, 5, 6, 7);  // create a new CD74HC4067 object with its four select lines

const int signal_pin = A0; // Pin Connected to Sig pin of CD74HC4067

void setup()
{
    Serial.begin(9600);
    pinMode(signal_pin, INPUT); // Set as input for reading through signal pin
}

void loop()
{
  // loop through channels 0 - 15
    for (byte i = 0; i < 16; i++) {
        mux.channel(i);
        int val = analogRead(signal_pin);                       // Read analog value
        Serial.println("Channel "+String(i)+": "+String(val));  // Print value
        delay(500);
    }
  delay(2000);
}
