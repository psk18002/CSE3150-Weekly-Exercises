#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "WE10.h"
#include "doctest.h"

TEST_CASE("TESTING FUNCTIONS") {
    Hybrid hybrid("Prius");
    CHECK(hybrid.getName() == "Prius");
    CHECK(hybrid.getPG() == 0.8);
    CHECK(doctest::Approx(hybrid.electricMilesPerDollar()) == 4.16667);
    CHECK(doctest::Approx(hybrid.gasolineMilesPerDollar()) == 0.290698);
    CHECK(doctest::Approx(hybrid.costOfFuel()) == 2.8);
    CHECK(doctest::Approx(hybrid.Electric::costOfFuel()) == 0.24);
    CHECK(hybrid.Gasoline::costOfFuel() == 3.44);
    CHECK(doctest::Approx(hybrid.costOfTrip(100.0)).epsilon(0.1) == 6.36);
    CHECK(doctest::Approx(hybrid.Electric::costOfTrip(100.0)).epsilon(0.1) == 0.23);
    CHECK(doctest::Approx(hybrid.Gasoline::costOfTrip(100.0)).epsilon(0.1) == 10.75);
    
}