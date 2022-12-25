#include <iostream>
#include <vector>
#include <../Leetcode/DynamicProgramming/pascalsTriangle.h>

using namespace std;

int main() {

	int numRows = 30; 

	vector<vector<int>> pascalTriangle = generate(numRows);

	cout << "["; 
	int i = 0;

	for (auto row : pascalTriangle) {

		cout << "["; 
		for (auto col : row) {
			
			cout << col;
			++i;	
		}
		cout << "]"; 
	}
	cout << "]";

}
