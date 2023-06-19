// 2720번 : 세탁소 사장 동혁
// 주소 : https://www.acmicpc.net/problem/2720

#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T;
	cin >> T;

	int changeType[4] = { 25, 10, 5, 1 };
	for (int i = 0; i < T; i++)
	{
		int change;
		cin >> change;

		for (int j = 0; j < 4; j++)
		{
			int numberOfChange = change / changeType[j];
			change %= changeType[j];

			cout << numberOfChange << ' ';
		}

		cout << '\n';
	}
}