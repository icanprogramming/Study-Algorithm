// 2444번 : 별 찍기 - 7
// 주소 : https://www.acmicpc.net/problem/2444

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int N = 0;
	cin >> N;

	char blank = ' ';
	char star = '*';
	int numberOfLine = N * 2 - 1;
	int criterion = -(numberOfLine) / 2;
	for (int i = 0; i < numberOfLine; i++)
	{
		int numberOfBlank = abs(criterion);
		for (int j = 0; j < numberOfBlank; j++)
		{
			cout << blank;
		}

		int numberOfStar = numberOfLine - numberOfBlank * 2;
		for (int j = 0; j < numberOfStar; j++)
		{
			cout << star;
		}

		criterion++;
		cout << '\n';
	}
}