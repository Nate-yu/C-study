#include <stdio.h>
#include <math.h>
/*一个整数，加上100后是一个完全平方数，再加上168后又是一个完全平方数，请问该数是多少*/
int main(int argc, char const *argv[])
{
	long n = -100;
	while(n <= 65535) {
		if((sqrt(n+100) == int(sqrt(n+100))) && (sqrt(n+268) == int(sqrt(n+268)))) {
			printf("%ld\n",n);
		}
		n++;
	} 
	return 0;
}