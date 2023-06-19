// 1316번 : 그룹 단어 체커
// 주소 : https://www.acmicpc.net/problem/1316

#include <iostream>

using namespace std;

int main()
{
	int N = 0;
	cin >> N;

	int numberOfGroupWord = 0;
	for (int i = 0; i < N; i++)
	{
		char word[101] = "";
		cin >> word;

		bool isUsed[26] = { false };
		bool isGroupWord = true;
		char recentCharacter = '\0';
		for (int i = 0; word[i] != '\0'; i++)
		{
			int index = word[i] - 'a';
			if (isUsed[index])
			{
				if (word[i] != recentCharacter)
				{
					isGroupWord = false;
					break;
				}
			}
			else
			{
				isUsed[index] = true;
				recentCharacter = word[i];
			}
		}

		if (isGroupWord)
		{
			numberOfGroupWord++;
		}
	}

	cout << numberOfGroupWord;
}