#include<iostream>
#include <iomanip>
using namespace std;
int main()
{
    float no;
    cout<<"Nhap so tien no ";
    cin>>no;
    string n="Tong so no: ";
    for(int i=0;i<12;++i)
    {
        no=no*102/100;
    }
    cout<<n<<fixed<<setprecision(0)<<no;
    
    return 0;
}
