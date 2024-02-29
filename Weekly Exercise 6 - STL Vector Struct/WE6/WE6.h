#ifndef _WE6_H
#define _WE6_H

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct int_vector {
    int id;
    int from;
    int to;
    int_vector(const int_vector & i_v) : id(i_v.id), from(i_v.from), to(i_v.to) {};
    int_vector() : id(-1), from(0), to(0) {};
    int_vector(int id, int from , int to) : id(id), from(from), to(to) {};
};

vector<int_vector> readin_vectors_reverse(string filename);
void printVector_int_vector(vector<int_vector> & vec);

#endif