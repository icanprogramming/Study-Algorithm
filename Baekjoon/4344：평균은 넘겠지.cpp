// 4344번 : 평균은 넘겠지
// 주소 : https://www.acmicpc.net/problem/4344

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int C = 0;
	cin >> C;

	for (int i = 0; i < C; i++)
	{
		int numberOfStudent = 0;
		cin >> numberOfStudent;

		int studentScore[1'000] = { 0 };
		int totalScore = 0;
		for (int j = 0; j < numberOfStudent; j++)
		{
			int score = 0;
			cin >> score;

			studentScore[j] = score;
			totalScore += score;
		}

		int average = totalScore / numberOfStudent;
		int goodStudentCount = 0;
		for (int j = 0; j < numberOfStudent; j++)
		{
			if (average < studentScore[j])
			{
				goodStudentCount++;
			}
		}

		double goodStudentPercent = goodStudentCount / (double)numberOfStudent * 100;
		goodStudentPercent = round(goodStudentPercent * 1'000) / 1'000;

		cout << fixed;
		cout.precision(3);
		cout << goodStudentPercent << "%\n";
	}
}