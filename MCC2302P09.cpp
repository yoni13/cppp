// APCS 106/03/04
// 1

#include <iostream>
//#include <algorithm>
//#include <vector>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    string input_num;
    while (cin >> input_num)
    {

        string num_in_str = input_num;
        long long int num_length = num_in_str.length();

        long long int total = 0;

        for (int i = 0; i < num_length; i++)
        {
            if (i % 2 == 0)
            {
                int tonumber = num_in_str[i] -'0' ;
                total += tonumber;
            }
            else
            {
                int tonumber = num_in_str[i] -'0' ;
                total -= tonumber;
            }
        }
        cout<<abs(total)<<endl;

        // abs |num|
    }
}