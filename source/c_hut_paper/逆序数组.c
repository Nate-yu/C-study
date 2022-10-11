#include <stdio.h>
/*从键盘输入10个整数，存入数组中，然后将该数组中的各元素逆序存放后显示出来*/
int main(int argc, char const *argv[])
{
	int arr[10];
	for(int i = 0; i < 10; i++) {
		scanf("%d",&arr[i]);
	}
	for(int i = 0, j = 9; i <= j; i++, j--){
		int temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	}
	for(int i = 0; i < 10; i++) {
		printf("%d ",arr[i]);
	}
	return 0;
}