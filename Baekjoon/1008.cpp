// A/B

#include <iostream>

using namespace std;

int main()
{
	int A = 0, B = 0;
	cin >> A >> B;

	cout << fixed;
	cout.precision(9);

	cout << A / (double)B;
}