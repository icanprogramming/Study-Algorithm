// 3003번 : 킹, 퀸, 룩, 비숍, 나이트, 폰
// 주소 : https://www.acmicpc.net/problem/3003

#include <iostream>

using namespace std;

int main()
{
	char necessaryPeace[7] = "112228";
	for (int i = 0; i < 6; i++)
	{
		int peace;
		cin >> peace;

		cout << (int)(necessaryPeace[i] - '0') - peace << ' ';
	}
}