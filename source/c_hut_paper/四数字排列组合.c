#include <stdio.h>
/*有1，2，3，4个数字，能组成多少个互不相同且无重复数字的三位数，并将它们显示出来*/
int main(int argc, char const *argv[])
{
	int count = 0;
	printf("不同数字为：");
	for(int i = 1; i <= 4; i++) {
		for(int j = 1; j <= 4; j++) {
			for(int k = 1; k <= 4; k++) {
				if(i != j && j != k && k != i) {
					printf("%d%d%d ",i,j,k);
					count++;
				}
			}
		}
	}
	printf("\n一共有%d个不同数字",count);
	return 0;
}