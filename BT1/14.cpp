#include <bits/stdc++.h>

using namespace std;

int main()
{
    int the1,the2,chon;
    //random 2 so//
    srand(time(0));
    the1=rand()%100 ;
    the2=rand()%100 ;
    //xem 1 the neu the day >=51 thi chon the day ko thi chon the con lai//
    int xem=the1;
    if(xem>=51)
    {
        chon=xem;
        cout<<"chon:"<<chon<<endl;
        cout<<"the con lai:"<<the2<<endl;
        if(chon>the2) cout<<"Win";
        else cout<<"Lose";
    }
    else
    {
        chon=the2;
        cout<<"chon:"<<chon<<endl;
        cout<<"the con lai:"<<the1<<endl;
        if(chon>the1) cout<<"Win";
        else cout<<"Lose";

    }

    return 0;
}
