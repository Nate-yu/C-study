#include "header.h"
/*题目：将一个数组逆序输出。*/
/*程序分析：用第一个与最后一个交换。*/

void reverseArray(int a[], int len) {
	for(int i = 0, j = len - 1; i < len/2; i++,j--) {
		int temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
}

int main(int argc, char const *argv[])
{
	int a[5] = {1,2,3,4,5};
	// reverse(a,5);
	reverseArray(a,5);
	for(int i = 0; i < 5; ++i) {
		printf("%d ", a[i]);
	}
	return 0;
}