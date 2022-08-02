#include<stdio.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
	// 定义文件指针
	FILE *fp;
	// 打开文件
	if((fp = fopen("f1.txt","w")) == NULL) { 
		printf("cann't open file");
		exit(0);
	}
	// 写文件
	fputs("Hello FILE!",fp);
	// 关闭文件
	if(fclose(fp)) {
		printf("cann't close file");
		exit(0);
	}
	return 0;
}