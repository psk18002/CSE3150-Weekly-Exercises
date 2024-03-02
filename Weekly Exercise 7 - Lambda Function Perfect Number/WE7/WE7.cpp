#include <algorithm>
#include <vector>
#include <iostream>
#include "WE7.h"

using namespace std;

auto is_perfect = [](int number) -> bool {

    vector<int> num_vec(number-2, number);

    int sum = 1;
    int potential_divisor = 2;
    for (int val : num_vec) {

        if (val % potential_divisor == 0) {
            sum += potential_divisor;
        }
        potential_divisor++;
    }

    return sum == number;
};

bool perfect_number_check(int number) {
    
    bool result = is_perfect(number);
    return result;

}