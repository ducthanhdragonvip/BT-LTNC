#include <iostream>
using namespace std;

struct Point {
    float x;
    float y;
};

Point mid_point(const Point p1,const Point p2)
{
    Point s;
    s.x = (p1.x+p2.x)/2;
    s.y = (p1.y + p2.y)/2;
    return s;
}
int main()
{
    Point p1={2,3};
    Point p2 = {3,4};
    Point s = mid_point(p1,p2);
    cout<<s.x<<" "<<s.y;
}