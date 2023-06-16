// 2908번 : 상수
// 주소 : https://www.acmicpc.net/problem/2908

#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	char A[4] = "", B[4] = "";
	cin >> A >> B;

	char* bigger = NULL;
	for (int i = 2; 0 <= i; i--)
	{
		if (A[i] < B[i])
		{
			bigger = B;
			break;
		}
		else if (B[i] < A[i])
		{
			bigger = A;
			break;
		}
	}

	for (int i = 2; 0 <= i; i--)
	{
		cout << bigger[i];
	}
}