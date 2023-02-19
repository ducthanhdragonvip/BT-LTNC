#include<bits/stdc++.h>
using namespace std;
int p[9999];
long long f[3][9999];
char c[9999];
string s;
int main()
{
    ios_base::sync_with_stdio(false);

    cin>>s;
    int n=s.length();
    int index=0;
    for(int i=0;i<n;++i)
    {
        if(s[i]==s[i+1] && 1+i<n)
        {
            p[1+index]++;
        }
        else
        {
            c[1 + index] = s[i], p[1 + index++]++;
        }
    }
    n=index;
    f[0][0]=1LL;
    for(int i=0;i<n;++i)
    {
        f[0][i + 1] += f[0][i];
        f[1][i + 1] += f[1][i];
        f[2][i + 1] += f[2][i];
        if (p[i+1]>=2)
    {
        f[2][i+1] += f[0][i];
    }
    if (p[i + 1] >= 1) {
            if (i + 2 <= n && p[i + 1] == 1 && c[i] == c[i + 2]) {
                f[2][i + 2] -= 1;
            }
            f[1][i + 1] += f[0][i];
            f[2][i + 1] += f[1][i];
        }
    }


    cout << f[2][n] << endl;


}
