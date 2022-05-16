//Sum of prime number from 2 to n

#include <iostream>
#include <cmath>

using namespace std;

bool isprime(int n)
{
	bool isprime = true;
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			isprime = false;
			break;
		}
	}
	return isprime;
}

int main()
{
	int n, sum = 0;
	bool isPrime = true;
	cout << "Enter n\n";
	cin >> n;
	cout << "Prime numbers from 2 to " << n << " are " << endl;
	for (int i = 2; i <= n; i++)
	{
		if (isprime(i) == true)
		{
			cout << i << " ";
			sum += i;
		}
	}
	cout << endl;
	cout << "Sum of prime numbers is " << sum << endl;
	return 0;
}
