#include <iostream>
#include<math.h>
#include <cstdlib>
#include <ctime>
using namespace std;

int random(int n)
{
    int ran = rand()%n;
    return ran;
} 

int main(){
    srand(time(0));
    int n;
    cin>>n;
    cout<<random(n);
    return 0;

}
