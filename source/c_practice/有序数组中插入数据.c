#include "header.h"
/*题目：有一个已经排好序的数组。现输入一个数，要求按原来的规律将它插入数组中。*/
/*程序分析：首先判断此数是否大于最后一个数,然后再考虑插入中间的数的情况,
  插入后此元素之后的数,依次后移一个位置。*/
void orderInsert(int a[], int num, int len) {
	int temp1, temp2;
	if(a[9] <= num) {
		a[10] = num;
		return;
	} else {
		for(int i = 0; i < len-1; ++i) {
			if(a[i] > num) {
				// temp1用于存储要插入数据后面的一个数，即大于num的第一个数
				temp1 = a[i];
				// 将num插在i的位置，此时a[i-1]<num<a[i+1]
				a[i] = num;
				// 开始将大于num的数据挨个后移，j为num后一位数据
				for(int j = i+1; j < len; ++j) {
					// temp2存储将要移动的数据
					temp2 = a[j];
					// 将大于num的第一个数覆盖
					a[j] = temp1;
					// 移动数据
					temp1 = temp2;
				}
				break;
			}
		}
	}
}

void reverseInsert(int a[], int num, int len) {
	// 从后往前比较
	for(int i = 9;i >= 0; i--){
		// 当num小于数组数据时，直接将数据往后移一个位置
        if(num < a[i]) {
            a[i+1]=a[i];
        }
        // 当num>=数组数据时（此时i所指的数据小于num），将num插在i+1的位置
        else {
            a[i+1]=num;
            break;
        }
        // num比a[0]小的话写不进去,此时数组中所有数据都往后移动了一个位置，于是可以直接把num插在a[0]
        if(i==0) a[0]=num;  
    }
}

int main(int argc, char const *argv[])
{
	int a[11] = {1,3,13,14,18,22,27,29,33,44};
	int num;
	scanf("%d",&num);
	reverseInsert(a,num,11);
	for(int i = 0; i < 11; ++i) {
		printf("%d ",a[i]);
	}
	return 0;
}