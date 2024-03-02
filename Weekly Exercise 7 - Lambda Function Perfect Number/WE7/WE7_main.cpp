#include <algorithm>
#include <iostream>

#include "WE7.h"

using namespace std;

int main() {

    int given_int;

    cout << "Enter an integer: ";
    cin >> given_int;

    if(perfect_number_check(given_int)) {
        cout << given_int << " is a perfect number!" << endl;
    } else {
        cout << given_int << " is not a perfect number!" << endl;
    }

    return 0;
}