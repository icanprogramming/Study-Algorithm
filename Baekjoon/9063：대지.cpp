// 9063번 : 대지
// 주소 : https://www.acmicpc.net/problem/9063

#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	int minPoints[2] = { 10'001, 10'001 };
	int maxPoints[2] = { -10'001, -10'001 };
	for (int i = 0; i < N; i++)
	{
		int points[2];
		cin >> points[0] >> points[1];

		for (int j = 0; j < 2; j++)
		{
			if (points[j] < minPoints[j])
				minPoints[j] = points[j];
		}

		for (int j = 0; j < 2; j++)
		{
			if (maxPoints[j] < points[j])
				maxPoints[j] = points[j];
		}
	}
	
	cout << (maxPoints[0] - minPoints[0]) * (maxPoints[1] - minPoints[1]);
}