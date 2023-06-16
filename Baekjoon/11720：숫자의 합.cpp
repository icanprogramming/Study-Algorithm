// 11720번 : 숫자의 합
// 주소 : https://www.acmicpc.net/problem/11720

#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N = 0;
	char number[101] = "";
	cin >> N >> number;

	int sum = 0;
	for (int i = 0; i < N; i++)
	{
		sum += (int)number[i] - '0';
	}

	cout << sum;
}