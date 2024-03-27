#include "WE8.h"

int main() {

    vector<double_vector> vdv = read_input_file_v2D("vectors_2D.txt");

    vector<pairwise_output> pairs = sorted_cos_dist_computation(vdv);
    print_sorted_cos_dists(pairs);

    /*
    double_vector one = double_vector(3.0, 7.0);
    double_vector two = double_vector(10.0, 6.0);

    double cosine_dist = cosine_distance(one, two);
    cout << cosine_dist << endl;
    */    

    return 0;
}