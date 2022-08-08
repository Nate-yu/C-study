#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*建立一个abc文本文件，向其中写入“this is a test”字符串，然后显示该文件的内容*/
int main(int argc, char const *argv[])
{
	FILE *fp;
	if((fp = fopen("abc.txt","wb+")) == NULL) {
		printf("Cannot open!");
		exit(0);
	}
	char str[] = "this is a test";
	fwrite(str,strlen(str)+1,1,fp);
	// 用于接收读取数据的缓冲区数组大小必须是4的倍数，否则读取出来的字符串会有一定程度的乱码
	char buf[28];
	fseek(fp,SEEK_SET,0);
	fread(buf,strlen(buf)+1,1,fp);
	printf("%s\n",buf);
	fclose(fp);
	return 0;
}