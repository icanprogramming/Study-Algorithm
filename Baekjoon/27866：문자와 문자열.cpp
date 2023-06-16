// 27866번 : 문자와 문자열
// 주소 : https://www.acmicpc.net/problem/27866

#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	char S[1'001] = "";
	int i = 0;
	cin >> S >> i;

	cout << S[i - 1];
}