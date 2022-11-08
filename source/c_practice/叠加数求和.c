#include <stdio.h>
/*求S = a + aa + ... + aa...a，几个数相加由键盘输入*/
int main(int argc, char const *argv[])
{
	int sum = 0, n, num;
	printf("输入叠加数：");
	scanf("%d",&num);
	// 存储个位
	int temp = num;
	printf("输入叠加个数：");
	scanf("%d",&n);
	for(int i = 0; i < n; i++) {
		sum += num;
		if(i < n-1) {
			printf("%d+",num);
		} else {
			printf("%d=",num);
		}
		num = num * 10 + temp;
	}
	printf("%d",sum);
	return 0;
}