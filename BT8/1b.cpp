#include<iostream>
#include<cstring>

using namespace std;
void delete_char(char a[], char c) 
{
    int j=0;
    int length = strlen(a);
    for(int i=0;i<length;i++)
    {
        if(a[i]!=c)
            {a[j] = a[i];
            j++;}
    }
    a[j] = '\0';
}


int main()
{
    char a[] = "Hello there";
    delete_char(a,'e');
    cout<<a;
    return 0 ; 
}