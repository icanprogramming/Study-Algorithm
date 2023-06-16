// 1152번 : 단어의 개수
// 주소 : https://www.acmicpc.net/problem/1152

#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	char string[1'000'001] = "";
	cin.getline(string, sizeof(string));

	int index = 0;
	if (string[index] == ' ')
	{
		index++;
	}

	int numberOfWord = 0;
	while (string[index] != '\0')
	{
		if (string[index] == ' ')
		{
			numberOfWord++;
		}

		index++;
	}

	if (string[index - 1] != ' ')
	{
		numberOfWord++;
	}

	cout << numberOfWord;
}