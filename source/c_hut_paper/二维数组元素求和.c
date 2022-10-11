#include <stdio.h>
#include <math.h>
/*一个14*14的方阵A(i,j)，其每个元素的值为该元素下标的立方和，求出该矩阵的所有元素的累加和(i,j从1到14)*/
int main(int argc, char const *argv[])
{
	int arr[14][14];
	int sum = 0;
	for(int i = 0; i < 14; i++) {
		for(int j = 0; j < 14; j++) {
			arr[i][j] = pow(i+1,3) + pow(j+1,3);
			sum += arr[i][j];
		}
	}
	printf("%d\n",sum);
	return 0;
}