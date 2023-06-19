// 9506번 : 약수들의 합
// 주소 : https://www.acmicpc.net/problem/9506

#include <iostream>

using namespace std;

int divisors[5'000] = { 0 };

int main()
{
	while (true)
	{
		int n;
		cin >> n;

		if (n == -1)
			break;

		bool isPerfectNumber = true;
		int divisorCount = 0;
		int divisorIndex = 0;
		int	divisorSum = 0;
		int repeatCount = n / 2;
		for (int i = 1; i <= repeatCount; i++)
		{
			if (n % i == 0)
			{
				divisorCount++;
				divisors[divisorIndex] = i;
				divisorSum += i;
				divisorIndex++;
			}
		}

		if (divisorSum != n)
		{
			isPerfectNumber = false;
		}

		if (isPerfectNumber)
		{
			cout << n << " = " << divisors[0];

			for (int i = 1; i < divisorCount; i++)
			{
				cout << " + " << divisors[i];
			}

			cout << '\n';
		}
		else
		{
			cout << n << " is NOT perfect.\n";
		}
	}
}