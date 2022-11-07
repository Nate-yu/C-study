#include <stdio.h>
/*输入一个字符串，全部字母转换成大写后输出到test文件中保存*/
int main(int argc, char const *argv[])
{
	char str[100],*p = str;
	printf("请输入字符串：");

	// 输入字符串
	while((*p++ = getchar()) != '!');

	// 重置p指针指向str字符串的第一个字符
	p = str;

	printf("\n您输入的字符串为：%s",str);
	FILE *fp = fopen("test.txt","w+");

	// 开始在写入文件时进行字符转换
	while(*p++ != '!') {
		if(*p >= 'a' && *p <= 'z') {
			fputc(*p - 32, fp);
		} else {
			fputc(*p, fp);
		}
	}
	
	rewind(fp);
	fgets(str,10,fp);
	printf("\n从文件中读出的字符串为：%s",str);
	fclose(fp);
	return 0;
}