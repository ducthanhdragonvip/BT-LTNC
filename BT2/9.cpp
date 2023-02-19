#include<iostream>
using namespace std;
int main()
{
    int n,a=99999,b=99999;
    cin>>n;
    for(int i=0;i<n;++i)
    {
        int x,y;
        cin>>x>>y;
        a=min(a,x);
        b=min(b,y);
    }
    cout<<a*b;
    

}
