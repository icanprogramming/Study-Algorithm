// 25206번 : 너의 평점은
// 주소 : https://www.acmicpc.net/problem/25206

#include <iostream>

using namespace std;

int main()
{
	double creditTotal = 0;
	double subjectScoreTotal = 0;
	for (int i = 0; i < 20; i++)
	{
		char subject[51];
		double credit;
		char grade[3];
		cin >> subject >> credit >> grade;

		double subjectScore = 0;
		switch (grade[0])
		{
		case 'A':
			subjectScore = 4;
			break;

		case 'B':
			subjectScore = 3;
			break;

		case 'C':
			subjectScore = 2;
			break;

		case 'D':
			subjectScore = 1;
			break;

		case 'F':
			creditTotal += credit;
			continue;
			break;

		case 'P':
			continue;
			break;
		}

		if (grade[1] == '+')
			subjectScore += 0.5;

		creditTotal += credit;
		subjectScoreTotal += credit * subjectScore;
	}

	cout << fixed;
	cout.precision(4);
	if (0 < creditTotal)
	{
		cout << subjectScoreTotal / creditTotal;
	}
	else
	{
		cout << 0;
	}
}