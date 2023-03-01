#include<iostream>
#include <math.h>
using namespace std;
  
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int x;
        cin>>x;
        int arr[x];
        if(x==1)
        {
            cout<<"Yes"<<endl;
            continue;
        }
        for(int i=0;i<x;i++)
            {
                cin>>arr[i];
            }
        int dau=0,cuoi=x-1;
        int tgdau=0,tgcuoi=0;
        while(dau != cuoi)
        {
            if(tgdau < tgcuoi)
            {
                tgdau += arr[dau];
                dau++;
            }
            else if(tgdau > tgcuoi)
            {
                tgcuoi += arr[cuoi];
                cuoi--;
            }
            else {
                tgdau += arr[dau];
                tgcuoi += arr[cuoi];
                cuoi--;
                dau++;
            }
        }
        if(tgdau == tgcuoi) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}
