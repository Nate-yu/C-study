#include <stdio.h>
#include <stdlib.h>
struct student {
	char id[15];
	char name[8];
	int score[3];
	float avg;
}stu[5];

int main(int argc, char const *argv[])
{
	int sum = 0;
	FILE *fp;
	for(int i = 0; i < 5; ++i) {
		printf("\n input info of student%d:\n",i+1);
		printf("NO.: ");
		scanf("%s",stu[i].id);
		printf("Name: ");
		scanf("%s",stu[i].name);
		
		sum = 0;
		for(int j = 0; j < 3; ++j) {
			printf("Score %d: ",j+1);
			scanf("%d",&stu[i].score[j]);
			sum += stu[i].score[j];
		}
		stu[i].avg = sum/3.0;

		fp = fopen("stu.txt","wb+");
		for(int i = 0; i < 5; ++i) {
			fwrite(&stu[i], sizeof(struct student)+1, 1, fp);
		}
		rewind(fp);
		for(int i = 0; i < 5; ++i) {
			fread(&stu[i], sizeof(struct student)+1, 1, fp);
			printf("%s, %s, %d, %d, %d, %6.2f\n",stu[i].id, stu[i].name, 
				stu[i].score[0], stu[i].score[1], stu[i].score[2], stu[i].avg);
		}
		fclose(fp);
	}
	return 0;
}