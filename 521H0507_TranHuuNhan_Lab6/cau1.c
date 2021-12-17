#include <stdio.h>
#include <math.h>

int isPrime(int n, int i)
{
	if (n <= 2)
		return (n == 2) ? 1 : 0;
	if (n%i == 0)
		return 0;
	if (i > sqrt(n))
		return 1;
    return isPrime(n, i+1);
}

int main()
{
    for (int i=0; i<20; i++)
	    if (isPrime(i, 2))
            printf("%d\t", i);
	return 0;
}
