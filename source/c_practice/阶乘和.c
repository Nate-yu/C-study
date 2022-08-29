#include "header.h"
/*求1+2!+3!+...+20!的和。*/
int main(int argc, char const *argv[])
{
	double sum = 0.0;
	for(int i = 1; i <= 20; i++) {
		sum += factorial(i);
	} 
	printf("sum = %lf\n",sum);
	return 0;
}