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


#ifndef light_CD74HC4067_h
#define light_CD74HC4067_h


class CD74HC4067
{
  public:
    CD74HC4067(uint8_t p0, uint8_t p1, uint8_t p2, uint8_t p3);
    void channel(uint8_t channel);

  protected:
  	uint8_t pin0;
  	uint8_t pin1;
  	uint8_t pin2;
  	uint8_t pin3;
};

#endif
