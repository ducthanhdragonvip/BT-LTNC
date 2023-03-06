#include <iostream>
#include<math.h>

using namespace std;
void flr(double n)
{
    int a = floor(n);
    if(n-a >= 0.50) cout<<a+1<<endl;
    else cout<<a<<endl;
}

void rnd(double n)
{
    n = round(n);
    cout<<n<<endl;
}
int main(){
    int n;
    cin>>n;
    flr(n);
    rnd(n);

    return 0;

}
