// 10809번 : 알파벳 찾기
// 주소 : https://www.acmicpc.net/problem/10809

#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	char S[101] = "";
	cin >> S;

	int alphabet[26] = { 0 };
	for (int i = 0; i < 26; i++)
	{
		alphabet[i] = -1;
	}

	int index = 0;
	for (int i = 0; S[i] != '\0'; i++)
	{
		index = (int)S[i] - 'a';
		if (alphabet[index] == -1)
		{
			alphabet[index] = i;
		}
	}

	for (int i = 0; i < 26; i++)
	{
		cout << alphabet[i] << ' ';
	}
}