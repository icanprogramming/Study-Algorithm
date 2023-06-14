// 10818번 : 최소, 최대
// 주소 : https://www.acmicpc.net/problem/10818

#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N = 0;
	cin >> N;

	int number = 0, minimum = 1'000'001, maximum = -1'000'001;
	for (int i = 0; i < N; i++)
	{
		cin >> number;

		if (number < minimum)
		{
			minimum = number;
		}

		if (maximum < number)
		{
			maximum = number;
		}
	}

	cout << minimum << ' ' << maximum;
}