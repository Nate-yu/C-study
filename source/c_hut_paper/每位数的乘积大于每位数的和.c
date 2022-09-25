#include <stdio.h>
/*编写程序，计算在0至60的范围内有多少个数，其每位数的乘积大于每位数的和。*/
int main()
{
	int count = 0;
	for(int i = 10; i <= 60; ++i) {
		if((i / 10) * (i % 10) > (i / 10) + (i % 10)) {
			count++;
			printf("%d ", i);
		}
	}
	printf("\ncount: %d",count);
	return 0;
}