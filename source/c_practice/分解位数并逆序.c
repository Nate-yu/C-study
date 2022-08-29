#include "header.h"
/*给一个不多于5位的正整数，要求：一、求它是几位数，二、逆序打印出各位数字。*/

// 判断位数
int digit(int num) {
	int count = 0;
	while(num) {
		num /= 10;
		count++;
	}
	return count;
}

// 逆序打印数字
void reverse(int num) {
	int rev = 0;
	while(num) {
		rev = rev*10 + num%10;
		num /= 10;
	}
	printf("reverse: %d\n",rev);
}

int main(int argc, char const *argv[])
{
	int num;
	printf("enter number: ");
	scanf("%d",&num);
	printf("digit: %d\n",digit(num));
	reverse(num);
	return 0;
}