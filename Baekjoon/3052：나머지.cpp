// 3052번 : 나머지
// 주소 : https://www.acmicpc.net/problem/3052

#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int number = 0, remainder[42] = { 0 };
	for (int i = 0; i < 10; i++)
	{
		cin >> number;

		remainder[number % 42]++;
	}

	int count = 0;
	for (int i = 0; i < 42; i++)
	{
		if (remainder[i] != 0)
		{
			count++;
		}
	}

	cout << count;
}