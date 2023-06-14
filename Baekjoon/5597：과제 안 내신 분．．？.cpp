// 5597번 : 과제 안 내신 분..?
// 주소 : https://www.acmicpc.net/problem/5597

#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n = 0;
	bool student[31] = { false };
	for (int i = 0; i < 28; i++)
	{
		cin >> n;

		student[n] = true;
	}

	for (int i = 1; i <= 30; i++)
	{
		if (student[i] == false)
		{
			cout << i << '\n';
		}
	}
}