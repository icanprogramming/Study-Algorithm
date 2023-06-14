// 2438번 : 별 찍기 - 1
// 주소 : https://www.acmicpc.net/problem/2438

#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N = 0;
	cin >> N;

	char star = '*';
	for (int i = 1; i <= N; i++)
	{
		for (int j = N - i; j < N; j++)
		{
			cout << star;
		}

		cout << '\n';
	}
}