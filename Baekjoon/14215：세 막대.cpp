// 14215번 : 세 막대
// 주소 : https://www.acmicpc.net/problem/14215

#include <iostream>

using namespace std;

int main()
{
	int stickLengths[3];
	int stickLengthMax = 0;
	int perimeter = 0;
	for (int i = 0; i < 3; i++)
	{
		cin >> stickLengths[i];

		if (stickLengthMax < stickLengths[i])
			stickLengthMax = stickLengths[i];
		perimeter += stickLengths[i];
	}

	if (stickLengthMax < (perimeter - stickLengthMax))
		cout << perimeter;
	else
	{
		int decreaseValue = stickLengthMax - (perimeter - stickLengthMax) + 1;
		cout << perimeter - decreaseValue;
	}
}