#pragma once
#include <sstream>
#include <vector>
#include <iostream>
#include <typeinfo> // To check type do typeid(variable).name()

std::vector<int> parseInts(std::string str) {
    // Example input string = "45,322,1211"
    const char seperator = ','; // Define seperator.
    std::stringstream streamData(str); // Converts string to stream.

    std::string number; // Seperated number as string data type.
    std::vector<int> numbers; // Stores casted integers.

    while (std::getline(streamData, number, seperator)) {
        int actualNumber = std::stoi(number);
        numbers.push_back(actualNumber);
    }
    return numbers;
}

// Note: This algorithms does not account for whitespaces and rouge inputs i.e., "2e,23, 5".

