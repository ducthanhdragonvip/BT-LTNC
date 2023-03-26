#include<iostream>
#include<cstring>

using namespace std;
void trim_left(char a[])
{
    int i=0,j=0;
    while(a[i]==' ')
    {
        i++;
    }
    while(a[i] != '\0')
    {
        a[j]=a[i];
        i++;
        j++;
    }
    a[j]='\0';
    
}
int main()
{
    char a[] = "     heh";
    trim_left(a);
    cout<<a;
    return 0 ; 
}