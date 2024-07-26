// APCS 106/03/04
// 1
// Its unfinished because of q3
// fuck you


#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    long long int input_num;
    cin >> input_num;

    string num_in_str = to_string(input_num);
    long long int num_length = num_in_str.length();
    vector<long long int> num_list(num_length);

    for (long long int i = 0; i < num_length; i++)
    {
        num_list[i] = num_in_str[i] - '0';
        // cout << num_list[i] << endl;
    }

    long long int even_total = 0;
    long long int odd_total = 0;

    for (long long int i = 0; i < num_length; i++)
    {
        if (i % 2 == 0)
        {
            even_total += num_list[num_length - 1 - i];
        }
        else
        {
            odd_total += num_list[num_length - 1 - i];
        }
    }
    cout << abs(even_total - odd_total) << endl;

    // abs |num|
}