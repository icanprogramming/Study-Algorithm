// 25314번 : 코딩은 체육과목 입니다
// 주소 : https://www.acmicpc.net/problem/25314

#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N = 0;
	cin >> N;

	int numberOfRepeat = N / 4;
	for (int i = 0; i < numberOfRepeat; i++)
	{
		cout << "long ";
	}

	cout << "int";
}