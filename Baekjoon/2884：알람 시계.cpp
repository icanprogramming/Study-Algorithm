// 2884번 : 알람 시계
// 주소 : https://www.acmicpc.net/problem/2884

#include <iostream>

using namespace std;

int main()
{
	int H = 0, M = 0;
	cin >> H >> M;

	int alarmH = H, alarmM = M - 45;
	if (alarmM < 0)
	{
		alarmH -= 1;
		alarmM += 60;

		if (alarmH < 0)
		{
			alarmH += 24;
		}
	}

	cout << alarmH << ' ' << alarmM;
}