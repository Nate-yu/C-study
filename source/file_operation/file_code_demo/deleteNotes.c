#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
 * 事先建立一个带有注释的C语言源程序文件。删除源程序文件中的注释，写入另外一个文件中。
 */
int main(int argc, char const *argv[])
{
	FILE *fp1,*fp2;
	char s[80],*p,*q;
	if((fp1 = fopen("deleteNotesTest_Notes.c","r")) == NULL) {
		printf("f1Failed!");
		exit(0);
	}

	if((fp2 = fopen("deleteNotesTest_UnNotes.c","w")) == NULL) {
		printf("f2Failed!");
		exit(0);
	}

	while(fgets(s,80,fp1) != NULL) {
		p = s;
		while(*p != '\0') {
			// 找注释起始位置
			if(*p == '/' && *(p+1) == '*') {
				// 找注释结束位置
				for(q = p+2; !(*q == '*' && *(q+1) == '/'); q++) {
					q = q+2;
				}
				strcpy(p,q);
			} else {
				p++;
			}
		}
		fputs(s,fp2);
	}
	fclose(fp1);
	fclose(fp2);
	return 0;
}