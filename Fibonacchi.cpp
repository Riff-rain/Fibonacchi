#include "Fibonacchi.h"

#include <vector>

int fibonacchiExponential(int n)
{
	if (n < 0)
	{
		return -1;
	}

	if (n == 0)
	{
		return 0;
	}

	if (n == 1)
	{
		return 1;
	}

	return fibonacchiExponential(n - 1) + fibonacchiExponential(n - 2);
}

int fibonacchiPolynomial(int n)
{
	if (n < 0)
	{
		return -1;
	}

	std::vector<int> fibonacchi;
	fibonacchi.push_back(0);
	fibonacchi.push_back(1);

	for (int i = 2; i <= n; ++i)
	{
		fibonacchi.push_back(fibonacchi[i - 2] + fibonacchi[i - 1]);
	}

	return fibonacchi[n];
}
