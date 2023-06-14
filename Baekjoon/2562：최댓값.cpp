// 2562번 : 최댓값
// 주소 : https://www.acmicpc.net/problem/2562

#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int number = 0, maximum = 0, sequence = 0;
	for (int i = 1; i <= 9; i++)
	{
		cin >> number;

		if (maximum < number)
		{
			maximum = number;
			sequence = i;
		}
	}

	cout << maximum << '\n' << sequence;
}