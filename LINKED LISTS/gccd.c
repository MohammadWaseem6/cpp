
#include <stdio.h>
int gcdExtended(int a, int b, int* x, int* y)
{
	if (a == 0) {
		*x = 0;
		*y = 1;
		return b;
	}
	int x1, y1; 
	int gcd = gcdExtended(b % a, a, &x1, &y1);	
	*x = y1 - (b / a) * x1;
	*y = x1;

	return gcd;
}
int main()
{
	int x, y;
	int a = 23, b = 11;
	int g = gcdExtended(a, b, &x, &y);
	printf("gcd(%d, %d) = %d", a, b, g);
	return 0;
}

