#pragma once 

#include <bits/stdc++.h>

using namespace std; 

// LCM(a,b) is: a * b (gcd(a, b))

int GCD(int a, int b){
	// Link for Euclidean algorithm: https://www.idomaths.com/hcflcm.php
	// Euclidean algorithm subtraction version: https://en.wikipedia.org/wiki/Euclidean_algorithm
	
	//======================================================================\\ 
	
	// Subtraction method (assumes num > 0)
	// GCD(60, 24) = 12
	while (a != b) { // otherwise gcd = a (or b since they are the same)
		if (a > b) {
			a -= b; 
		}
		else {
			b -= a; 
		}
	}
	
	// return a; // or b does not matter which is returned 
	
	// Example: 
	// i = 1, a = 36, b = 24
	// i = 2, a = 12, b = 24
	// i = 3, a = 12, b = 12 (algorithm stops here)
	
	//======================================================================\\ 
	
	// Modulo method (no assumptions)
	// GCD(60, 24) = 12
	while (b != 0) {
		int t = b; 
		b = a % b; 
		a = t; 
	}
	
	// i = 1, t = 24, b = 36, a = 24
	// i = 2, t = 36, b = 24, a = 36
	// i = 3, t = 24, b = 12, a = 24
	// i = 4, t = 12, b = 0, a = 12 (algorithm stops here)
	
	return a; 
}