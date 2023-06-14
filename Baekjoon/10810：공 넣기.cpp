// 10810번 : 공 넣기
// 주소 : https://www.acmicpc.net/problem/10810

#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N = 0, M = 0;
	cin >> N >> M;

	int i = 0, j = 0, k = 0, basket[101] = { 0 };
	for (int count = 0; count < M; count++)
	{
		cin >> i >> j >> k;

		while (i <= j)
		{
			basket[i] = k;
			i++;
		}
	}

	for (int i = 1; i <= N; i++)
	{
		cout << basket[i] << ' ';
	}
}