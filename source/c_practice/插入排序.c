#include "header.h"

void insertSort(int arr[], int len){
    for(int i = 1; i < len; i++) {
		int temp = arr[i];
		int j = i-1;
		while(j >= 0 && arr[j] > temp) {
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = temp;
	}
}

int main(int argc, char const *argv[])
{
	int a[10] = {10,9,8,7,6,5,4,3,2,1};
	insertSort(a,10);
	for(int i = 0; i < 10; ++i) {
		printf("%d ",a[i]);
	}
	return 0;
}