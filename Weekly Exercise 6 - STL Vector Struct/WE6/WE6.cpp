#include <vector>
#include <iostream>
#include <fstream>
#include <algorithm>
#include <string>

#include "WE6.h"

using namespace std;

vector<int_vector> readin_vectors_reverse(string filename) {

    ifstream vector_file;
    vector_file.open(filename);

    vector<int_vector> int_vectors;

    int from, to;
    int id = 0;
    while(vector_file >> from >> to) {

        int_vector vector = int_vector(id++,from, to);
        int_vectors.push_back(vector);

    }

    sort(int_vectors.begin(), int_vectors.end(), 
            [](const int_vector & left, const int_vector & right) {
                return left.id > right.id;
            });

    vector_file.close();

    return int_vectors;
}

void printVector_int_vector(vector<int_vector> & vec) {

    for (auto int_vec : vec) {

        cout << int_vec.id << ": " << int_vec.from << " " << int_vec.to << endl; 

    }

}