#include "header.h"
/*题目：字符串反转，如将字符串 "www.runoob.com" 反转为 "moc.boonur.www"。*/
void reverse(char s[])
{
    // 获取字符串长度
    int len = strlen(s);
    
    // 交换
    for(int i = 0; i < len/2; i++) {
        int j = len-1-i;
        char temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
}
 
int main()
{
    char s[] = "www.runoob.com";
    printf("'%s' => ", s);
    reverse(s);           // 反转字符串
    printf("'%s'\n", s);
    return 0;
}