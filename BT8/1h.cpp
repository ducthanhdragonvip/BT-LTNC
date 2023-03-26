#include<iostream>
#include<cstring>

using namespace std;
void trim_right(char a[])
{
    int i=0,j=0;
    int length = strlen(a);
    for(int i=0;i<length-1;i++)
    {
        if(a[i]==' ')
        {
            a[i]='\0';
            break;
        }
    }
}
int main()
{
    char a[] = "heh        ";
    trim_right(a);
    cout<<a;
    return 0 ; 
}