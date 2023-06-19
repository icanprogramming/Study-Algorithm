// 2869번 : 달팽이는 올라가고 싶다
// 주소 : https://www.acmicpc.net/problem/2869

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int A, B, V;
	cin >> A >> B >> V;

	int upDownDay = ceil((V - A) / (double)(A - B));

	cout << upDownDay + 1;
}