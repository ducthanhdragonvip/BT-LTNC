#include<iostream>

using namespace std;

struct Point {
    float x;
    float y;
};

void print(Point a)
{
	cout<<"("<<a.x<<","<<a.y<<")";
}

int main()
{
	Point p = {2,4};
	print(p);
}