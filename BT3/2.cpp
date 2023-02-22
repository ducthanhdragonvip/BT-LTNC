#include<iostream>
#include<string>
using namespace std;

bool check(string n)
{
    int size=n.length();
    for(int i=0;i<size/2+1;++i)
    {
        if(n[i]!=n[size-i-1])
            return false;
    }
    return true;
}
int main()
{
    string n;
    cin>>n;
    if(check(n)) cout<<"True";
    else cout<<"False";
    
}
