// 10952번 : A+B - 5
// 주소 : https://www.acmicpc.net/problem/10952

#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int A = 0, B = 0;
	while (true)
	{
		cin >> A >> B;

		if ((A == 0) && (B == 0))
		{
			break;
		}
		else
		{
			cout << A + B << '\n';
		}
	}
}