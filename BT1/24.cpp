#include <iostream>
#include <cstdlib>
using namespace std;
/*kiem tra nam nhuan */
bool check_leap_year(int year)
{
    if (year % 400 == 0) {
    return true;
  }

    else if (year % 100 == 0) {
    return false;
  }
    else if (year % 4 == 0) {
    return true;
  }
    else {
    return false;
  }
}
/*) thuat toan tren 
https://www.geeksforgeeks.org/find-day-of-the-week-for-a-given-date/
*/
int dayofweek(int d,int m,int y)
{
    static int t[] = { 0,3,3,6,1,4,6,2,5,0,3,5 };
    int cen;
    if((y/100)==16) {cen = 6;}
    else  if((y/100)==17) {cen = 4;}
    else  if((y/100)==18) {cen = 2;}
    else  if((y/100)==19) {cen = 0;}
    else  if((y/100)==20) {cen = 6;}

    y = y%100;
    int y1 = y/4;
    int sum = y1 + y + d + t[m-1] + cen ;
    if(check_leap_year(y)) {return sum%7-1;}
    else{
        return sum%7;
    }
}

int main()
{
    string dayarr[]={"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    int day,month,year;
    cin>>day>>month>>year;
    int kp;
    kp = dayofweek(day,month,year);
    cout<<dayarr[kp];
    return 0;
}
