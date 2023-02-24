#include<iostream>
using namespace std;

int main() {
	int n,tmp=1;
    int newi,newj;
    cin>>n;
    int a[n][n];
    //set square to contain all zero
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            a[i][j]=0;
    //
    int i=0,j=n/2;
    for(int tmp=1;tmp<=n*n;tmp++)
    {
        a[i][j]=tmp;
        newi=(i+2)%n;
        newj=(j+1)%n;
        if(a[newi][newj]==0)
        {
            i=newi;
            j=newj;
        }
        else{
            i=(i+1+n)%n;
        }
    }
    for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
                cout<<a[i][j]<<" ";
            cout<<endl;}
}
