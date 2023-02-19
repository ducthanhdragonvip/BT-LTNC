#include<iostream>
using namespace std;
int main()
{
    int soGio;
    cout<<"Nhap so gio lam viec: ";
    cin>>soGio;
    string n="Luong thang: ";
    if(soGio<=100) cout<<n<<soGio*12000<<"đ";
    else if(soGio>100 && soGio<=150)
        cout<<n<<100*12000+(soGio-100)*16000<<"đ";
    else if(soGio>150 && soGio<=200)
        cout<<n<<(soGio-150)*20000+100*12000+50*16000<<"đ";
    else if(soGio>200)
        cout<<n<<100*12000+50*16000+50*20000+(soGio-200)*25000<<"đ";
    return 0;
}
