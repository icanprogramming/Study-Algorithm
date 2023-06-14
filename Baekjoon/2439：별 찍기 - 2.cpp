// 2439번 : 별 찍기 - 2
// 주소 : https://www.acmicpc.net/problem/2439

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
		for (int j = i; j < N; j++)
		{
			cout << ' ';
		}

		for (int k = N - i; k < N; k++)
		{
			cout << star;
		}

		cout << '\n';
	}
}