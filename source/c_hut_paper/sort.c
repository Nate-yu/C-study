#include <stdio.h>
/*
 * 排序：第一趟将最小的元素放在r[0]中，最大的元素放在r[n-1]中，
 * 第二趟将次小的放在r[1]中，次大的放在r[n-2]中，以此类推
 */
void sort(int r[],int n) {
	int i = 0, j, t, min, max;
	while(i < n-i-1) {
		min = max = i;
		/*按序找出最值*/
		for(j = i+1; j <= n-i-1; ++j) {
			if(r[j] < r[min]) min = j;
			else if(r[j] > max) max = j;
		}

		/*将最小值依次放在最前面*/
		if(min != i) {
			t = r[min];
			r[min] = r[i];
			r[i] = t;
		}

		/*当最大值不在最后一个的时候进入分支*/
		if(max != n-i-1) {
			// 由于前面进行了交换，若此时max=i，则max指向的是最小值，而min指向的是最大值
			if(max == i) {
				t = r[min];
				r[min] = r[n-i-1];
				r[n-i-1] = t;
			} else {
				t = r[max];
				r[max] = r[n-i-1];
				r[n-i-1] = t;
			}
		}
		i++;
	}
}

int main(int argc, char const *argv[])
{
	int a[5] = {5,4,3,2,1};
	sort(a,5);
	for(int i = 0; i < 5; i++) {
		printf("%d ",a[i]);
	}
	return 0;
}