#include "header.h"

void selectSort(int a[], int len) {
	int min;
	for(int i = 0; i < len-1; ++i) {
		min = i;
		for(int j = i+1; j < len; ++j) {
			if(a[j] < a[min]) {
				min = j;
			}
		}
		if(min != i) {
			int temp = a[i];
			a[i] = a[min];
			a[min] = temp;
		}
	}
}

int main(int argc, char const *argv[])
{
	int a[10] = {10,9,8,7,6,5,4,3,2,1};
	selectSort(a,10);
	for(int i = 0; i < 10; ++i) {
		printf("%d ",a[i]);
	}
	return 0;
}