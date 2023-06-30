// 19532번 : 수학은 비대면강의입니다
// 주소 : https://www.acmicpc.net/problem/19532

#include <iostream>

using namespace std;

int main()
{
	int a, b, c, d, e, f;
	cin >> a >> b >> c >> d >> e >> f;

	for (int x = -999; x <= 999; x++)
	{
		for (int y = -999; y <= 999; y++)
		{
			if (a * x + b * y == c && d * x + e * y == f)
			{
				cout << x << ' ' << y;
				return 0;
			}
		}
	}
}