#include <stdio.h>
/*求出100到600之间同时满足除以3余2和除以5余3条件的数的个数*/
int main(int argc, char const *argv[])
{
	int count = 0;
	for(int i = 100; i <= 600; i++) {
		if ((i % 3 == 2) && (i % 5 == 3)) {
			count++;
			printf("%d ",i);
		}
	}
	printf("\ncounts: %d",count);
	return 0;
}