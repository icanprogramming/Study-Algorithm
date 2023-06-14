// 1546번 : 평균
// 주소 : https://www.acmicpc.net/problem/1546

#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N = 0;
	cin >> N;

	int score[1'000] = { 0 };
	float M = 0;
	for (int i = 0; i < N; i++)
	{
		cin >> score[i];

		if (M < score[i])
		{
			M = score[i];
		}
	}

	float totalScore = 0;
	for (int i = 0; i < N; i++)
	{
		totalScore += (score[i] / M) * 100;
	}

	cout << totalScore / N;
}