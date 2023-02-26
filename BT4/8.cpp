#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main() {
	int n;
    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++)
        cin>>a[i]>>b[i];
    sort(a,a+n);
    sort(b,b+n);
    for(int i=0;i<n;i++)
        cout<<a[i]<<" "<<b[i]<<endl;
    return 0;
}
