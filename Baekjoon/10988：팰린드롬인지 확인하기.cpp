// 10988번 : 팰린드롬인지 확인하기
// 주소 : https://www.acmicpc.net/problem/10988

#include <iostream>

using namespace std;

int main()
{
	char word[101] = "";
	cin >> word;

	int wordSize = 0;
	for (int i = 0; word[i] != '\0'; i++)
	{
		wordSize++;
	}

	int repetition = wordSize / 2;
	int reverseIndex = wordSize - 1;
	for (int i = 0; i < repetition; i++)
	{
		if (word[i] != word[reverseIndex])
		{
			cout << 0;
			return 0;
		}

		reverseIndex--;
	}

	cout << 1;
}