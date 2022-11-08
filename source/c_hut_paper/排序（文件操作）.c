#include <stdio.h>
#include <stdlib.h>
/*键盘读入10个整数，从小到大排好序，写入磁盘文件test.dat中*/
int main(int argc, char const *argv[])
{
	// 数据初始化
	int a[10];
	for(int i = 0; i < 10; i++) {
		scanf("%d",&a[i]);
	}

	// 数据排序
	for(int i = 0; i < 9; i++) {
		for(int j = i+1; j < 10; j++) {
			if(a[i] > a[j]) {
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}

	// 写入文件
	FILE *fp;
	if((fp = fopen("d:\\test\\test.dat","w")) == NULL) {
		printf("test.dat文件不存在！");
		exit(0);
	}
	for(int i = 0; i < 10; i++) {
		fprintf(fp,"%d ",a[i]);
	}
	fclose(fp);
	return 0;
}