#pragma once
#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std; 

int birthdayCakeCandles(int size, vector<int> candles) {

	// find max value in vector
	auto it = max_element(begin(candles), end(candles));
	int max = *it;

	unordered_map<int, int> freq; 
	
	for (int i = 0; i < size; i++)
	{
		if (candles[i] == max) // check if candle size equals max size
			freq[candles[i]]++;
	}

	return freq[max]; // Gives frequency of maximum value 
}