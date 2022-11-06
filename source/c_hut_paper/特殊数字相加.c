#include <stdio.h>
/*a,b,c均为一位数，abc+cba = 1333, 617+716=1333，518+815=1333*/
int main(int argc, char const *argv[])
{
	for(int a = 0; a < 10; a++) {
		for(int b = 0; b < 10; b++) {
			for(int c = 0; c < 10; c++) {
				if((a*100+b*10+c) + (c*100+b*10+a) == 1333) {
					printf("a = %d b = %d c = %d\n",a,b,c);
				}
			}
		}
	}
	return 0;
}