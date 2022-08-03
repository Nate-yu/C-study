#include <stdio.h>
#include <process.h>
#include <string.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
	char ch;
	FILE *fp;
	// 打开文件f1.txt
	if((fp = fopen("f1.txt","w+")) == NULL) {
		printf("File open error!\n");
		exit(0);
	}
	printf("input a string: \n");
	ch = getchar();
	// 输入字符“#”以结束
	while(ch != '#') {
		// 将输入的字符写入文件
		fputc(ch,fp);
		ch = getchar();
	}
	// 把指针fp所致的文件的内部位置指针移动到文件头
	rewind(fp);
	ch = fgetc(fp);
	// 读文件，并测试是否到达文件尾
	while(ch != EOF) {
		putchar(ch);
		ch = fgetc(fp);
	}
	// 关闭文件
	if(fclose(fp)) {
		printf("Can not close the file!\n");
		exit(0);
	}
	return 0;
}