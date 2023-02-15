#include <stdlib.h>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

string belowTwenty[] ={"zero","one", "two", "three", "four", "five", "six", "seven", "eight", "nine",
                 "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen",
                 "seventeen", "eighteen", "nineteen"};

string belowHundred[]={"","", "twenty", "thirty", "forty", "fifty",
                "sixty", "seventy", "eighty", "ninety" };


string overThousand[]={"hundred", "thousand", "million", "billion" };


string number_to_words_below_hundred(int64_t num) {
    string result;

    if (num == 0) {
        return result;
    }else if (num < 20) {
        return belowTwenty[num];
    } else if (num < 100) {
        result = belowHundred [num/10];
        if (num%10 > 0) {
            result += " " + belowTwenty[num%10];
        }
    }else {
        result = belowTwenty[num/100] + " " + overThousand[0];
        if ( num % 100 > 0 ) {
            result += " " + number_to_words_below_hundred( num % 100 );
        }
    }
    return result;
}

string number_to_words(int64_t num) {
    if (num ==0 ) return belowTwenty[num];

    vector<string> ret;
    for( ;num > 0; num/=1000 ) {
        ret.push_back( number_to_words_below_hundred(num % 1000) );
    }

    string result=ret[0];
    for (int i=1; i<ret.size(); i++){
        if (ret[i].size() > 0 ){
            if ( result.size() > 0 ) {
                result = ret[i] + " " + overThousand[i] + " " + result;
            } else {
                result = ret[i] + " " + overThousand[i];
            }
        }

    }
    return result;
}

int main()
{

    int64_t num;
    cin>>num;
    if(num> 0)  cout<<number_to_words(num) <<  endl;
    else cout<<"minus "<<number_to_words(-num)<<endl;
    return 0;
}
