#include <stdio.h>
#include <stdlib.h>
/*
 * 在文件a.txt与b.txt中分别存有两个字符串，
 * 将这两个字符串按依序交叉的方式合并为一个字符串保存在a.txt中，
 * 多余的字符追加在最后
 */
int main(int argc, char const *argv[])
{
	// 数据定义与初始化
	FILE *fpa, *fpb, *fpc;
	char ch;
	if((fpa = fopen("a.txt","r+")) == NULL) {
		printf("无法找到a文件！");
		exit(0);
	}
	if((fpb = fopen("b.txt","r")) == NULL) {
		printf("无法找到b文件！");
		exit(0);
	}
	fpc = fopen("c.txt","w+");

	// 先以a文件为主，把a，b两个文件的字符交叉放入c文件中
	while(!feof(fpa)) {
		// 从a文件中取字符放到c文件
		ch = fgetc(fpa);
		fputc(ch,fpc);
		
		// 从b文件中取字符放到c文件
		if(!feof(fpb)) {
			ch = fgetc(fpb);
			fputc(ch,fpc);
		}
	}

	// b文件中字符串长度大于a文件时，直接把b文件剩余部分的字符追加在c文件字符串的后面
	while(!feof(fpb)) {
		ch = fgetc(fpb);
		fputc(ch,fpc);
	}

	// 重置a，c文件的文件指针到文件首部
	rewind(fpa);
	rewind(fpc);

	// 把c文件中的字符串取出覆盖a文件
	/*while(!feof(fpc)) {
		ch = fgetc(fpc);
		fputc(ch,fpa);
	}*/
	char *str;
	str = fgets(fpc);
	fputs(str,fpa);

	fclose(fpc);
	fclose(fpb);
	fclose(fpa);
	return 0;
}