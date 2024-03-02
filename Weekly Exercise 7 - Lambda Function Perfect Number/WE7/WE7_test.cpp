#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "doctest.h"
#include "WE7.h"

TEST_CASE("PERFECT NUMBER TESTING") {

    SUBCASE("TESTING WITH VARIOUS NUMBERS") {
       
        CHECK_EQ(perfect_number_check(6), true);
        CHECK_EQ(perfect_number_check(28), true);
        CHECK_EQ(perfect_number_check(496), true);
        CHECK_EQ(perfect_number_check(8128), true);
        CHECK_EQ(perfect_number_check(8), false);
        CHECK_EQ(perfect_number_check(5), false);
        CHECK_EQ(perfect_number_check(23), false);

    }
}