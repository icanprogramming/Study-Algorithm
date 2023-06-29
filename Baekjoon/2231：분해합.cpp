// 2231번 : 분해합
// 주소 : https://www.acmicpc.net/problem/2231

#include <iostream>

using namespace std;

int main()
{
	int N;
	cin >> N;

	for (int i = 1; i <= N; i++)
	{
		int digitSum = 0;
		for (int j = i; j != 0; j /= 10)
			digitSum += j % 10;

		if (i + digitSum == N)
		{
			cout << i;
			return 0;
		}
	}

	cout << 0;
}