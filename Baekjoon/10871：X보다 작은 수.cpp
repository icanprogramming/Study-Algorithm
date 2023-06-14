// 10871번 : X보다 작은 수
// 주소 : https://www.acmicpc.net/problem/10871

#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N = 0, X = 0;
	cin >> N >> X;

	int number = 0;
	for (int i = 0; i < N; i++)
	{
		cin >> number;

		if (number < X)
		{
			cout << number << ' ';
		}
	}
}