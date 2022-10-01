#include "header.h" // 自定义头文件

/*函数声明*/

void fun(int a[][4],int b[4]) {
	for(int i = 0; i < 4; ++i) {
		b[i] = a[i][i];
	}
}

int main(int argc, char const *argv[])
{
	int x[][4] = {{1,2,3},{4},{5,6,7,8},{9,10}},y[4];
	fun(x,y);
	for(int i = 0; i < 4; ++i) {
		printf("%d,",y[i]);
	}
	printf("\n");
	return 0; 
}
