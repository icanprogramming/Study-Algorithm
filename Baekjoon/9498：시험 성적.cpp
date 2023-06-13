// 9498번 : 시험 성적
// 주소 : https://www.acmicpc.net/problem/9498

#include <iostream>

using namespace std;

int main()
{
	int testScore = 0;
	cin >> testScore;

	if (90 <= testScore)
	{
		cout << 'A';
	}
	else if (80 <= testScore)
	{
		cout << 'B';
	}
	else if (70 <= testScore)
	{
		cout << 'C';
	}
	else if (60 <= testScore)
	{
		cout << 'D';
	}
	else
	{
		cout << 'F';
	}
}