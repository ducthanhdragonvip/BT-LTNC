#include <iostream>
#include <string>
using namespace std;

int main()
{
    int i=1;
    string time = "am";
    cout<<"12 midnight"<<endl;
    while(true)
    {
        if(i==12)
        {
            cout<<i<<" noon"<<endl;
            i=1;
            time="pm";

        }
        else if(i==11 && time=="pm")
        {
            cout<<"11pm";
            break;
        }
        else
        {
            cout<<i<<time<<endl;
            i++;
        }
    }
}
