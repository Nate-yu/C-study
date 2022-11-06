#include <stdio.h>
/*a数组有8个元素，从第6个元素开始将数组后3个元素移动到数组开头*/
void reverse(int arr[], int begin, int end) {
	int mid = begin + (end - begin + 1) / 2;
	for(int i = begin, j = end; i <= mid && j >= mid; i++, j--) {
		int temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	}
}
int main(int argc, char const *argv[])
{
	int a[8] = {2,6,9,8,5,3,7,4};
	reverse(a,0,4);
	reverse(a,5,7);
	reverse(a,0,7);
	for(int i = 0; i < 8; i++) {
		printf("%d ",a[i]);
	}
	return 0;
}