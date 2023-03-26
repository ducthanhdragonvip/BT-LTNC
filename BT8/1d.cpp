#include<iostream>
#include<cstring>

using namespace std;
void pad_left(char a[], int n)
{
    int length = strlen(a);
    if(length<n)
    {
        for(int i = n;i>=n-length;i--)
        {
            a[i]=a[i-n+length];
        }
        for(int i=0;i<n-length;i++)
        {
            a[i]=' ';
        }
    }
}
int main()
{
    char a[] = "Hello there";
    pad_left(a,20);
    cout<<a;
    return 0 ; 
}