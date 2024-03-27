#ifndef _DOUBLE_VECTOR_H_
#define _DOUBLE_VECTOR_H_

#include <iostream>
#include <cmath>
#include <vector>
#include <ostream>
#include <string>

using namespace std;

struct double_vector {
    double x;
    double y;
    
    double_vector(const double_vector & dv) : x(dv.x), y(dv.y) {};
    double_vector() : x(0.0), y(0.0) {};
    double_vector(double x, double y) :  x(x), y(y) {};

    friend ostream& operator << (ostream &os, const double_vector& dv){
        os << "(" << dv.x << ", " << dv.y << ") "; 
        return os;
    }    
};

struct pairwise_output {
    double_vector one;
    double_vector two;
    double cos_dist;

    pairwise_output(const double_vector & one, const double_vector & two, const double cos_dist) : one(one), two(two), cos_dist(cos_dist) {};
    
    friend ostream& operator << (ostream &os, const pairwise_output& po){
        os << po.one << "& " << po.two << "\n\tCosine Dist: " << po.cos_dist;
        return os;
    }    
};

double square(const double & d);
double dot_product(const double_vector & one, const double_vector & two) ;
double magnitude(const double_vector & my_vector);
double cosine_distance(const double_vector & one, const double_vector & two);

vector<double_vector> read_input_file_v2D(string filename);

vector<pairwise_output> sorted_cos_dist_computation(vector<double_vector> & vdv);

void print_sorted_cos_dists(vector<pairwise_output> & pairs);

#endif