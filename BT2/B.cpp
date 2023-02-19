#include<iostream>
using namespace std;
int main()
{
    float luongThang;
    cout<<"Nhap so tien luong 1 thang: ";
    cin>>luongThang;
    string n="So tien nhan sau thue: ";
    float baoHiem=luongThang*9/100;
    float tienChiuThue=luongThang-baoHiem;
    if(tienChiuThue<=1000000) cout<<n<<tienChiuThue;
    else if(tienChiuThue>1000000 && tienChiuThue<=1500000) cout<<n<<fixed<<1000000+(tienChiuThue-1000000)*90/100;
    else if(tienChiuThue>1500000 && tienChiuThue<=2000000) cout<<n<<fixed<<1000000+450000+(tienChiuThue-1500000)*85/100;
    else if(tienChiuThue>2000000) cout<<n<<fixed<<1000000+450000+425000+(tienChiuThue-2000000)*80/100;
    cout<<endl;
    
    return 0;
}
