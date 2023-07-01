// 1018번 : 체스판 다시 칠하기
// 주소 : https://www.acmicpc.net/problem/1018

#include <iostream>

using namespace std;

int main()
{
	int N, M;
	cin >> N >> M;

	char board[50][51] = { "" };
	for (int i = 0; i < N; i++)
		cin >> board[i];

	int repaintCountMin = 65;
	int lastStartIndexY = N - 8;
	int lastStartIndexX = M - 8;
	for (int i = 0; i <= lastStartIndexY; i++)
	{
		for (int j = 0; j <= lastStartIndexX; j++)
		{
			char color[3] = "WB";
			for (int k = 0; k < 2; k++)
			{
				int repaintCount = 0;
				int colorIndex = k;
				int endIndexY = i + 7;
				int endIndexX = j + 7;
				for (int l = i; l <= endIndexY; l++)
				{
					for (int m = j; m <= endIndexX; m++)
					{
						if (board[l][m] != color[colorIndex % 2])
							repaintCount++;

						colorIndex++;
					}

					colorIndex++;
				}

				if (repaintCount < repaintCountMin)
					repaintCountMin = repaintCount;
			}
		}
	}

	cout << repaintCountMin;
}