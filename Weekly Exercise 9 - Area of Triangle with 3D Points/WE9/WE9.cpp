#include "WE9.h"

#include <iostream>
#include <cmath>

using namespace std;

std::ostream & operator <<(std::ostream &os, Point3d & p3d) {
    os << "x = " << p3d.get_x() << " y = " << p3d.get_y() << " z = " << p3d.get_z() << endl;
    return os;
};


std::ostream & operator<<(std::ostream &os, Triangle3d & p3d) {    
    os << "x = " << p3d.get_p1()
       << " y = " << p3d.get_p2()
       << " z = " << p3d.get_p3() << endl;

    return os;
};

double square(double value) { return value * value; }

double Triangle3d::pointDistance(Point3d left, Point3d right) {
    double radicand = square(left.get_x() - right.get_x()) + square(left.get_y() - right.get_y()) + square(left.get_z() - right.get_z());

    return sqrt(radicand);
}

double Triangle3d::triangleArea() {
    double dist12 = pointDistance(p1, p2);
    double dist13 = pointDistance(p1, p3);
    double dist23 = pointDistance(p2, p3);
    double s = (dist12 + dist13 + dist23) / 2;

    return sqrt((s - dist12) * (s - dist13) * (s - dist23));
}
