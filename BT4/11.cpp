#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

bool check(string a,string b)
{
    if(a.length() != b.length()) return false;
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    int n=a.length();
    for(int i=0;i<n;i++)
    {
        if(a[i]!=b[i])
            return false;
    }
    return true;
}

int main() {
	int n;
    cin>>n;
    vector<string> res;
    for(int i=0;i<n;i++)
    {
        string str;
        cin>>str;
        res.push_back(str);
    }
    for(int i=0;i<n-1;i++)
        for(int j=i+1;j<n;j++)
        {
            if(check(res[i],res[j]))
            {
                cout<<res[i].length()<<endl;
                cout<<res[i][res[i].length()/2]<<endl;
            }
        }
}
