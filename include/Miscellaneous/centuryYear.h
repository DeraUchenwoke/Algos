#pragma once
#include <iostream>

int centuryFromYear(int year) {

    // find difference between year - (year % 100) * 100
    // if difference >= 1 then century = (year % 100 + 1)
    // else century = (year & 100) 

    int century = 0;
    int difference = year - ((year / 100) * 100);

    if (difference >= 1) {
        century = (year / 100) + 1;
    }

    else {
        century = (year / 100);
    }

    // better, faster solution -> return (year + 99)/100; 

    return century;
}
