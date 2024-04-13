#include "WE9.h"

using namespace std;

int main() {
    
    Point3d p1(0.0, 0.0, 0.0);
    Point3d p2(1.0, 2.0, 0.0);
    Point3d p3(-1.0, 0.0, 0.0);

    Triangle3d t3d(p1, p2, p3);
    double D12 = t3d.pointDistance(p1, p2);
    double D13 = t3d.pointDistance(p1, p3);
    double D23 = t3d.pointDistance(p2, p3);
    double s = (D12 + D13 + D23) / 2;
    cout << "D12: " << D12 << "; D13: " << D13 << "; D23: " << D23 << endl;
    cout << "S = " << s << endl;
    cout << "Area of Triangle: " << t3d.triangleArea() << endl;

    return 0;
}