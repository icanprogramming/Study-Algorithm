// 2525번 : 오븐 시계
// 주소 : https://www.acmicpc.net/problem/2525

#include <iostream>

using namespace std;

int main()
{
	int hour = 0, minute = 0, cookingTime = 0;
	cin >> hour >> minute >> cookingTime;

	hour += cookingTime / 60;
	minute += cookingTime % 60;

	if (60 <= minute)
	{
		hour += 1;
		minute -= 60;
	}

	if (24 <= hour)
	{
		hour -= 24;
	}

	cout << hour << ' ' << minute;
}