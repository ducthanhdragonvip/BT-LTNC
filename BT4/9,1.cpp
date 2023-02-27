#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main() {
	int n,tgx=0,tgy=0,tgc=0;
    bool stop = false;
    cin>>n;
    int a[n][n]= {0};
    for(int i=0;i<n;i++)
    {
        int x,y;
       	cin>>x>>y;
        a[x][y]=1;
    }
    for(int i=0;(i<n)&& !stop;i++ )
    {
        for(int j=0;(j<n)&& !stop;j++ )
        {
            if(a[i][j]==1)  tgx++;
            if(tgx>=2)
            {
                cout<<"Yes";
                stop=true;
            }
            if(a[j][i]==1)
                tgy++;
            if(tgy>=2)
            {
                cout<<"Yes";
                stop=true;
            }
        }
        tgx=0;tgy=0;
    }
    if(stop == true) cout<<"No";
}
// loi chua xet truong hop cheo nhau
