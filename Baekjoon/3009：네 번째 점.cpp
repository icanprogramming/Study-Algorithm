// 3009번 : 네 번째 점
// 주소 : https://www.acmicpc.net/problem/3009

#include <iostream>

using namespace std;

int main()
{
	int x[3], y[3];
	int inputCountsX[1'001] = { 0 };
	int inputCountsY[1'001] = { 0 };
	for (int i = 0; i < 3; i++)
	{
		cin >> x[i] >> y[i];

		inputCountsX[x[i]]++;
		inputCountsY[y[i]]++;
	}

	int fourthX, fourthY;
	for (int i = 0; i < 3; i++)
	{
		if (inputCountsX[x[i]] == 1)
			fourthX = x[i];
		if (inputCountsY[y[i]] == 1)
			fourthY = y[i];
	}

	cout << fourthX << ' ' << fourthY;
}