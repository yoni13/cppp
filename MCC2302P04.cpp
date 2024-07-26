// APCS 105/10/39
// 1
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int main()
{
    int l1, l2, l3;
    while (cin >> l1 >> l2 >> l3)
    {
        vector<int> arr(3);
        arr[0] = l1;
        arr[1] = l2;
        arr[2] = l3;
        sort(arr.begin(), arr.end());
        cout << arr[0] << " " << arr[1] << " " << arr[2] << endl;

        if ((arr[0] + arr[1]) <= arr[2])
        {
            cout << "No" << endl;
        }
        else if (arr[0] * arr[0] + arr[1] * arr[1] == arr[2] * arr[2])
        {
            cout << "Right" << endl;
        }
        else if (arr[0] * arr[0] + arr[1] * arr[1] > arr[2] * arr[2])
        {
            cout << "Acute" << endl;
        }
        else
        {
            cout << "Obtuse" << endl;
        }
    }
}