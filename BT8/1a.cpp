#include<iostream>
#include<cstring>

using namespace std;
void reverse(char a[])
{
    int length = strlen(a);
    for(int i=0;i<length/2;i++)
    {
        char tmp = a[i];
        a[i] = a[length -i-1];
        a[length - i -1] =tmp;
    }
}


int main()
{
    char a[] = "Hello there";
    reverse(a);
    cout<<a;
    return 0 ; 
}