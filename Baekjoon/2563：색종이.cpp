// 2563번 : 색종이
// 주소 : https://www.acmicpc.net/problem/2563

#include <iostream>

using namespace std;

int main()
{
	int numberOfColoredPaper;
	cin >> numberOfColoredPaper;

	bool isColored[100][100] = { false };
	for (int i = 0; i < numberOfColoredPaper; i++)
	{
		int rowStartPoint, columnStartPoint;
		cin >> rowStartPoint >> columnStartPoint;

		int rowEndPoint = rowStartPoint + 10;
		int columnEndPoint = columnStartPoint + 10;
		for (int j = columnStartPoint; j < columnEndPoint; j++)
		{
			for (int k = rowStartPoint; k < rowEndPoint; k++)
			{
				isColored[j][k] = true;
			}
		}
	}

	int coloredArea = 0;
	for (int i = 0; i < 100; i++)
	{
		for (int j = 0; j < 100; j++)
		{
			if (isColored[i][j] == true)
			{
				coloredArea++;
			}
		}
	}

	cout << coloredArea;
}