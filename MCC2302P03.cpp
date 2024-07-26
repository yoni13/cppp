// APCS 105/3/5 
// 實作1
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;
int main()
{
	int howmany;
	while (cin >> howmany)
	{
		vector<int> score_list(howmany);

		for (int i = 0; i < howmany; i++)
		{
			int current_num;
			cin >> current_num;
			score_list[i] = current_num;
		}

		sort(score_list.begin(), score_list.end());
		for (int i = 0; i < howmany; i++)
		{
			cout << score_list[i];
			if (i == (howmany - 1))
			{
				cout << endl;
			}
			else
			{
				cout << " ";
			}
		}

		// 2
		// cout<<"2 starts";
		if (score_list[0] >= 60)
		{
			cout << "best case" << endl;
		}
		else
		{
			for (int i = howmany - 1; i >= 0; i--)
			{
				if (score_list[i] >= 60)
				{
					continue;
				}
				else
				{
					cout << score_list[i] << endl;
					break;
				}
			}
		}
		// 3 starts here
		// cout<<"3 starts";
		if (score_list[howmany - 1] < 60)
		{
			cout << "worst case" << endl;
		}
		else
		{
			for (int i = 0; i < howmany; i++)
			{
				if (score_list[i] >= 60)
				{
					cout << score_list[i] << endl;
					break;
				}
			}
		}
	}
}
