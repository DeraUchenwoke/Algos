#include "../include/Sorting/bubbleSort.h"
#include "../include/Sorting/insertSort.h"
#include "../include/Sorting/selectionSort.h"
#include "../include/Miscellaneous/firstDuplicate.h"

int main() {

	std::vector<int> a = { -5, -10, -3, -3, 4, -5 };
	cout << firstDuplicate(a); 
}