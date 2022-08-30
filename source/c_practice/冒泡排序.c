#include "header.h"

void BubbleSort(int a[], int len) {
	for(int i = 0; i < len-1; ++i) {
		for(int j = 0; j < len-1-i; ++j) {
			if(a[j] > a[j+1]) {
				int temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
}

int main(int argc, char const *argv[])
{
	int a[10] = {10,9,8,7,6,5,4,3,2,1};
	BubbleSort(a,10);
	for(int i = 0; i < 10; ++i) {
		printf("%d ",a[i]);
	}
	return 0;
}