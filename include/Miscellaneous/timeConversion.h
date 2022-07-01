#pragma once
#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std; 

string timeConversion(string s) {


    // Convert string into a time_t variable
    time_t time_24;
    struct tm * time_tm; 
    char time_string[100]; 

    time(&time_24); 


    // Convert time_t back into string using strftime()
    // strftime(time_string, 50, "%T", );
    

    return {};

}
