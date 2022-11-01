#include "header.h" // 自定义头文件

/*函数声明*/

int main(int argc, char const *argv[])
{
	union {
		char i[4];
		int k;
	}r;
	r.i[0] = 2;
	r.i[1] = 2;
	r.i[2] = 0;
	r.i[3] = 0;
	printf("%d %d %d %d %d",r.i[0],r.i[1],r.i[2],r.i[3],r.k);
	return 0; 
}
