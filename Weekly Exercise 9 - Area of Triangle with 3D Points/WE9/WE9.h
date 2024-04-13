#ifndef _WE9_H
#define _WE9_H

#include <iostream>

struct Point3d {
    private:
        double x;
        double y;
        double z;
    public:
        Point3d() { x = y = z = 0.0; }
        Point3d(const Point3d & p3d) : x(p3d.x), y(p3d.y), z(p3d.z) {};
        Point3d(double x, double y, double z) : x(x), y(y), z(z) {};
        ~Point3d() {};

        double get_x() const { return x; }
        double get_y() const { return y; }
        double get_z() const { return z; }

        void set_x(double x_val) { x = x_val; }
        void set_y(double y_val) { y = y_val; }
        void set_z(double z_val) { z = z_val; }
};

struct Triangle3d {

    Triangle3d() {};
    Triangle3d(const Triangle3d & t3d) : p1(t3d.p1), p2(t3d.p2), p3(t3d.p3) {};
    Triangle3d(Point3d p1,Point3d p2, Point3d p3) : p1(p1), p2(p2), p3(p3) {};
    ~Triangle3d() {};

private:
    Point3d p1;
    Point3d p2;
    Point3d p3;

public:
    Point3d & get_p1() { return p1; }
    Point3d & get_p2() { return p2; }
    Point3d & get_p3() { return p3; }

    double pointDistance(const Point3d left, const Point3d right);
    double triangleArea();

};

#endif