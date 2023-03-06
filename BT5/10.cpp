#include <iostream>
#include<math.h>
#include <cstdlib>
#include <ctime>
using namespace std;

int random(int n)
{
    n =rand()%49;
}

int main(){
    srand(time(0));
    int n;
    random(n);
    for(int i=0;i<=n;i++)
        for(j = i+1;j<=n;j++)
            for(int k=j+1;k<=n;k++)
            {
                if(a[i]+a[j]+a[k] % 25 == 0)
                    cout<<a[i]<<" "<<a[j]<<" "<<a[k]<<endl;
            }
    return 0;

}
