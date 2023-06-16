// 2675번 : 문자열 반복
// 주소 : https://www.acmicpc.net/problem/2675

#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T = 0;
	cin >> T;

	int R = 0;
	char S[21] = "";
	for (int i = 0; i < T; i++)
	{
		cin >> R >> S;

		for (int j = 0; S[j] != '\0'; j++)
		{
			for (int k = 0; k < R; k++)
			{
				cout << S[j];
			}
		}

		cout << '\n';
	}
}