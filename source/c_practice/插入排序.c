#include "header.h"

void insertSort(int arr[], int len){
    if(len < 2) return;
    int i,j,temp;
    for(i = 1; i < len; i++) {
    	temp = arr[i];
    	for(j = i-1; j >= 0; j--) {
    		if(arr[j] <= temp) break;
    		arr[j+1] = arr[j];
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