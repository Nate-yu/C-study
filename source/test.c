#include "header.h" // 自定义头文件

/*函数声明*/

int main(int argc, char const *argv[])
{
	int b[3][3] = {0,1,2,0,1,2,0,1,2},i,j,t=1;
	for(i=0;i <3;i++)
		for(j=i;j<=i;j++) {
			t=t+b[i][b[i][i]];
			cout<<t<<endl;
		}

	return 0; 
}
