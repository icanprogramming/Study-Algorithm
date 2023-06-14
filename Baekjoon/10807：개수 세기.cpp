// 10807번 : 개수 세기
// 주소 : https://www.acmicpc.net/problem/10807

#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N = 0;
	cin >> N;

	int number = 0, integer[201] = { 0 };
	for (int i = 0; i < N; i++)
	{
		cin >> number;

		integer[number + 100]++;
	}

	int v = 0;
	cin >> v;

	cout << integer[v + 100];
}