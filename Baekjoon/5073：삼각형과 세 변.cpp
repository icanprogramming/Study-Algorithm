// 5073번 : 삼각형과 세 변
// 주소 : https://www.acmicpc.net/problem/5073

#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	while (true)
	{
		int sideLengths[3];
		int maxLength = 0;
		int lengthSum = 0;
		for (int i = 0; i < 3; i++)
		{
			cin >> sideLengths[i];

			if (sideLengths[i] == 0)
				return 0;

			if (maxLength < sideLengths[i])
				maxLength = sideLengths[i];
			lengthSum += sideLengths[i];
		}

		if (maxLength < (lengthSum - maxLength))
		{
			if (sideLengths[0] == sideLengths[1] && sideLengths[1] == sideLengths[2])
				cout << "Equilateral\n";
			else if (sideLengths[0] == sideLengths[1] || sideLengths[0] == sideLengths[2] || sideLengths[1] == sideLengths[2])
				cout << "Isosceles\n";
			else
				cout << "Scalene\n";
		}
		else
			cout << "Invalid\n";
	}
}