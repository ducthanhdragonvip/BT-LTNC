#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    while(true)
    {
        int n;
        cin>>n;
        n = (n % 5 == 0) ? n/5 : -1;
        cout<<n;
        if(n==-1) {break;}

    }
}
