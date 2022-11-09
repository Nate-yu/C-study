#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*已知一单链表LinkList，编写Inlist()完成在该链表第i个位置插入新结点s*/
typedef struct Node
{
	int data;
	struct Node *next;
}Node, *LinkList;

/*在L中第i个结点位置之前插入新的数据元素s，L的长度加1*/
int Inlist(LinkList *L, int i, int e) {
	int j;
	LinkList p,s;
	p = *L;
	j = 1;
	while(p && j < i) {
		p = p->next;
		++j;
	}
	if (!p || j > i)
		return 0;
	s = (LinkList)malloc(sizeof(Node)); // 生成新结点
	s->data = e;

	/*开始插入新结点*/
	s->next = p->next; // 将p的后继结点赋值给s的后继
	p->next = s; // 将s赋值给p的后继
	return 1;
}

/*随机产生n个元素的值，建立带表头结点的单链线性表L（尾插法,队列）*/
void CreateListTail(LinkList *L, int n) {
	LinkList p,tail;
	srand(time(0));
	*L = (LinkList)malloc(sizeof(Node));
	tail = *L; // tail为指向尾部的结点
	for(int i = 0; i < n; i++) {
		p = (Node *) malloc(sizeof(Node));
		p->data = rand() % 100 +1;
		tail->next = p; // 将表尾终端结点的指针指向新结点
		tail = p; // 将当前的新结点定义为表尾终端结点
	}
	tail->next = NULL; // 循环结束后，将当前结点的指针域置空，表示当前链表结束
}

/*单链表的整表打印*/
void ListPrint(LinkList *L) {
	LinkList p = *L;
	//int j = 1;
	while(p->next) {
		p = p->next;
		printf("%d ",p->data);
		//++j;
	}
}

int main() 
{
	LinkList *L;
	L = (LinkList*)malloc(sizeof(Node));
	int n;
	printf("请输入你要创建的单链表大小：");
	scanf("%d",&n);

	/*单链表的初始化（用尾插法建立单链表）*/
	CreateListTail(L,n);
	printf("随机生成的单链表为：");
	ListPrint(L);
	printf("\n");

	/*插入数据，测试Inlist()函数*/
	printf("请输入要在哪个位置插入新结点s：");
	int i;
	scanf("%d",&i);
	printf("请输入s的数据：");
	int s;
	scanf("%d",&s);
	Inlist(L,i,s);
	printf("插入后的链表为：");
	ListPrint(L);

	return 0;
}