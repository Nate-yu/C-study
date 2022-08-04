#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define MAX_LEN 10
FILE *ptr1;
typedef struct {
	char id[10];
	char name[MAX_LEN];
	float score;
}student;
student stuRecord;
void add_grade(); // 添加学生信息即将学生信息写入文件
void show_item(); // 显示学生相关信息即将文件信息输出到屏幕上
int main(int argc, char const *argv[])
{
	system("cls");
	add_grade();
	show_item();
	return 0;
}

void add_grade() {
	char next = 'y';
	// 为读写文件打开一个二进制文件
	ptr1 = fopen("storage.sto","rb+");
	// 假如文件不存在，为读写建立二进制文件
	if (ptr1 == NULL) {
		ptr1 = fopen("storage.sto","wb+");
		if (ptr1 == NULL) {
			printf("Cannot open file!");
			exit(0);
		}
	}
	// 定位到文件末尾
	fseek(ptr1,0,SEEK_END);
	while(next == 'y') {
		printf("student's number: \n");
		gets(stuRecord.id);
		printf("student's name: \n");
		gets(stuRecord.name);
		printf("student's score: \n");
		scanf("%f",&stuRecord.score);

		// 向文件写入数据
		fprintf(ptr1, "%10s%10s%10.1f", stuRecord.id,stuRecord.name,stuRecord.score);

		printf("\nWould you like to enter more items?(y/n)\n");
		// 清空缓冲区
		fflush(stdin);
		// 输入y，继续循环，即继续输入信息并写入文件中
		next = getch();
	}
	fclose(ptr1);
}

void show_item() {
	ptr1 = fopen("storage.sto","rb+");
	if (ptr1 == NULL) {
		printf("Cannot open file!");
		exit(0);
	}
	// 使文件指针重新返回到文件的开头
	printf("\n\nItem List\n----------------------\n");
	printf("id         name        grade\n");
	while(!feof(ptr1)) {
		// 从文件读出数据到结构体
		fscanf(ptr1,"%10s%10s%10f",stuRecord.id,stuRecord.name,&stuRecord.score);
		// 打印到屏幕上
		printf("%-10s %-10s %5.1f\n",stuRecord.id,stuRecord.name,stuRecord.score);
	}
	fclose(ptr1);
}