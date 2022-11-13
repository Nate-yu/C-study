#include <stdio.h>
/*          2x+1 (x<0)
 * f(x) = { y=0 (x=0)
 *          2x-1 (x>0)	
 */
int main(int argc, char const *argv[])
{
	float x;
	printf("请输入x：");
	scanf("%f",&x);
	if(x < 0) {
		printf("y = %.2f",2 * x + 1);
	} else if(x == 0) {
		printf("y = 0");
	} else {
		printf("y = %.2f",2 * x - 1);
	}
	return 0;
}