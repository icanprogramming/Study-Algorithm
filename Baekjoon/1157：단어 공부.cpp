// 1157번 : 단어 공부
// 주소 : https://www.acmicpc.net/problem/1157

#include <iostream>

using namespace std;

int main()
{
	char word[1'000'001] = "";
	cin >> word;

	int alphabetUsage[58] = { 0 };
	for (int i = 0; word[i] != '\0'; i++)
	{
		int index = word[i] - 'A';
		alphabetUsage[index]++;
	}

	char mostUsedAlphabet = '\0';
	int maxUsage = 0;
	bool isDuplicated = false;
	for (int i = 0; i < 26; i++)
	{
		int usage = alphabetUsage[i] + alphabetUsage[i + 32];
		if (maxUsage < usage)
		{
			mostUsedAlphabet = i + 'A';
			maxUsage = usage;
			isDuplicated = false;
		}
		else if (maxUsage == usage)
		{
			isDuplicated = true;
		}
	}

	if (isDuplicated)
	{
		cout << '?';
	}
	else
	{
		cout << mostUsedAlphabet;
	}
}