#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "doctest.h"
#include "WE8.h"
#include <cmath>

using namespace std;

TEST_CASE("Testing ALL Functions") {

    SUBCASE("Base Cases for Cosine Distance-Related Functions") {

        //cosine_dist between vectors (1.0, 1.0) and (1.0, 1.0)
        double_vector dv = double_vector(1.0, 1.0);
        CHECK(2.0 == dot_product(dv, dv));
        double actual_mag = magnitude(dv);
        double sq = sqrt(2.0);
        CHECK(fabs(sq - actual_mag) < sq * 0.001);
        double answer_acos = cosine_distance(dv, dv);
        CHECK(answer_acos < 0.0001);

        //cosine_dist between vectors (1.0, 0.0) and (-1.0, 0.0)
        double_vector one = double_vector(1.0, 0.0);
        double_vector two = double_vector(-1.0, 0.0);

        double answer_acos_one_two = cosine_distance(one, two);

        CHECK(M_PI == answer_acos_one_two);

        //cosine_dist between vectors given from lecture
        double_vector c = double_vector(2.7, 7.0);
        double answer_acos_c = cosine_distance(c, c);
        //CHECK(0 == answer_acos_c);

        double actual_dot_prod = dot_product(c, c);
        CHECK(56.29 == actual_dot_prod);

        double actual_mag_c = magnitude(c);
        CHECK(7.502666 - actual_mag_c < 0.000001);

        //Bit representation of actual magnitude and rote answer is different due to infinitesimal deficit
        CHECK(1 - (actual_dot_prod/(actual_mag_c * actual_mag_c)) < 0.000001);


    }

    SUBCASE("Base Cases for 2D Vector Input Function(s)") {

        vector<double_vector> vdv = read_input_file_v2D("vectors_2D.txt");

        ifstream in_file;
        in_file.open("vectors_2D.txt");

        int vdv_index = 0;
        double x, y;
        
        while(in_file >> x >> y) {
            CHECK(x == vdv.at(vdv_index).x);
            CHECK(y == vdv.at(vdv_index).y);
            vdv_index++;
        }

        in_file.close();
    }

    SUBCASE("Base Case for Sorting Vector Pairings by Cosine Distances Function(s)") {

        vector<double_vector> vdv = read_input_file_v2D("vectors_2D.txt");
        vector<pairwise_output> sorted_output = sorted_cos_dist_computation(vdv);
        double array[] = {0.0123756, 0.0522779, 0.0971839, 0.10956, 0.149462, 0.161837, 0.28354, 0.295915, 0.393099, 0.445377};


        for(int i = 0; i < sorted_output.size()-1; i++) {
            CHECK(doctest::Approx(array[i]).epsilon(0.01) == sorted_output.at(i).cos_dist);
        }
    }
}