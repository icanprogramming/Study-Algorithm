// ¿Àºì ½Ã°è

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