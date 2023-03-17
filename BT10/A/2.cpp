#include <iostream>
using namespace std;

struct Point {
    float x;
    float y;
};

void truyen_tham_tri(Point p)
{
    cout<<"tham tri: "<<&p<<endl;
}

void truyen_tham_chieu(Point &p)
{
    cout<<"tham so: "<<&p<<endl;
}

int main()
{
    Point p={3,4};
    cout<<&p<<endl;
    truyen_tham_tri(p);
    truyen_tham_chieu(p);
}