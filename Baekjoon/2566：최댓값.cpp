// 2566번 : 최댓값
// 주소 : https://www.acmicpc.net/problem/2566

#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int maximum = 0;
	int row = 0;
	int column = 0;
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			int number;
			cin >> number;

			if (maximum < number)
			{
				maximum = number;
				row = i;
				column = j;
			}
		}
	}

	cout << maximum << '\n' << row + 1 << ' ' << column + 1;
}