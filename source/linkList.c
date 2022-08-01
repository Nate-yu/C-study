#include<stdio.h>
#include <stdlib.h>
#define NULL 0
// 教师结构体
typedef struct Node
{
	int no;
	char name[8];
	float wage;
	struct Node *next;
}teacher;

// 记录结点个数
int n = 0;

/*建表函数*/ 
teacher *create() {
	// 初始化结点
	teacher *head;
	teacher *p1,*p2; // p1为当前结点，p2为上一结点
	p1 = p2 = (teacher *)malloc(sizeof(teacher));
	scanf("%d%s%f",&p1->no,p1->name,&p1->wage);
	head = NULL;

	// 尾插法建表
	while(p1->no != 0) {
		// 结点个数自增
		n++;

		if(n == 1) { 
			// 头结点指向第一个结点
			head = p1;
		} else if (n > 1) { 
			// 当存在两个及以上结点时，p2所指向的为上一个结点，此时让p2的next指针指向新建的结点
			p2->next = p1;
		}

		// 移动上一个结点的指针到当前结点
		p2 = p1;
		// p1指向新建结点
		p1 = (teacher *)malloc(sizeof(teacher));
		// 继续读入数据到新结点
		scanf("%d%s%f",&p1->no,p1->name,&p1->wage);
	}

	// 循环结束，p2指向最后一个结点，此时让其next指针为NULL即为建立成功
	p2->next = NULL;

	return head;
}

/*打印函数*/
void print(teacher *head) {
	teacher *p;
	// p指向第一个结点
	p = head;
	// 合法性判定
	if(head) {
		do {
			// 循环输出并将指针移动至下一个结点，直至到最后一个结点
			printf("%d\t%s\t%f\n",p->no,p->name,p->wage);
			p = p->next;
		} while(p);
	}
}

// 测试create()与print()
int main() 
{
	teacher *T = create();
	print(T);
	return 0;
}