#include <stdio.h>
/*
 * 有一堆桃子，5只猴子来分，第一只把桃子分成5份，多了一个，把多的扔掉，拿走一份，
 * 第二只又分成5份，又多了一个，再拿走一份，后面3只猴子都这样做，求桃子总数
 */
int main(int argc, char const *argv[])
{
    int n,j,k,l,m;
    for(n = 5; ; n++){
        j = 4*(n-1)/5;
        k = 4*(j-1)/5;
        l = 4*(k-1)/5;
        m = 4*(l-1)/5;
        if(n%5==1 && j%5==1 && k%5==1 && l%5==1 && m%5==1){
            printf("至少有%d个桃子\n",n);
            printf("从第二只猴子开始分别见到桃子的个数：%d %d %d %d\n",j,k,l,m);
            break;
        }
    }
	return 0;
}