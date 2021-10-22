#include "../include/Sorting/bubbleSort.h"
#include "../include/Sorting/insertSort.h"
#include "../include/Sorting/selectionSort.h"
#include "../include/Miscellaneous/firstDuplicate.h"
#include "../include/Miscellaneous/centuryYear.h"

int main() {

	int year = 1701;
	cout << year << " is in the " << centuryFromYear(year) << "th century";
}