#include <iostream>
#include "../include/DNA.h"

int main() {

	std::string seq1 = "TCCG"; 
	std::string seq2 = "HTCHA"; 

	// Expected outcome => TC

	DNASubString(seq1, seq2); 
}