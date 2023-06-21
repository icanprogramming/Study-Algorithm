// 1085번 : 직사각형에서 탈출
// 주소 : https://www.acmicpc.net/problem/1085

#include <iostream>

using namespace std;

int main()
{
	int x, y, w, h;
	cin >> x >> y >> w >> h;

	int point[4] = { x, y, w - x, h - y };
	int minDistance = 1001;
	for (int i = 0; i < 4; i++)
	{
		if (point[i] < minDistance)
			minDistance = point[i];
	}

	cout << minDistance;
}