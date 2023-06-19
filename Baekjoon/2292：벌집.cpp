// 2292번 : 벌집
// 주소 : https://www.acmicpc.net/problem/2292

#include <iostream>

using namespace std;

int main()
{
	int N;
	cin >> N;

	int numberOfPassedRoom = 1;
	int numberOfRoom = 1;
	int multiplyValue = 1;
	while (numberOfRoom < N)
	{
		numberOfPassedRoom++;

		numberOfRoom += 6 * multiplyValue;
		multiplyValue++;
	}

	cout << numberOfPassedRoom;
}