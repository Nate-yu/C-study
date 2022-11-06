#include <stdio.h>
#include <math.h>
/*找出1到99的同构数，它出现在自己平方数的右边，5在25右边，25在625右边，5和25都是同构数*/
int main(int argc, char const *argv[])
{
	for(int i = 1; i < 100; i++) {
		int j = i*i;
		if(j % 10 == i || j % 100 == i || j % 1000 == i) {
			printf("%d是同构数\n",i);
		}
	}
	return 0;
}