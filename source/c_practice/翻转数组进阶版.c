#include "header.h"
/*题目：有 n个整数，使其前面各数顺序向后移 m 个位置，最后m个数变成最前面的 m 个数。*/
void reverseArray(int a[], int len) {
    for(int i = 0, j = len - 1; i < len/2; i++,j--) {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
}

int main(int argc, char const *argv[])
{
    int a[10];
    int len = 0;
    scanf("%d",&len);
    for(int i = 0; i < len; ++i) {
        scanf("%d",&a[i]);
    }
    int offset = 0;
    scanf("%d",&offset);

    reverseArray(a,len-offset);
    reverseArray(a+len-offset,offset);
    reverseArray(a,len);

    for(int i = 0; i < len; ++i) {
        printf("%d ",a[i]);
    }
    return 0;
}