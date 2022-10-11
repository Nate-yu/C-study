#include <stdio.h>
/*从键盘输入100个整型数据，找出其中的最大值并显示出来*/
int main(int argc, char const *argv[])
{
	int num, max = 0;
	for(int i = 0; i < 100; ++i) {
		scanf("%d",&num);
		if (max < num) {
			max = num;
		}
	}
	printf("%d",max);
	return 0;
}