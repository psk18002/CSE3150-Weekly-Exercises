#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "doctest.h"
#include "WE6.h"

TEST_CASE("TESTING VECTOR OF INT_VECTORS INPUT AND OUTPUT") {

    SUBCASE("TESTING WITH ALTERNATE VECTORS TEXT FILE") {

        vector<int_vector> test_vec = readin_vectors_reverse("vectors_2D2.txt");
        int id_check = 5;
        int int_vec_values = 11;
        for (auto vec : test_vec) {
            CHECK_EQ(vec.id, id_check--);
            CHECK_EQ(vec.to, int_vec_values--);
            CHECK_EQ(vec.from, int_vec_values--);
        }
    }
}