// 2941번 : 크로아티아 알파벳
// 주소 : https://www.acmicpc.net/problem/2941

#include <iostream>

using namespace std;

int main()
{
	char word[101] = "";
	cin >> word;

	int index = 0;
	int numberOfAlphabet = 0;
	while (word[index] != '\0')
	{
		int nextIndex = index + 1;
		switch (word[index])
		{
		case 'c':
			nextIndex = index + 1;
			if (word[nextIndex] == '=' || word[nextIndex] == '-')
			{
				numberOfAlphabet++;
				index += 2;
			}
			else
			{
				numberOfAlphabet++;
				index++;
			}
			break;

		case 'd':
			nextIndex = index + 1;
			if (word[nextIndex] == 'z')
			{
				if (word[nextIndex + 1] == '=')
				{
					numberOfAlphabet++;
					index += 3;
				}
				else
				{
					numberOfAlphabet++;
					index++;
				}
			}
			else if (word[nextIndex] == '-')
			{
				numberOfAlphabet++;
				index += 2;
			}
			else
			{
				numberOfAlphabet++;
				index++;
			}
			break;

		case 'l':
		case 'n':
			nextIndex = index + 1;
			if (word[nextIndex] == 'j')
			{
				numberOfAlphabet++;
				index += 2;
			}
			else
			{
				numberOfAlphabet++;
				index++;
			}
			break;

		case 's':
		case 'z':
			nextIndex = index + 1;
			if (word[nextIndex] == '=')
			{
				numberOfAlphabet++;
				index += 2;
			}
			else
			{
				numberOfAlphabet++;
				index++;
			}
			break;

		default:
			numberOfAlphabet++;
			index++;
			break;
		}
	}

	cout << numberOfAlphabet;
}