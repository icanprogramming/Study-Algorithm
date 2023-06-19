// 1978번 : 소수 찾기
// 주소 : https://www.acmicpc.net/problem/1978

#include <iostream>

using namespace std;

int main()
{
	int N;
	cin >> N;

	int primeNumberCount = 0;
	for (int i = 0; i < N; i++)
	{
		int number;
		cin >> number;

		if (number == 1)
			continue;

		bool isPrimeNumber = true;
		int divisonCount = number / 2;
		for (int i = 2; i < number; i++)
		{
			if (number % i == 0)
			{
				isPrimeNumber = false;
				break;
			}
		}

		if (isPrimeNumber)
			primeNumberCount++;
	}

	cout << primeNumberCount;
}