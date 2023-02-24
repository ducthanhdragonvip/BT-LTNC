#include<iostream>
using namespace std;

int main()
{
    int hang,cot;
    cin>>hang>>cot;
    char a[hang][cot];
    for(int i=0;i<hang;++i)
        for(int j=0;j<cot;++j)
            cin>>a[i][j];

    for(int i=0;i<hang;++i)
        for(int j=0;j<cot;++j)
        {
            int dem=0;
            if(a[i][j]=='.')
            {
                if(a[i-1][j-1]=='*')dem++;
                if(a[i-1][j]=='*')dem++;
                if(a[i-1][j+1]=='*')dem++;
                if(a[i][j-1]=='*')dem++;
                if(a[i][j+1]=='*')dem++;
                if(a[i+1][j-1]=='*')dem++;
                if(a[i+1][j]=='*')dem++;
                if(a[i+1][j+1]=='*')dem++;
                a[i][j]=dem+48;
            }
        }

    for(int i=0;i<hang;++i)
        {for(int j=0;j<cot;++j)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;}
}
