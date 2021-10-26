#include "../include/Sorting/bubbleSort.h"
#include "../include/Sorting/insertSort.h"
#include "../include/Sorting/selectionSort.h"
#include "../include/Miscellaneous/firstDuplicate.h"
#include "../include/Miscellaneous/centuryYear.h"
#include "../include/Miscellaneous/palindromeCheck.h"
#include "../include/Miscellaneous/bdayCandles.h"

int main() {

	vector<int> candles = { 3, 2, 1, 3 };
	int sizeArr = candles.size();

	birthdayCakeCandles(sizeArr, candles);
}
