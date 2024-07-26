// APCS 105/10/29
// 2

#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;
int main()
{
    int group_number;
    int group_size;
    int input_numbers;
    int total;

    while (cin >> group_number >> group_size)
    {
        // cout << "group_number: " << group_number << endl;
        // cout << "group_size: " << group_size << endl;

        vector<vector<int>> group_big_list(group_number);

        for (int i = 0; i < group_number; i++)
        {
            vector<int> group_small_list(group_size);
            for (int n = 0; n < group_size; n++)
            {
                cin >> group_small_list[n];
            }
            sort(group_small_list.begin(), group_small_list.end());
            // small to big
            group_big_list[i] = group_small_list;
        }
        // 3 2
        // 1 5
        // 6 4
        // 1 1
        //[[2,3],[1,5],[4,6],[1,1]]

        int biggest_total = 0;
        vector<int> divisor(group_number);
        for (int i = 0; i < group_big_list.size(); i++)
        {
            biggest_total += group_big_list[i][group_size - 1];
            divisor[i] = group_big_list[i][group_size - 1];
            // cout<<group_big_list[i][group_size-1]<<endl;
        }
        cout << biggest_total << endl;

        bool hasValue = false;
        for (int i = 0; i < group_number; i++)
        {
            if (biggest_total % divisor[i] == 0)
            {
                if (hasValue)
                {
                    cout << " ";
                }
                cout << divisor[i];
                hasValue = true;
            }
        }
        if (!hasValue)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << endl;
        }
    }
}