#include <stdio.h>
/*将输入的数字插入到已经排好序的数组中*/
int main() 
{
	int a[6] = {1,3,6,7,9};
	int num,i,j;
	scanf("%d",&num);
	for(i = 0; i < 5; i++) {
		if(num < a[i]) {
			break;
		}
	}
	for(j = 5; j > i; j--) {
		a[j] = a[j-1];
	}
	a[j] = num;
	for(int i = 0; i < 6; ++i) {
		if(i == 5) {
			printf("%d",a[i]);
		} else {
			printf("%d ",a[i]);
		}
		
	}
	printf("\n");
	return 0;
}