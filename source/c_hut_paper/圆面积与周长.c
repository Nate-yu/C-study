#include <stdio.h>
#define PI 3.14
/*输入半径，当半径大于等于0时输出圆面积和周长，否则输出提示信息*/
int main(int argc, char const *argv[])
{
	int r;
	printf("请输入半径r：");
	scanf("%d",&r);
	float c,s;
	while(r < 0) {
		printf("请输入大于0的数！\n");
		scanf("%d",&r);
	}
	s = PI * r * r;
	c = 2 * PI * r;
	printf("圆面积为：%.2f\n圆周长为：%.2f",s,c);
	return 0;
}