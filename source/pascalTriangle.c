#include<stdio.h>
int main()
{
	int yanghui[10][10];
	for(int i = 0; i < 10; i++) {
		for(int j = 0; j <= i; j++) {
			if(j == 0 || i == j) {
				yanghui[i][j] = 1;
			} else {
				yanghui[i][j] = yanghui[i-1][j] + yanghui[i-1][j-1];
			}
		}
	}

	for(int i = 0; i < 10; i++) {
		for(int j = 0; j <= i; j++) {
			printf("%5d",yanghui[i][j]);
		}
		printf("\n");
	}

	return 0;
}