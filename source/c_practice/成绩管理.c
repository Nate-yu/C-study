#include "header.h"

int main() {
	int num = 0, max = 0;
	float avg, sum = 0.0;
	int grade[100];
	int i = 0;
	scanf("%d",&grade[i]);
	while(grade[i] >= 0) {
		num++;
		if(max < grade[i]) {
			max = grade[i];
		}
		sum += grade[i];
		i++;
		scanf("%d",&grade[i]);
	}
	avg = sum / i;

	int len = i;
	for(int a = 0; a < len-1; ++a) {
		for(int b = 0; b < len-1-a; ++b) {
			if(grade[b] < grade[b+1]) {
				int temp = grade[b];
				grade[b] = grade[b+1];
				grade[b+1] = temp;
			}
		}
	}
	printf("avg = %.2f\nnum = %d\nmax = %d\n",avg,num,max);
	printf("grades which is sorted: \n");
	for(int j = 0; j < len; j++) {
		printf("%d ",grade[j]);
	}
	return 0;
}