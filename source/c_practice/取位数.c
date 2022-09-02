#include "header.h"
/*取一个整数 a 从右端开始的 4～7 位。*/
/*程序分析：
  (1)先使 a 右移 4 位。
  (2)设置一个低 4 位全为 1，其余全为 0 的数，可用~(~0<<4)
  (3)将上面二者进行 & 运算.
*/
int main(int argc, char const *argv[])
{
	unsigned a,b,c,d;
    printf("enter a num: ");
    scanf("%o",&a);
    b=a>>4;
    c=~(~0<<4);
    printf("%o\n",c);
    d=b&c;
    printf("%o\n%o\n",a,d);
	return 0;
}