#include <stdio.h> 
/*求n的阶乘*/
double factorial(int n) {
	double fac = 1.0;
	for(int i = 1; i <= n; ++i) {
		fac *= i;
	}
	return fac;
}

/*求和*/
double sum(int m) {
	double t = 0.0;
	for(int i = 1; i <= m; i++) {
		t += 1.0 / factorial(i);
	}
	return t;
}

/*阶乘倒数和*/
int main(int argc, char const *argv[])
{
	int m;
	printf("Please input a numer: ");
	scanf("%d", &m);
	printf("The sum is: %12.10f\n",sum(m));
	return 0;
}