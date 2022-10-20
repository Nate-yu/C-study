#include "header.h"

void BubbleSort(int a[], int len) {
	int exchange; // 交换标志
	for(int i = 0; i < len-1; ++i) { // 最多做len-1趟排序
		exchange = 0;
		for(int j = len-2; j >= i; --j) { 
			if(a[j+1] < a[j]) {
				int temp = a[j+1];
				a[j+1] = a[j];
				a[j] = temp;
				exchange = 1; // 发生了交换，故将交换标志置为真
			}
		}
		if(exchange == 0) { // 本趟未发生交换，提前终止算法
			return;
		}
	}
}

int main(int argc, char const *argv[])
{
	int a[10] = {10,9,8,7,6,5,4,3,2,1};
	cout<<"排序前数组: "<<endl;
	for(int i = 0; i < 10; ++i) {
		printf("%d ",a[i]);
	}
	cout<<endl;
	BubbleSort(a,10);
	cout<<"排序后数组: "<<endl;
	for(int i = 0; i < 10; ++i) {
		printf("%d ",a[i]);
	}
	return 0;
}