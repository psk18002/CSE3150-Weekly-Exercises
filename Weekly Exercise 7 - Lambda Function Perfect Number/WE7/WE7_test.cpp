#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "doctest.h"

auto is_perfect = [](int number) -> bool {

    int sum = 1;
    for (int i = 2; i < number-1; i++) {
        if (number % i == 0) {
            sum += i;
        }
    }

    return sum == number;
};

TEST_CASE("PERFECT NUMBER TESTING") {

    SUBCASE("TESTING WITH VARIOUS NUMBERS") {
       
        CHECK_EQ(is_perfect(6), true);
        CHECK_EQ(is_perfect(28), true);
        CHECK_EQ(is_perfect(496), true);
        CHECK_EQ(is_perfect(8128), true);
        CHECK_EQ(is_perfect(8), false);
        CHECK_EQ(is_perfect(5), false);
        CHECK_EQ(is_perfect(23), false);

    }
}