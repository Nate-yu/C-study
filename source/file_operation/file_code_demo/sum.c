#include <stdio.h>
#include <stdlib.h>
/*
 * 事先建立一个文件，在其中存放若干整数，以空格或换行符隔开。
 * 将文本中的数据求和并写入文本文件尾
 */
int main(int argc, char const *argv[])
{
	FILE *fp;
	int num,sum = 0;
	if((fp = fopen("text.dat","r+")) == NULL) {
		printf("Fail!");
		exit(0);
	}

	while(fscanf(fp,"%d",&num) != EOF) {
		sum+=num;
	}
	fprintf(fp," %d",sum);
	fclose(fp);
	return 0;
}