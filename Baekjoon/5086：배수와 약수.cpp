// 5086번 : 배수와 약수
// 주소 : https://www.acmicpc.net/problem/5086

#include <iostream>

using namespace std;

int main()
{
	while (true)
	{
		int A, B;
		cin >> A >> B;

		if (A == 0 && B == 0)
			break;

		if (B % A == 0)
			cout << "factor\n";
		else if (A % B == 0)
			cout << "multiple\n";
		else
			cout << "neither\n";
	}
}