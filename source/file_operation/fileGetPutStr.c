#include <stdio.h>
#include <process.h>
#include <string.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
	char string[20];
	FILE *fp;
	if((fp = fopen("f1.txt","w+")) == NULL) {
		printf("File open error!\n");
		exit(0);
	}
	printf("input a string: \n");
	// gets()函数读入回车符时停止，且回车符不作为字符串读入，因此只输入回车时，字符串长度为０，循环结束
	while(strlen(gets(string))>0) {
		fputs(string,fp);
		/*
		 * 把回车符写入到文件中，这样在fgets()函数读出文件数据时遇到回车符及结束，才能利用循环结构用
		 * fgets()函数多次读出字符串并输出，输出的字符串才能换行。若无该语句，文件中没有换行符，在使用
		 * fgets()函数时，将一次性读出文件所有字符直到文件结尾，这样输出时，字符串在同一行中。
		 */  
		fputs("\n",fp);
	}
	// 把指针fp所致的文件的内部位置指针移动到文件头
	rewind(fp);
	while(fgets(string,20,fp) != NULL) {
		puts(string);
	}
	if(fclose(fp)) {
		printf("Can not close the file!\n");
		exit(0);
	}
	return 0;
}