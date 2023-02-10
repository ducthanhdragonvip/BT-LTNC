#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    int x1,x2,y1,y2;
    cin>>x1>>y1>>x2>>y2;
    float dis;
    dis=sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
    cout<<dis;
    return 0;
}
