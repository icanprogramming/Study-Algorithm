// 5622번 : 다이얼
// 주소 : https://www.acmicpc.net/problem/5622

#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	char word[16] = "";
	cin >> word;

	char time[27] = "3334445556667778888999::::";
	int minimumTime = 0;
	for (int i = 0; word[i] != '\0'; i++)
	{
		minimumTime += time[word[i] - 'A'] - '0';
	}

	cout << minimumTime;
}