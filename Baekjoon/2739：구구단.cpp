// 2739번 : 구구단
// 주소 : https://www.acmicpc.net/problem/2739

#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N = 0;
	cin >> N;

	for (int i = 1; i <= 9; i++)
	{
		cout << N << " * " << i << " = " << N * i << '\n';
	}
}