#include<iostream>
using namespace std;
int main()
{
    int i=1,a[999];
    while(true)
    {
        cin>>a[i];
        if(a[i]!=a[i-1] && a[i]!=-1) 
        {
            cout<<a[i]<<" ";
            i++;
        }
        else if(a[i]==-1) 
            {
                cout<<-1;
                break;
                return 0;
            }
}
}
