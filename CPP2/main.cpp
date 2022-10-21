#include <iostream>
#include <math.h>
using namespace std;

struct Point{
    double x;
    double y;
    Point(){
        x = 0;
        y = 0;
    }
    Point(double ax, double ay){
        x = ax;
        y = ay;
    }
    void output(){
        cout << "OUTPUT X AND Y COORDINATES OF A POINT" << endl;
        cout << "x = " << x << "; y = " << y << endl;
    }
    double distanceToPoint(Point b){
        return sqrt((b.x - x) * (b.x - x) + (b.y - y) * (b.y - y));
    }
};
int main()
{
    Point A(7.2, 10.15);
    Point B(3.2, 5.4);
    cout << "AB = " << A.distanceToPoint(B);
    return 0;
}
