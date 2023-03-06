#include <iostream>
#include<math.h>
#include <cstdlib>
#include <ctime>
using namespace std;

int k[1000];
int n[1000];
int toHop(int k,int n)
{
    if (k == 0 || k == n) return 1;
    if (k == 1) return n;
    return toHop(k - 1, n - 1) + toHop(k, n - 1);
}

int kiemTra(int k,int n)
{
    if(n>=1 && n<=20 && k>=0 && k<=n)
        return 1;
    else return 0;
}
void nhapKN(int k[], int n[], int *soPhanTu)
{
    for(int i=0;i< &soPhanTu;i++)
    {
        cin>>k[i]>>n[i];
        if(k[i] == -1 && n[i] == -1) break;
    }
}


int main(){
    int soPhanTu = 99;
    nhapKN(k,n,&soPhanTu);
    for (int i = 0; i < t; i++)
	{
		if (k[i] == -1 && n[i] == -1) break;
		if (kiemTra(k[i], n[i])) cout << tohop(k[i], n[i]) << endl;
	}
}
    return 0;

}
