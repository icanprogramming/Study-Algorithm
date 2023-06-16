// 9086번 : 문자열
// 주소 : https://www.acmicpc.net/problem/9086

#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T = 0;
	cin >> T;

	char word[1'001] = "";
	for (int i = 0; i < T; i++)
	{
		cin >> word;

		int index = 0;
		for (int j = 0; word[j] != '\0'; j++)
		{
			index++;
		}

		cout << word[0] << word[index - 1] << '\n';
	}
}