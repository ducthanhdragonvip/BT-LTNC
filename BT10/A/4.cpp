#include <iostream>
using namespace std;

struct Point {
    float x;
    float y;
};

int main()
{
    Point p1={2,3};
    cout<<&p1<<endl;
    cout<<&p1.x<<" "<<&p1.y;
}