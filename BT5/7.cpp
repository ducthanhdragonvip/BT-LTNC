#include <iostream>

using namespace std;
void draw(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=i;j<n;j++)
            cout<<" ";
        for(int j=1;j<=(2*i-1);j++)
            cout<<"*";
        cout<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    draw(n);
    return 0;

}
