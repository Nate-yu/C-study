#include <stdio.h>
#include <math.h>
/*
  若一个四位正整数是另一个正整数的平方，且各位数字的和是一个平方数，则称该四位正整数是“四位双平方数”。
  例如：由于7396=86^2，且7+3+9+6=25=5^2，则称7396是“四位双平方数”。
  求所有“四位双平方数”之和。
*/
int main() {
	int sum = 0; // 四位双平方数每一位的和
	int summation = 0; // 所有四位双平方数的和
	int temp; // 用于存储“待定的”四位双平方数
	for(int i = 1000; i < 10000; ++i) {
		if(sqrt(i) * sqrt(i) == i) {
			temp = i;
			sum = 0; // 重新置零
			while(temp) {
				sum += temp % 10; // 取个位数
				temp /= 10; // 去除个位数
			}
			if(sqrt(sum) * sqrt(sum) == sum) {
				summation += i;
				printf("%d ",i);
			}
		}
	}
	printf("\nsummation: %d",summation);
	return 0;
}