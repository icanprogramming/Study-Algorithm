// 10951번 : A+B - 4
// 주소 : https://www.acmicpc.net/problem/10951

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

		if (cin.eof() == true)
		{
			break;
		}
		else
		{
			cout << A + B << '\n';
		}
	}
}