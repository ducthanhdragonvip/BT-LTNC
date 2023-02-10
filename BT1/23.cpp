#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    int tg=a+b;
    int c=abs(a-b);
    cout<<(tg+c)/2;
    return 0;
}
