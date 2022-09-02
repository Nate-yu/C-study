#include "header.h"
/*输入数组，最大的与第一个元素交换，最小的与最后一个元素交换，输出数组。*/
/*思路：分别找到最大值和最小值的索引，再分别进行数据交换*/

int findMaxIndex(int a[], int len) {
	int maxIndex = 0;
	int max = a[0];
	for(int i = 0; i < len-1; ++i) {
		if(max < a[i]) {
			max = a[i];
			maxIndex = i;
		}
	}
	printf("max: %d\nmaxIndex: %d\n",max,maxIndex);
	return maxIndex;
}	

int findMinIndex(int a[], int len) {
	int minIndex = 0;
	int min = a[0];
	for(int i = 0; i < len-1; ++i) {
		if(min > a[i]) {
			min = a[i];
			minIndex = i;
		}
	}
	printf("min: %d\nminIndex: %d\n",min,minIndex);
	return minIndex;
}

void swap(int *a, int *b) {
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

int main(int argc, char const *argv[])
{
	int a[5] = {3,23,4,1,21}; // 23,3,4,21,1

	int max = findMaxIndex(a,5);
	int min = findMinIndex(a,5);

	swap(a,a+max);
	swap(a+4,a+min);

	for(int i = 0; i < 5; i++) {
		printf("%d ",a[i]);
	}

	return 0;
}