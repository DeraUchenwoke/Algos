# include "../include/Sorting/mergeSort.h"
# include <iostream>
# include <map>
# include <vector>
# include <iomanip>

int main() {

    //std::vector<int> arr;
    //long long int arrLength = 0; 

    //std::cin >> arrLength; 

    //for (int val = 0; val < arrLength; val++) {
    //    int userInput = 0; 
    //    std::cin >> userInput;
    //    arr.push_back(userInput);
    //}
    
    // mergeSort(); 

    std::string plain_text = "JGRMQOYGHMVBJWRWQFPWHGFFDQGFPFZRKBEEBJIZQQOCIBZKLFAFGQVFZFWWEOGWOPFGFHWOLPHLRLOLFDMFGQWBLWBWQOLKFWBYLBLYLFSFLJGRMQBOLWJVFPFWQVHQWFFPQOQVFPQOCFPOGFWFJIGFQVHLHLROQVFGWJVFPFOLFHGQVQVFILEOGQILHQFQGIQVVOSFAFGBWQVHQWIJVWJVFPFWHGFIWIHZZRQGBABHZQOCGFHX";
    std::map<char, double> o; 
    std::vector <double> v;
    std::map<double, char> a
    {
        {8.2, 'A'},
        {1.5, 'B'},
        {2.8, 'C'},
        {4.2, 'D'},
        {12.7, 'E'},
        {2.2, 'F'},
        {2.0, 'G'},
        {6.1, 'H'},
        {7.0, 'I'},
        {0.1, 'J'},
        {0.8, 'K'},
        {4.0, 'L'},
        {2.4, 'M'},
        {6.7, 'N'},
        {7.5, 'O'},
        {1.9, 'P'},
        {0.1, 'Q'},
        {6.0, 'R'},
        {6.3, 'S'},
        {9.0, 'T'},
        {2.8, 'U'},
        {1.0, 'V'},
        {2.4, 'W'},
        {2.0, 'X'},
        {0.1, 'Y'},
        {0.1, 'Z'}
    };

    std::cout << std::setprecision(1) << std::fixed;

    for (char i : plain_text)
    {
        o[i] = o[i] + 1.0; // occurences of each letter.
    }
    
    // Input frequency of letters into seperate vector from map o.
    for (int i = 0; i < plain_text.size(); ++i)
    {
        v.push_back(o[plain_text[i]]); 
    }

    int i = 0;
    int j = 0;

    while (i < v.size())
    {

        double percent = (v[i] * 100) / v.size();

        auto it = a.lower_bound(percent); // lower bound gives key >= wanted key
        
        if (it != a.end())
        {
            auto upper = it->first;
            auto lower = 0.0;

            if (it != a.begin())
            {
                --it;
                lower = it->first;
            }

            if (percent - lower < upper - percent)  // lower always > wanted key, upper is opp
            {
                std::cout << it->second << " ";
            }

            else
            {
                ++it;
                std::cout << it->second << " ";
            }

            // TODO: figure out how to account for when it == a.begin() or a.end().
            // NOTE: .end() is one past the actual end. 
        }

        ++i; 
        
    }

  
    return 0;
}
