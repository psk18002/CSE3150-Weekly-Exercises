#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "doctest.h"
#include "WE5.h"

TEST_CASE("TESTING STUDENT MEMBER FUNCTIONS") {

    Student test_st;

    SUBCASE("TESTING OVERALLGRADE") {
        vector<int> hws;
        hws.push_back(95);
        hws.push_back(80);
        hws.push_back(97);
        hws.push_back(84);
    
        Student test_st(9999, "Example", 90, 80, hws);
        CHECK_EQ(test_st.overallGrade(), 86);
    }


}