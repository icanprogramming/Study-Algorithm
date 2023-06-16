// 11718번 : 그대로 출력하기
// 주소 : https://www.acmicpc.net/problem/11718

#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	char word[101] = "";
	while (true)
	{
		cin.getline(word, sizeof(word));

		if (cin.eof())
		{
			break;
		}
		else
		{
			cout << word << '\n';
		}
	}
}