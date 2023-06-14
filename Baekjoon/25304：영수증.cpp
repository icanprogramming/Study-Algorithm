// 25304번 : 영수증
// 주소 : https://www.acmicpc.net/problem/25304

#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int receiptAmount = 0, types = 0;
	cin >> receiptAmount >> types;

	int totalAmount = 0, amount = 0, count = 0;
	for (int i = 0; i < types; i++)
	{
		cin >> amount >> count;
		totalAmount += amount * count;
	}

	if (receiptAmount == totalAmount)
	{
		cout << "Yes";
	}
	else
	{
		cout << "No";
	}
}