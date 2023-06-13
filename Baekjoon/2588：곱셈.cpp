// 2588번 : 곱셈
// 주소 : https://www.acmicpc.net/problem/2588

#include <iostream>

using namespace std;

int main()
{
	int A = 0, B = 0;
	cin >> A >> B;

	cout << A * (B % 10) << '\n' << A * ((B / 10) % 10) << '\n' << A * ((B / 100) % 10) << '\n' << A * B;
}