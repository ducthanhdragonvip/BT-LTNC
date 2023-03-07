1.	#include<iostream>
using namespace std;
int a[1000];
bool check(int x,int y)
{
    for(int i=1;i<x;i++)
    if(a[i]==y || abs(i-x) == abs(a[i]-y))
        {return false;}
    return true;
}
void print(int n)
{
    for(int i=1;i<=n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
}
void Try(int i,int n)
{
    for(int j=1;j<=n;j++)
    {
        if(check(i,j))
        {
            a[i] = j;
            
            if(i==n)
            {
                print(n);    
            }
            Try(i+1,n);
            
        }
    }
}
int main() {
	int n;
    cin>>n;
    Try(1,n);
    return 0;
    
}