## ASCII 表

| ASCII值 | 控制字符 | ASCII值 | 控制字符 | ASCII值 | 控制字符 | ASCII值 | 控制字符 |
| :------ | :------- | :------ | :------- | :------ | :------- | :------ | :------- |
| 0       | NUT      | 32      | (space)  | 64      | @        | 96      | 、       |
| 1       | SOH      | 33      | !        | 65      | A        | 97      | a        |
| 2       | STX      | 34      | "        | 66      | B        | 98      | b        |
| 3       | ETX      | 35      | #        | 67      | C        | 99      | c        |
| 4       | EOT      | 36      | $        | 68      | D        | 100     | d        |
| 5       | ENQ      | 37      | %        | 69      | E        | 101     | e        |
| 6       | ACK      | 38      | &        | 70      | F        | 102     | f        |
| 7       | BEL      | 39      | '        | 71      | G        | 103     | g        |
| 8       | BS       | 40      | (        | 72      | H        | 104     | h        |
| 9       | HT       | 41      | )        | 73      | I        | 105     | i        |
| 10      | LF       | 42      | *        | 74      | J        | 106     | j        |
| 11      | VT       | 43      | +        | 75      | K        | 107     | k        |
| 12      | FF       | 44      | ,        | 76      | L        | 108     | l        |
| 13      | CR       | 45      | -        | 77      | M        | 109     | m        |
| 14      | SO       | 46      | .        | 78      | N        | 110     | n        |
| 15      | SI       | 47      | /        | 79      | O        | 111     | o        |
| 16      | DLE      | 48      | 0        | 80      | P        | 112     | p        |
| 17      | DCI      | 49      | 1        | 81      | Q        | 113     | q        |
| 18      | DC2      | 50      | 2        | 82      | R        | 114     | r        |
| 19      | DC3      | 51      | 3        | 83      | S        | 115     | s        |
| 20      | DC4      | 52      | 4        | 84      | T        | 116     | t        |
| 21      | NAK      | 53      | 5        | 85      | U        | 117     | u        |
| 22      | SYN      | 54      | 6        | 86      | V        | 118     | v        |
| 23      | TB       | 55      | 7        | 87      | W        | 119     | w        |
| 24      | CAN      | 56      | 8        | 88      | X        | 120     | x        |
| 25      | EM       | 57      | 9        | 89      | Y        | 121     | y        |
| 26      | SUB      | 58      | :        | 90      | Z        | 122     | z        |
| 27      | ESC      | 59      | ;        | 91      | [        | 123     | {        |
| 28      | FS       | 60      | <        | 92      | \        | 124     | \|       |
| 29      | GS       | 61      | =        | 93      | ]        | 125     | }        |
| 30      | RS       | 62      | >        | 94      | ^        | 126     | ～       |
| 31      | US       | 63      | ?        | 95      | _        | 127     | DEL      |

## 判断闰年

```c
#include <stdio.h>
 
int main()
{
    int year;
 
    printf("输入年份: ");
    scanf("%d",&year);
 
    if(year%4 == 0)
    {
        if( year%100 == 0)
        {
            // 这里如果被 400 整数是闰年
            if ( year%400 == 0)
                printf("%d 是闰年", year);
            else
                printf("%d 不是闰年", year);
        }
        else
            printf("%d 是闰年", year );
    }
    else
        printf("%d 不是闰年", year);
    
    return 0;
}
```

运行结果：

```c
输入年份: 1990
1990 不是闰
```

## 斐波那契数列

### 输出指定数量的斐波那契数列

```c
#include <stdio.h>
 
int main()
{
    int i, n, t1 = 0, t2 = 1, nextTerm;
 
    printf("输出几项: ");
    scanf("%d", &n);
 
    printf("斐波那契数列: ");
 
    for (i = 1; i <= n; ++i)
    {
        printf("%d, ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    return 0;
}
```

运行结果：

```c
输出几项: 10
斐波那契数列: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34,
```

### 输出指定数字前的斐波那契数列

```c
#include <stdio.h>
 
int main()
{
    int t1 = 0, t2 = 1, nextTerm = 0, n;
 
    printf("输入一个正数: ");
    scanf("%d", &n);
 
    // 显示前两项
    printf("斐波那契数列: %d, %d, ", t1, t2);
 
    nextTerm = t1 + t2;
 
    while(nextTerm <= n)
    {
        printf("%d, ",nextTerm);
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
    }
    
    return 0;
}
```

运行结果：

```c
输入一个正数: 100
斐波那契数列: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89,
```

## 最大公约数

### 使用 for 和 if

```c
#include <stdio.h>
 
int main()
{
    int n1, n2, i, gcd;
 
    printf("输入两个正整数，以空格分隔: ");
    scanf("%d %d", &n1, &n2);
 
    for(i=1; i <= n1 && i <= n2; ++i)
    {
        // 判断 i 是否为最大公约数
        if(n1%i==0 && n2%i==0) // i同为两数因数时，就把i赋值给gcd
            gcd = i;
    }
 
    printf("%d 和 %d 的最大公约数是 %d", n1, n2, gcd);
 
    return 0;
}
```

运行结果：

```c
输入两个正整数，以空格分隔: 81 153
81 和 153 的最大公约数是 9
```

### 使用 while 和 if

```c
#include <stdio.h>
int main()
{
    int n1, n2;
    
    printf("输入两个数，以空格分隔: ");
    scanf("%d %d",&n1,&n2);
 
    while(n1!=n2)
    {
        if(n1 > n2)
            n1 -= n2;
        else
            n2 -= n1;
    }
    printf("GCD = %d",n1);
 
    return 0;
}
```

运行结果：

```c
输入两个数，以空格分隔: 81 153
GCD = 9
```

### 适用正数和负数

```c
#include <stdio.h>
 
int main()
{
    int n1, n2;
 
    printf("输入两个数，以空格分隔: ");
    scanf("%d %d",&n1,&n2);
 
    // 如果输入的是负数，将其转换为正数
    n1 = ( n1 > 0) ? n1 : -n1;
    n2 = ( n2 > 0) ? n2 : -n2;
 
    while(n1!=n2)
    {
        if(n1 > n2)
            n1 -= n2;
        else
            n2 -= n1;
    }
    printf("GCD = %d",n1);
 
    return 0;
}
```

运行结果：

```c
输入两个数，以空格分隔: 81 -153
GCD = 9
```

### 使用递归

```c
#include <stdio.h>
int hcf(int n1, int n2);
int main()
{
   int n1, n2;
   printf("输入两个正整数: ");
   scanf("%d %d", &n1, &n2);
 
   printf("%d 和 %d 的最大公约数为 %d", n1, n2, hcf(n1,n2));
   return 0;
}
 
int hcf(int n1, int n2)
{
    if (n2 != 0)
       return hcf(n2, n1%n2); // z
    else 
       return n1;
}
```

## 最小公倍数

### 使用 while 和 if

```c
#include <stdio.h>
 
int main()
{
    int n1, n2, minMultiple;
    printf("输入两个正整数: ");
    scanf("%d %d", &n1, &n2);
 
    // 判断两数较大的值，并赋值给 minMultiple
    minMultiple = (n1>n2) ? n1 : n2;
 
    // 条件为 true
    while(1)
    {
        if( minMultiple%n1==0 && minMultiple%n2==0 )
        {
            printf("%d 和 %d 的最小公倍数为 %d", n1, n2,minMultiple);
            break;
        }
        ++minMultiple;
    }
    return 0;
}
```

运行结果：

```c
输入两个正整数: 72 120
72 和 120 的最小公倍数为 360
```

### 通过最大公约数计算

```c
#include <stdio.h>
 
int main()
{
    int n1, n2, i, gcd, lcm;
 
    printf("输入两个正整数: ");
    scanf("%d %d",&n1,&n2);
 
    for(i=1; i <= n1 && i <= n2; ++i)
    {
        // 判断最大公约数
        if(n1%i==0 && n2%i==0)
            gcd = i;
    }
 
    lcm = (n1*n2)/gcd; // 最小公倍数 = 两数之积 / 最大公约数
    printf("%d 和 %d 的最小公倍数为 %d", n1, n2, lcm);
 
    return 0;
}
```

运行结果：

```c
输入两个正整数: 72 120
72 和 120 的最小公倍数为 360
```

## 阶乘

### 无递归

```c
#include <stdio.h>
 
int main()
{
    int n, i;
    unsigned long long factorial = 1;
 
    printf("输入一个整数: ");
    scanf("%d",&n);
 
    // 如果输入是负数，显示错误
    if (n < 0)
        printf("Error! 负数没有阶乘阶乘");
    else
    {
        for(i=1; i<=n; ++i)
        {
            factorial *= i;              // factorial = factorial*i;
        }
        printf("%d! = %llu", n, factorial);
    }
    
    return 0;
}
```

运行结果：

```c
输入一个整数: 10
10! = 3628800
```

### 使用递归

```c
#include <stdio.h>
long int multiplyNumbers(int n);
 
int main()
{
    int n;
    printf("输入一个整数: ");
    scanf("%d", &n);
    printf("%d! = %ld", n, multiplyNumbers(n));
    return 0;
}
long int multiplyNumbers(int n)
{
    if (n > 1)
        return n*multiplyNumbers(n-1);
    else
        return 1;
}
```

## 判断回文数

```c
#include <stdio.h>
 
int main()
{
    int n, reversedInteger = 0, remainder, originalInteger;
 
    printf("输入一个整数: ");
    scanf("%d", &n);
 
    originalInteger = n;
 
    // 翻转
    while( n!=0 )
    {
        remainder = n%10; // 取个位数
        reversedInteger = reversedInteger*10 + remainder; // 开始翻转
        n /= 10; // 去掉个位数
    }
 
    // 判断
    if (originalInteger == reversedInteger)
        printf("%d 是回文数。", originalInteger);
    else
        printf("%d 不是回文数。", originalInteger);
    
    return 0;
}
```

运行结果：

```c
输入一个整数: 12321
12321 是回文数
```

## 判断素数

### 判断单个数是否为素数

```c
#include <stdio.h>
 
int main()
{
    int n, i, flag = 0;
 
    printf("输入一个正整数: ");
    scanf("%d",&n);
 
    for(i=2; i<=n/2; ++i)
    {
        // 符合该条件不是素数
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }
 
    if (flag==0)
        printf("%d 是素数",n);
    else
        printf("%d 不是素数",n);
    
    return 0;
}
```

运行结果：

```c
输入一个正整数: 29
29 是素数
```

### 判断两个数之间的素数

```c
#include <stdio.h>
 
int main()
{
    int low, high, i, flag;
    printf("输入两个整数: ");
    scanf("%d %d", &low, &high);
 
    printf("%d 与 %d 之间的素数为: ", low, high);
 
    while (low < high)
    {
        flag = 0;
 
        for(i = 2; i <= low/2; ++i)
        {
            if(low % i == 0)
            {
                flag = 1;
                break;
            }
        }
 
        if (flag == 0)
            printf("%d ", low);
 
        ++low;
    }
 
    return 0;
}
```

运行结果：

```c
输入两个整数: 100  200
100 与 200 之间的素数为: 101 103 107 109 113 127 131 137 139 149 151 157 163 167 173 179 181 191 193 197 199
```

### 使用函数判断两数间的素数

```c
#include <stdio.h>
 
int checkPrimeNumber(int n);
int main()
{
    int n1, n2, i, flag;
 
    printf("输入两个正整数: ");
    scanf("%d %d", &n1, &n2);
    printf("%d 和 %d 间的素数为: ", n1, n2);
 
    for(i=n1+1; i<n2; ++i)
    {
        // 判断是否为素数
        flag = checkPrimeNumber(i);
 
        if(flag == 1)
            printf("%d ",i);
    }
    return 0;
}
 
// 函数定义
int checkPrimeNumber(int n)
{
    int j, flag = 1;
 
    for(j=2; j <= n/2; ++j)
    {
        if (n%j == 0)
        {
            flag =0;
            break;
        }
    }
    return flag;
}
```

输出结果为：

```c
输入两个正整数: 10 30
10 和 30 间的素数为: 11 13 17 19 23 29
```

## 判断水仙花数

### 判断输入是否为水仙花数

```c
#include <stdio.h>
int main()
{
    int number, originalNumber, remainder, result = 0;
 
    printf("输入一个三位数: ");
    scanf("%d", &number);
 
    originalNumber = number;
 
    while (originalNumber != 0)
    {
        remainder = originalNumber%10;
        result += remainder*remainder*remainder;
        originalNumber /= 10;
    }
 
    if(result == number)
        printf("%d 是 水仙花数",number);
    else
        printf("%d 不是 水仙花数",number);
 
    return 0;
}
```

运行结果：

```c
输入三位数: 371
371 是 水仙花数 
```

### 两数之间的水仙花数

```c
#include <stdio.h>
#include <math.h>
 
int main()
{
    int low, high, i, temp1, temp2, remainder, n = 0, result = 0;
 
    printf("输入两个整数: ");
    scanf("%d %d", &low, &high);
    printf("%d 和 %d 之间的水仙花数为: ", low, high);
 
    for(i = low + 1; i < high; ++i)
    {
        temp2 = i;
        temp1 = i;
 
        // 计算
        while (temp1 != 0)
        {
            temp1 /= 10;
            ++n;
        }
        
        while (temp2 != 0)
        {
            remainder = temp2 % 10;
            result += pow(remainder, n);
            temp2 /= 10;
        }
 
        if (result == i) {
            printf("%d ", i);
        }
 
        n = 0;
        result = 0;
 
    }
    return 0;
}
```

运行结果：

```c
输入两个整数: 100 1000
100 和 1000 之间的水仙花数为: 153 370 371 407
```

### 使用函数判断水仙花数

```c
#include <stdio.h>
#include <math.h>
 
int checkPrimeNumber(int n);
int checkArmstrongNumber(int n);
 
int main()
{
    int n, flag;
 
    printf("输入正整数: ");
    scanf("%d", &n);
 
    // 检测素数
    flag = checkPrimeNumber(n);
    if (flag == 1)
        printf("%d 是素数。\n", n);
    else
        printf("%d 不是素数\n", n);
 
    // 检测 水仙花数
    flag = checkArmstrongNumber(n);
    if (flag == 1)
        printf("%d 是 水仙花数。", n);
    else
        printf("%d 不是 水仙花数。",n);
    return 0;
}
 
int checkPrimeNumber(int n)
{
    int i, flag = 1;
 
    for(i=2; i<=n/2; ++i)
    {
 
    // 非素数条件
        if(n%i == 0)
        {
            flag = 0;
            break;
        }
    }
    return flag;
}
 
int checkArmstrongNumber(int number)
{
    int originalNumber, remainder, result = 0, n = 0, flag;
 
    originalNumber = number;
 
    while (originalNumber != 0)
    {
        originalNumber /= 10;
        ++n;
    }
 
    originalNumber = number;
 
    while (originalNumber != 0)
    {
        remainder = originalNumber%10;
        result += pow(remainder, n);
        originalNumber /= 10;
    }
 
    // 判断条件
    if(result == number)
        flag = 1;
    else
        flag = 0;
 
    return flag;
}
```

输出结果为：

```
输入正整数: 371
371 不是素数
371 是 水仙花数。
```
