#include <iostream>
#include<math.h>
#include <cstdlib>
#include <ctime>
using namespace std;

void decToBinary(int n)
{
    int binary[1000];
    int i=0;
    while(n>0)
    {
        binary[i] = n%2;
        n=n/2;
        i++;
    }
    for(int j=i-1;j>0;j--)
        cout<<binary[i];
    cout<<endl;
}

void BianryToDec(int n)
{
    int dec=0;
    int j=0;
    while(n>0)
    {
        dec += (n%10)*pow(2,j);
        n/=10;
        j++;

    }
    cout<<j<<endl;
}

int main(){
    int n;
    cin>>n;
    decToBinary(n);
    BianryToDec(n);
    return 0;

}
