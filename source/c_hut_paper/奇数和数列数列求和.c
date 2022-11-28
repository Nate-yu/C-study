#include <stdio.h>
/*s1=1,s2=1+3,...sn=1+3+...+(2n-1)，求s1+s2+...+sn的值小于20000时n的最大值*/
int main(int argc, char const *argv[])
{
	int Sum = 0, sum = 0, n = 1;
	while(1) {
		sum = 0;
		for(int i = 1; i <= n; i++) {
			sum += i*2 - 1;
		}
		Sum += sum;
		if(Sum >= 20000) break;
		n++;
	}
	/* 由于Sum的值大于20000时while结束，此时n是Sum最大值所对应的n加1。*/
	printf("n = %d\n",n-1);
	return 0;
}