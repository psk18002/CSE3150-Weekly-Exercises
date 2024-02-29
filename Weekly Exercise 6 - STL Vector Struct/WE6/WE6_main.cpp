#include <vector>
#include <iostream>
#include <fstream>
#include <algorithm>

#include "WE6.h"

using namespace std;

int main() {

    vector<int_vector> vec = readin_vectors_reverse("vectors_2D3.txt");
    printVector_int_vector(vec);

    return 0;
}