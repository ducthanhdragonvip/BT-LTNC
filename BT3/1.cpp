#include<iostream>
#include<map>
using namespace std;
int main()
{
    int check =0;
    map<int ,int> mp;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        mp[x]++;
    }
    for(auto i:mp )
    {
        if(i.second >=2) check=1;
    }
    if(check==1) cout<<"Yes";
    else cout<<"No";
}
