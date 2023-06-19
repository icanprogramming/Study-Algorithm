// 2738번 : 행렬 덧셈
// 주소 : https://www.acmicpc.net/problem/2738

#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M;
	cin >> N >> M;

	int sum[100][100] = { 0 };
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < N; j++)
		{
			for (int k = 0; k < M; k++)
			{
				int integer;
				cin >> integer;

				sum[j][k] += integer;
			}
		}
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cout << sum[i][j] << ' ';
		}

		cout << '\n';
	}
}