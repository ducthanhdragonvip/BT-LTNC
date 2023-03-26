#include<iostream>
#include<cstring>

using namespace std;
bool is_palindrome(char a[])
{
    int length = strlen(a);
    for(int i=0;i<length/2;i++)
    {
        if(a[i] != a[length-i-1])
            return false;
    }
    return true;
}
int main()
{
    char a[] = "heh";
    cout<<is_palindrome(a);
    return 0 ; 
}