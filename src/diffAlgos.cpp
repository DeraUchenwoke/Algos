//#include "../include/Sorting/bubbleSort.h"
//#include "../include/Miscellaneous/firstDuplicate.h"
//#include "../include/Miscellaneous/centuryYear.h"
//#include "../include/Miscellaneous/palindromeCheck.h"
//#include "../include/Miscellaneous/bdayCandles.h"
//#include "../include/Miscellaneous/timeConversion.h"
//#include "../include/Miscellaneous/attributeParser.h"
#include "../include/Miscellaneous/minMaxSum.h"


int main() {

    std::vector<int> arr;
    long long int arrLength = 0; 

    std::cin >> arrLength; 

    for (int val = 0; val < arrLength; val++) {
        int userInput = 0; 
        std::cin >> userInput;
        arr.push_back(userInput);
    }

    minMaxSum(arr);

    return 0;
}
