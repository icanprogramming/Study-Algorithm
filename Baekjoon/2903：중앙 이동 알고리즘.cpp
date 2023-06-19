// 2903번 : 중앙 이동 알고리즘
// 주소 : https://www.acmicpc.net/problem/2903

#include <iostream>

using namespace std;

int main()
{
	int N;
	cin >> N;

	int numberOfPoint;
	int squareRoot = 3;
	int plusValue = 2;
	for (int i = 0; i < N; i++)
	{
		numberOfPoint = squareRoot * squareRoot;

		squareRoot += plusValue;
		plusValue *= 2;
	}

	cout << numberOfPoint;
}