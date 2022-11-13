#include <stdio.h>
/*输入成绩，输出等级*/
int main(int argc, char const *argv[])
{
	int score;
	scanf("%d",&score);
	printf("成绩等级为：");
	if(score >= 90 && score <= 100) printf("A");
	else if(score >= 80 && score < 90) printf("B");
	else if(score >= 70 && score < 80) printf("C");
	else if(score >= 60 && score < 70) printf("D");
	else if(score >= 0 && score < 60) printf("E");
	else printf("输入有误！");
	return 0;
}