// 2798번 : 블랙잭
// 주소 : https://www.acmicpc.net/problem/2798

#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M;
	cin >> N >> M;

	int cards[100] = { 0 };
	for (int i = 0; i < N; i++)
		cin >> cards[i];

	int endIndexes[3] = { N - 2, N - 1, N };
	int approximateValue = 0;
	for (int i = 0; i < endIndexes[0]; i++)
	{
		for (int j = i + 1; j < endIndexes[1]; j++)
		{
			for (int k = j + 1; k < endIndexes[2]; k++)
			{
				int sum = cards[i] + cards[j] + cards[k];
				if (M < sum)
					continue;
				else
				{
					if (approximateValue < sum)
						approximateValue = sum;
				}
			}
		}
	}

	cout << approximateValue;
}