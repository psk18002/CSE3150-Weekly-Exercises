#include <iostream>
#include <cmath>
#include <fstream>
#include <algorithm>

#include "WE8.h"

using namespace std;

double square(const double & d){
    return d*d;
}

double dot_product(const double_vector & one, const double_vector & two) {
    return (one.x* two.x) + (one.y* two.y);
}

double magnitude(const double_vector & my_vector) {
    return sqrt(square(my_vector.x) + square(my_vector.y));
};

double cosine_distance(const double_vector & one, const double_vector & two) {
    double dot_prod = dot_product(one,two);
    double one_magnitude = magnitude(one);
    double two_magnitude = magnitude(two);

    double d = dot_prod/(one_magnitude*two_magnitude) ;


    return acos(d);
}

vector<double_vector> read_input_file_v2D(string filename) {
    
    vector<double_vector> vdv;
    
    ifstream in_file;
    in_file.open(filename);

    double from, to;

    while(in_file >> from >> to) {
        double_vector dv = double_vector(from, to);
        vdv.push_back(dv);
    }

    in_file.close();

    return vdv;
}

vector<pairwise_output> sorted_cos_dist_computation(vector<double_vector> & vdv) {
    
    vector<pairwise_output> pairs;
    
    for (int i = 0; i < vdv.size()-1; i++) {

        cout << "Pairings for vector: " << vdv.at(i) << endl;

        for (int j = i + 1; j < vdv.size(); j++) {

            double cos_dist = cosine_distance(vdv.at(i), vdv.at(j));
            cout << "\t" << vdv.at(j) << "= " << cos_dist << endl;
            pairwise_output pair = pairwise_output(vdv.at(i), vdv.at(j), cos_dist);
            pairs.push_back(pair);

        }
    }

    sort(pairs.begin(), pairs.end(), [](const pairwise_output & one, const pairwise_output & two) {
        return one.cos_dist < two.cos_dist;
    });

    return pairs;

}

void print_sorted_cos_dists(vector<pairwise_output> & pairs) {
    
    cout << "\n-----------------------------------------\nSorted Cosine Distances:" << endl;
    for (pairwise_output pair : pairs) {
        cout << "Vector Pairing: " << pair << endl;
    }

}