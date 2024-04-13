#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "WE9.h"
#include "doctest.h"

using namespace std;

TEST_CASE("WE9 Tests") {
    SUBCASE("Point3d & Triangle3d Constructor(s) Tests") {
        
        //Point3d TESTS
        Point3d tp1;
        CHECK(tp1.get_x() == 0.0);
        CHECK(tp1.get_y() == 0.0);
        CHECK(tp1.get_z() == 0.0);

        Point3d tp2(1.0, 0.0, 2.4);
        CHECK(tp2.get_x() == 1.0);
        CHECK(tp2.get_y() == 0.0);
        CHECK(tp2.get_z() == 2.4);

        Point3d tp3(tp2);
        CHECK(tp3.get_x() == 1.0);
        CHECK(tp3.get_y() == 0.0);
        CHECK(tp3.get_z() == 2.4);

        tp3.set_x(2.1);
        CHECK(tp3.get_x() == 2.1);

        //Triangle3d TESTS
        Triangle3d t3d1;
        
        CHECK(t3d1.get_p1().get_x() == 0.0);
        CHECK(t3d1.get_p1().get_y() == 0.0);
        CHECK(t3d1.get_p1().get_z() == 0.0);

        Triangle3d t3d2(tp1, tp2, tp3);
        CHECK(t3d2.get_p1().get_x() == 0.0);
        CHECK(t3d2.get_p1().get_y() == 0.0);
        CHECK(t3d2.get_p1().get_z() == 0.0);

        CHECK(t3d2.get_p2().get_x() == 1.0);
        CHECK(t3d2.get_p2().get_y() == 0.0);
        CHECK(t3d2.get_p2().get_z() == 2.4);

        CHECK(t3d2.get_p3().get_x() == 2.1);
        CHECK(t3d2.get_p3().get_y() == 0.0);
        CHECK(t3d2.get_p3().get_z() == 2.4);

        Triangle3d t3d3(t3d2);
        CHECK(t3d2.get_p1().get_x() == 0.0);
        CHECK(t3d3.get_p1().get_y() == 0.0);
        CHECK(t3d3.get_p1().get_z() == 0.0);

        CHECK(t3d3.get_p2().get_x() == 1.0);
        CHECK(t3d3.get_p2().get_y() == 0.0);
        CHECK(t3d3.get_p2().get_z() == 2.4);

        CHECK(t3d3.get_p3().get_x() == 2.1);
        CHECK(t3d3.get_p3().get_y() == 0.0);
        CHECK(t3d3.get_p3().get_z() == 2.4);
    }

    SUBCASE("Triangle3d Member Functions Tests") {
        Point3d tp1;
        Point3d tp2(1.0, 2.0, 0.0);
        Point3d tp3(-1.0, 0.0, 0.0);
        
        Triangle3d t3d;
        CHECK(t3d.pointDistance(t3d.get_p1(), t3d.get_p2()) == 0.0);
        CHECK(t3d.pointDistance(t3d.get_p1(), t3d.get_p3()) == 0.0);
        CHECK(t3d.pointDistance(t3d.get_p2(), t3d.get_p3()) == 0.0);
        
        Triangle3d t3d1(tp1, tp2, tp3);
        CHECK(doctest::Approx(t3d1.pointDistance(tp1, tp2)).epsilon(0.01) == 2.23607);
        CHECK(doctest::Approx(t3d1.pointDistance(tp1, tp3)).epsilon(0.01) == 1.0);
        CHECK(doctest::Approx(t3d1.pointDistance(tp2, tp3)).epsilon(0.01) == 2.82843);
        CHECK(doctest::Approx(t3d1.triangleArea()).epsilon(0.01) == 0.574272);

    }

}