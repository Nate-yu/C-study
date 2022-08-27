#include "header.h"
/*题目：输入某年某月某日，判断这一天是这一年的第几天？*/
/*程序分析：以3月5日为例，应该先把前两个月的加起来，
  然后再加上5天即本年的第几天，特殊情况，闰年且输入月份大于3时需考虑多加一天。*/
int main()
{
    int year, month, day,sumday=0;
    int monthday[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    printf("please enter year, month and day, fomat: year,month,day(2015,12,10)\n");
    scanf("%d,%d,%d",&year,&month,&day);  // 格式为：2015,12,10
    if (year % 400 == 0 || (year % 100 != 0 && year % 4 == 0))
    {
        monthday[1] =29;
    }
    for (int i = 0; i < month-1; i++)
    {
        sumday += monthday[i];
    }
    sumday += day;

    printf("This is the %dth day of this year\n",sumday);
}