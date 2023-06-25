// 10101번 : 삼각형 외우기
// 주소 : https://www.acmicpc.net/problem/10101

#include <iostream>

using namespace std;

int main()
{
	int angles[3];
	int angleSum = 0;
	for (int i = 0; i < 3; i++)
	{
		cin >> angles[i];

		angleSum += angles[i];
	}

	if (angleSum == 180)
	{
		if (angles[0] == angles[1] && angles[1] == angles[2])
			cout << "Equilateral";
		else if (angles[0] == angles[1] || angles[0] == angles[2] || angles[1] == angles[2])
			cout << "Isosceles";
		else
			cout << "Scalene";
	}
	else
		cout << "Error";
}