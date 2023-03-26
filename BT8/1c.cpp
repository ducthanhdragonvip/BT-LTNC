#include<iostream>
#include<cstring>

using namespace std;
void pad_right(char a[], int n)
{
    int length = strlen(a);
    if(length<n)
    {
        for(int i=length;i<n;i++)
        {
            a[i] = ' ';
        }
    }
}


int main()
{
    char a[] = "Hello there";
    pad_right(a,19);
    cout<<a;
    return 0 ; 
}