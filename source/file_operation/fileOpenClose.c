#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
	FILE *fp1,*fp2;
	char c;
	// 以只读方式打开源文件(注：srcFilename.dat文件必须是已经存在的文件)
	if((fp1 = fopen("srcFilename.dat","r")) == NULL) {
		printf("File open error!\n");
		exit(0);
	}
	// 以写方式打开目标文件
	if((fp2 = fopen("dstFilename.dat","w")) == NULL) {
		printf("File open error!\n");
		exit(0);
	}

	// 文件复制
	while(!feof(fp1)) {
		c = fgetc(fp1);
		fputc(c,fp2);
	}

	// 关闭文件
	if(fclose(fp1)) {
		printf("Can not close fp1\n");
		exit(0);
	}
	if(fclose(fp2)) {
		printf("Can not close fp2\n");
		exit(0);
	}
	return 0;
}