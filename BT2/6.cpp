#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=i;j<=n;j++)
        {
            cout<<j<<" ";
        }
        for(int h=1;h<i;h++)
            cout<<h<<" ";
        cout<<endl;

    }
    return 0;
}