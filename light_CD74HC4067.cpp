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


#include "Arduino.h"
#include "light_CD74HC4067.h"

// Constructor. pin3, pin2, pin1, pin0 
CD74HC4067::CD74HC4067(uint8_t p0, uint8_t p1, uint8_t p2, uint8_t p3)
{
  pin0 = p0;
  pin1 = p1;
  pin2 = p2;
  pin3 = p3;
  pinMode(pin0, OUTPUT);
  pinMode(pin1, OUTPUT);
  pinMode(pin2, OUTPUT);
  pinMode(pin3, OUTPUT);
}

//Select channel. Values: 0 - 15
void CD74HC4067::channel(uint8_t channel)
{
  digitalWrite(pin0, channel & 0x01 );
  digitalWrite(pin1, channel & 0x02 );
  digitalWrite(pin2, channel & 0x04 );
  digitalWrite(pin3, channel & 0x08 );
}
