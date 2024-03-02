#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "doctest.h"
#include "WE6.h"

TEST_CASE("TESTING VECTOR OF INT_VECTORS ") {

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

    SUBCASE("TEST IN_VECTORS OF VECTORS_EMPTY.TXT") {

        vector<int_vector> test_vec = readin_vectors_reverse("vectors_empty.txt");
        CHECK_EQ(test_vec.empty(), true);
    }

    SUBCASE("TESTING INT_VECTOR BASIC CONSTRUCTOR") {

        int_vector test_vec = int_vector();
        CHECK_EQ(test_vec.id, -1);
        CHECK_EQ(test_vec.from, 0);
        CHECK_EQ(test_vec.to, 0);

    }

    SUBCASE("TEST INT_VECTOR COPY CONSTRUCTOR") {

        vector<int_vector> test_vec = readin_vectors_reverse("vectors_2D2.txt");
        
        int id_check = 5;
        int int_vec_values = 11;
        for (auto vec : test_vec) {
            int_vector copy_test_vec = int_vector(vec);
            CHECK_EQ(copy_test_vec.id, id_check--);
            CHECK_EQ(copy_test_vec.to, int_vec_values--);
            CHECK_EQ(copy_test_vec.from, int_vec_values--);
        }
    }

}