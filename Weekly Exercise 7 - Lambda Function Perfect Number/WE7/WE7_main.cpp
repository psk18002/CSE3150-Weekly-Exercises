#include <algorithm>
#include <iostream>

using namespace std;

auto is_perfect = [](int number) -> bool {

    int sum = 1;
    for (int i = 2; i < number-1; i++) {
        if (number % i == 0) {
            sum += i;
        }
    }

    return sum == number;
};

int main() {

    int given_int;

    cout << "Enter an integer: ";
    cin >> given_int;

    if(is_perfect(given_int)) {
        cout << given_int << " is a perfect number!" << endl;
    } else {
        cout << given_int << " is not a perfect number!" << endl;
    }

    return 0;
}