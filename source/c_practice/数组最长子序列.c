#include <stdio.h>
int main(int argc, char const *argv[])
{
	int b[] = {1,2,1,3,1,1,3,3,3,2,1,1};
	int max=0, n=12, i=0, temp;
	while(i < n) {
		temp = 1;
		i++;
		while(i < n && b[i-1] == b[i]) {
			temp++;
			i++;
		}
		if(temp > max) {
			max = temp;
		}
	}
	printf("max=%d\n",max);
	return 0;
}