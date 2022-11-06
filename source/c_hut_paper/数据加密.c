#include <stdio.h>
/*四位数字，每一位加5，用和除以10的余数代替该数字，再将第一位和第四位交换，第二位和第三位交换*/
int main(int argc, char const *argv[])
{
	int n;
	printf("输入要加密的数据：");
	scanf("%d",&n);
	int a = (n / 1000 + 5) % 10; // 千位+5后%10
	int b = (n % 1000 / 100 + 5) % 10; // 百位+5后%10
	int c = (n % 100 / 10 + 5) % 10; // 十位+5后%10
	int d = (n % 10 + 5) % 10; // 个位+5后%10
	printf("加密后的数据为：%d%d%d%d",d,c,b,a);
	return 0;
}