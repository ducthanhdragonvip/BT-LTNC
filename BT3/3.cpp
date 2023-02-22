#include<iostream>
using namespace std;
bool check(int num)
{
    int temp,r,sum=0;
    for(temp=num;num!=0;num/=10)
    {
        r=num%10;
        sum=sum*10+r;
    } 
    if(temp==sum) return true;
    else return false;
}
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int a,b,tg=0;
        cin>>a>>b;
        for(int i=a;i<=b;i++)
        {
            if(check(i)) tg++; 
        }
        cout<<tg<<endl;
    }
    
}
