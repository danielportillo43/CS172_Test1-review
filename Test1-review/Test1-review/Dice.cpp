//
//  Dice.cpp
//  Test1-review
//
//  Created by Daniel Portillo on 10/4/16.
//  Copyright © 2016 Daniel Portillo. All rights reserved.
//

#include "Dice.hpp"
#include <ctime>
#include <cstdlib>

Dice::Dice(int s) {
    sides = s;
}
int Dice::Roll() {
    int n;
     // Generate a random number between 0-5
    n = (rand() % sides) + 1;
    rolls ++;
    return n;
}

int Dice::GetRolls() {
    return rolls;
}

int Dice::GetSides() {
    return sides;
}
