// 11022번 : A+B - 8
// 주소 : https://www.acmicpc.net/problem/11022

#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T = 0;
	cin >> T;

	int A = 0, B = 0;
	for (int i = 1; i <= T; i++)
	{
		cin >> A >> B;

		cout << "Case #" << i << ": " << A << " + " << B << " = " << A + B << '\n';
	}
}