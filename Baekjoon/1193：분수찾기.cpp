// 1193번 : 분수찾기
// 주소 : https://www.acmicpc.net/problem/1193

#include <iostream>

using namespace std;

int main()
{
	int X;
	cin >> X;

	int zigzagSequence = 0;
	int numberOfFraction = 0;
	int plusValue = 1;
	while (numberOfFraction < X)
	{
		zigzagSequence++;

		numberOfFraction += plusValue;
		plusValue++;
	}

	int numerator, denominator;
	int criteriaValue = zigzagSequence + 1;
	int sequenceWithinGroup = X - (numberOfFraction - (plusValue - 1));
	if (zigzagSequence % 2 == 1)
	{
		numerator = criteriaValue - sequenceWithinGroup;
		denominator = criteriaValue - numerator;
	}
	else
	{
		denominator = criteriaValue - sequenceWithinGroup;
		numerator = criteriaValue - denominator;
	}

	cout << numerator << '/' << denominator;
}