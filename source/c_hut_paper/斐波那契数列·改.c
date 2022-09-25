#include <stdio.h>
/*已知一个数列的前3个数为3，4，5,以后每个数为前3个数的和，编程序求此数列的第28个数。*/
int main() 
{
	int arr[30] = {3,4,5};

	for(int i = 3; i < 28; ++i) {
		arr[i] = arr[i-1] + arr[i-2] + arr[i-3];
	}

	printf("%d",arr[27]);
	return 0;
}