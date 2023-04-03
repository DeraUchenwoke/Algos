#pragma once 

#include <bits/stdc++.h>

using namespace std; 

int towerBreakers(int n, int m) {
	
	// Rules as per 'abdulmoomin007':
	// 1. If all the towers are of height 1, player 1 cannot move at all.
	// 2. If the number of towers is even, whatever move the player 1...
	// ...does can be done by player 2 to optimally win the game.
	
	// Hence, either if the height of all the towers is 1 or if the number...
	// ...of tower is even, player 2 wins.
	// Player 1 can win in every other possibility.
	
	return (m == 1) || (n & 1) == 0 ? 2 : 1; 
}