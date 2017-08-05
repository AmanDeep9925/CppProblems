#include <iostream>
using namespace std;

int lcm(int N1, int N2)
{
	int gcd;
	for (int i = 1; i <= N1 && i <= N2; ++i)
	{
		if (N1 % i == 0 && N2 % i == 0)
		{
			gcd = i;
		}
	}

	return gcd ;
}

int main()
{
	int num1, num2;

	cout << "\n ENTER THE TWO NUMBERS :" ;
	cin >> num1 >> num2 ;

	int LCM = lcm(num1, num2);

	cout << " \n" << LCM ;
}