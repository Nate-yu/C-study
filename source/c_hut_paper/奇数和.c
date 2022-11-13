#include <stdio.h>
/*求1-1000之间所有奇数的和*/
int main(int argc, char const *argv[])
{
	int sum = 0;
	for(int i = 1; i <= 1000; i++) {
		if(i % 2 == 0) continue;
		sum += i;
	}
	printf("1-1000之间所有奇数的和为：%d",sum);
	return 0;
}