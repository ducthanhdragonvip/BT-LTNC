#include<iostream>
#include<cstring>

using namespace std;
void truncate(char a[], int n) 
{
    int length = strlen(a);
    if(length>n)
    {
        a[n] = '\0';
    }
}
int main()
{
    char a[] = "Hello there";
    truncate(a,5);
    cout<<a;
    return 0 ; 
}