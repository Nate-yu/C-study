#include <stdio.h>
/*从键盘输入10个整数，存入数组中，然后将该数组中的各元素逆序存放后显示出来*/
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
	int arr[10];
	for(int i = 0; i < 10; i++) {
		scanf("%d",&arr[i]);
	}
	reverse(arr,0,9);
	for(int i = 0; i < 10; i++) {
		printf("%d ",arr[i]);
	}
	return 0;
}