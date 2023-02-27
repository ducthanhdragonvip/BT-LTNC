#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

bool threat(int x1, int y1,int x2, int y2)
{
    if(x1==x2)
        return true;
    if(y1==y2)
        return true;
    if(abs(x1-y1)==abs(x2-y2))
        return true;

    return false;
}

int main() {
	int n;
    cin>>n;
    bool check = false;
    int x[n],y[n];
    for(int i=0;i<n;i++)
        cin>>x[i]>>y[i];
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
        {
            if(threat(x[i],y[i],x[j],y[j]))
                check==true;
        }
    if(check) cout<<"yes";
    else cout<<"no";
}
