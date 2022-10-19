#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
	static char s[][10] = {"while","for","switch","if","break","continue"};
	char temp[10];
	for(int i = 0; i < 6; ++i) {
		for(int j = 5; j >= 1; --j) {
			// 从后往前比较时，如果后一个字符串词典序小于前一个字符串字典序
			if(strcmp(s[j],s[j-1]) < 0) { 
				strcpy(temp,s[j]);
				strcpy(s[j],s[j-1]);
				strcpy(s[j-1],temp);
			}
			// 每一趟比较
			for(int i = 0; i < 6; ++i) {
				printf("%s ",s[i]);
			}
			printf("\n");
		}
		printf("\n");
	}
	/*for(int i = 0; i < 6; ++i) {
		printf("%s\n",s[i]);
	}*/
	return 0;
}