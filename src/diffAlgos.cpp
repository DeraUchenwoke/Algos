#include "../include/Sorting/bubbleSort.h"
#include "../include/Sorting/insertSort.h"
#include "../include/Sorting/selectionSort.h"
#include "../include/Miscellaneous/firstDuplicate.h"
#include "../include/Miscellaneous/centuryYear.h"
#include "../include/Miscellaneous/palindromeCheck.h"
#include "../include/Miscellaneous/bdayCandles.h"
#include "../include/Miscellaneous/timeConversion.h"
#include "../include/Miscellaneous/attributeParser.h"

int main() {

    string str;
    cin >> str;

    vector<int> integers = parseInts(str);

    for (int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }

    return 0; 
}
