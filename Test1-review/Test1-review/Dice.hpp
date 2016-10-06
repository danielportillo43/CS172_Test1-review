//
//  Dice.hpp
//  Test1-review
//
//  Created by Daniel Portillo on 10/4/16.
//  Copyright © 2016 Daniel Portillo. All rights reserved.
//

#ifndef Dice_hpp
#define Dice_hpp

#include <stdio.h>

class Dice {    //represents a die of n sides
    int sides;
    
    
public:
    
    int rolls = 0;
    Dice(int sides); //Creates a die with n sides (n=sides
    int Roll();
    int GetRolls();
    int GetSides();
    
};

#endif /* Dice_hpp */
