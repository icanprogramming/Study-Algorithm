// 10813번 : 공 바꾸기
// 주소 : https://www.acmicpc.net/problem/10813

#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N = 0, M = 0;
	cin >> N >> M;

	int basket[101] = { 0 };
	for (int i = 1; i <= N; i++)
	{
		basket[i] = i;
	}

	int number, i = 0, j = 0;
	for (int count = 0; count < M; count++)
	{
		cin >> i >> j;

		number = basket[i];
		basket[i] = basket[j];
		basket[j] = number;
	}

	for (int i = 1; i <= N; i++)
	{
		cout << basket[i] << ' ';
	}
}