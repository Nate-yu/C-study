#include "header.h"
/*题目：
	有两个磁盘文件A和B,各存放一行字母，要求把这两个文件中的信息合并（按字母顺序排列），
	输出到一个新文件C中。
*/
int main() 
{
	// 变量声明
    FILE *fa,*fb,*fc;
    int i,j;
    char strA[100],strB[100];
    char temp;

    // 从A和B两个文件中分别读取数据
    if((fa=fopen("A.txt","r"))==NULL) // A.txt 文件需要存在
    {
        printf("error: cannot open A file!\n");
        exit(0);
    }
    fgets(strA,99,fa);
    fclose(fa);
    if((fb=fopen("B.txt","r"))==NULL)  // B.txt 文件需要存在
    {
        printf("error: cannot open B file!\n");
        exit(0);
    }
    fgets(strB,100,fb);
    fclose(fb);

    // 将B连接到A后，合并内容
    strcat(strA,strB);
    // 按字母顺序排列
    for(i = strlen(strA)-1;i > 1;i--) {
        for(j=0;j<i;j++) {
        	if(strA[j]>strA[j+1]) {
                temp = strA[j];
                strA[j] = strA[j+1];
                strA[j+1] = temp;
            }
        }   
    }
    
    if((fc=fopen("C.txt","w"))==NULL)  // 合并为 C.txt
    {
        printf("error: cannot open C file!\n");
        exit(0);
    }
    // 以覆盖的形式输出到C文件
    fputs(strA,fc);
    fclose(fc);
    return 0;
}