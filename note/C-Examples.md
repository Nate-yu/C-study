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

## 杨辉三角

```c
#include <stdio.h>
int main()
{
    int rows, coef = 1, space, i, j;
 
    printf("行数: ");
    scanf("%d",&rows);
 
    for(i=0; i<rows; i++)
    {
        // 空格数
        for(space=1; space <= rows-i; space++)
            printf("  ");
 
        // 循环输出数据
        for(j=0; j <= i; j++)
        {
            if (j==0 || i==0)
                coef = 1;
            else
                coef = coef*(i-j+1)/j;
 
            printf("%4d", coef);
        }
        printf("\n");
    }
 
    return 0;
}
```

```c
           1
         1   1
       1   2   1
     1   3   3    1
   1  4    6   4   1
 1  5   10   10  5   1 
```

## 计算一个数是否可为两个素数之和

```c
#include <stdio.h>
 
int checkPrime(int n);
int main()
{
    int n, i, flag = 0;
 
    printf("输入正整数: ");
    scanf("%d", &n);
 
    for(i = 2; i <= n/2; ++i)
    {
        // 检测判断
        if (checkPrime(i) == 1)
        {
            if (checkPrime(n-i) == 1)
            {
                printf("%d = %d + %d\n", n, i, n - i);
                flag = 1;
            }
 
        }
    }
 
    if (flag == 0)
        printf("%d 不能分解为两个素数。", n);
 
    return 0;
}
 
// 判断素数
int checkPrime(int n)
{
    int i, isPrime = 1;
 
    for(i = 2; i <= n/2; ++i)
    {
        if(n % i == 0)
        {
            isPrime = 0;
            break;
        }  
    }
 
    return isPrime;
}
```

输出结果为：

```c
输入正整数: 34
34 = 3 + 31
34 = 5 + 29
34 = 11 + 23
34 = 17 + 17
```

## 二进制与十进制相互转换

### 二进制转换为十进制

```c
#include <stdio.h>
#include <math.h>
 
int convertBinaryToDecimal(long long n);
 
int main()
{
    long long n;
    printf("输入一个二进制数: ");
    scanf("%lld", &n);
    printf("二进制数 %lld 转换为十进制为 %d", n, convertBinaryToDecimal(n));
    return 0;
}
 
int convertBinaryToDecimal(long long n)
{
    int decimalNumber = 0, i = 0, remainder;
    while (n!=0)
    {
        // 取二进制数的最后一位
        remainder = n%10;
        // 去掉最后一位
        n /= 10;
        // 转换为十进制
        decimalNumber += remainder*pow(2,i);
        ++i;
    }
    return decimalNumber;
}
```

输出结果为：

```c
输入一个二进制数: 110110111
二进制数 110110111 转换为十进制为 439
```

### 十进制转换为二进制

```c
#include <stdio.h>
#include <math.h>
 
long long convertDecimalToBinary(int n);
 
int main()
{
    int n;
    printf("输入一个十进制数: ");
    scanf("%d", &n);
    printf("十进制数 %d 转换为二进制位 %lld", n, convertDecimalToBinary(n));
    return 0;
}
 
long long convertDecimalToBinary(int n)
{
    long long binaryNumber = 0;
    int remainder, i = 1, step = 1;
 
    while (n!=0)
    {
        remainder = n%2;
        printf("Step %d: %d/2, 余数 = %d, 商 = %d\n", step++, n, remainder, n/2);
        n /= 2;
        binaryNumber += remainder*i;
        i *= 10;
    }
    return binaryNumber;
}
```

输出结果为：

```
输入一个十进制数: 100
Step 1: 100/2, 余数 = 0, 商 = 50
Step 2: 50/2, 余数 = 0, 商 = 25
Step 3: 25/2, 余数 = 1, 商 = 12
Step 4: 12/2, 余数 = 0, 商 = 6
Step 5: 6/2, 余数 = 0, 商 = 3
Step 6: 3/2, 余数 = 1, 商 = 1
Step 7: 1/2, 余数 = 1, 商 = 0
十进制数 100 转换为二进制位 1100100
```

## 八进制与十进制相互转换

### 十进制转换为八进制

```c
#include <stdio.h>
#include <math.h>
 
int convertDecimalToOctal(int decimalNumber);
int main()
{
    int decimalNumber;
 
    printf("输入一个十进制数: ");
    scanf("%d", &decimalNumber);
 
    printf("十进制数 %d 转换为八进制为 %d", decimalNumber, convertDecimalToOctal(decimalNumber));
 
    return 0;
}
 
int convertDecimalToOctal(int decimalNumber)
{
    int octalNumber = 0, i = 1;
 
    while (decimalNumber != 0)
    {
        octalNumber += (decimalNumber % 8) * i;
        decimalNumber /= 8;
        i *= 10;
    }
 
    return octalNumber;
}
```

输出结果为：

```c
输入一个十进制数: 78
十进制数 78 转换为八进制为 116
```

### 八进制转换为十进制

```c
#include <stdio.h>
#include <math.h>
 
long long convertOctalToDecimal(int octalNumber);
int main()
{
    int octalNumber;
 
    printf("输入一个八进制数: ");
    scanf("%d", &octalNumber);
 
    printf("八进制数 %d  转换为十进制为 %lld", octalNumber, convertOctalToDecimal(octalNumber));
 
    return 0;
}
 
long long convertOctalToDecimal(int octalNumber)
{
    int decimalNumber = 0, i = 0;
 
    while(octalNumber != 0)
    {
        decimalNumber += (octalNumber%10) * pow(8,i);
        ++i;
        octalNumber/=10;
    }
 
    i = 1;
 
    return decimalNumber;
}
```

输出结果为：

```c
输入一个八进制数: 116
八进制数 116  转换为十进制为 78
```

## 字符串翻转

```c
#include <stdio.h>
void reverseSentence();
 
int main()
{
    printf("输入一个字符串: ");
    reverseSentence();
    return 0;
}
 
void reverseSentence()
{
    char c;
    scanf("%c", &c);
 
    if( c != '\n')
    {
        // 递归实现
        reverseSentence();
        // 遇到回车后从最后一个字符开始打印
        printf("%c",c);
    }
}
```

输出结果为：

```c
输入一个字符串: runoob
boonur
```

## 矩阵转置

```c
#include <stdio.h>
 
int main()
{
    int a[10][10], transpose[10][10], r, c, i, j;
    printf("输入矩阵的行与列: ");
    scanf("%d %d", &r, &c);
 
    // 存储矩阵的元素
    printf("\n输入矩阵元素:\n");
    for(i=0; i<r; ++i)
        for(j=0; j<c; ++j)
        {
            printf("输入元素 a%d%d: ",i+1, j+1);
            scanf("%d", &a[i][j]);
        }
 
    // 显示矩阵 a[][] 
    printf("\n输入矩阵: \n");
    for(i=0; i<r; ++i)
        for(j=0; j<c; ++j)
        {
            printf("%d  ", a[i][j]);
            if (j == c-1)
                printf("\n");
        }
 
    // 转换
    for(i=0; i<r; ++i)
        for(j=0; j<c; ++j)
        {
            transpose[j][i] = a[i][j];
        }
 
    // 显示转换后的矩阵 a
    printf("转置后矩阵:\n");
    for(i=0; i<c; ++i)
        for(j=0; j<r; ++j)
        {
            printf("%d  ",transpose[i][j]);
            if(j==r-1)
                printf("\n");
        }
 
    return 0;
}
```

输出结果为：

```
输入矩阵的行与列: 2 3

输入矩阵元素:
输入元素 a11: 2
输入元素 a12: 3
输入元素 a13: 4
输入元素 a21: 5
输入元素 a22: 6
输入元素 a23: 4

输入矩阵: 
2  3  4  

5  6  4  

转换后矩阵:
2  5  

3  6  

4  4  
```

## 计算两个时间段的差值

```c
#include <stdio.h>
 
struct TIME
{
  int seconds;
  int minutes;
  int hours;
};
void differenceBetweenTimePeriod(struct TIME t1, struct TIME t2, struct TIME *diff);
 
int main()
{
    struct TIME startTime, stopTime, diff;
 
    printf("输入开始时间: \n");
    printf("输入小时、分钟、秒：");
    scanf("%d %d %d", &startTime.hours, &startTime.minutes, &startTime.seconds);
 
    printf("输入停止时间: \n");
    printf("输入小时、分钟、秒: ");
    scanf("%d %d %d", &stopTime.hours, &stopTime.minutes, &stopTime.seconds);
 
    // 计算差值
    differenceBetweenTimePeriod(startTime, stopTime, &diff);
 
    printf("\n差值: %d:%d:%d - ", startTime.hours, startTime.minutes, startTime.seconds);
    printf("%d:%d:%d ", stopTime.hours, stopTime.minutes, stopTime.seconds);
    printf("= %d:%d:%d\n", diff.hours, diff.minutes, diff.seconds);
 
    return 0;
}
 
void differenceBetweenTimePeriod(struct TIME start, struct TIME stop, struct TIME *diff)
{
    if(stop.seconds > start.seconds){
        --start.minutes;
        start.seconds += 60;
    }
 
    diff->seconds = start.seconds - stop.seconds;
    if(stop.minutes > start.minutes){
        --start.hours;
        start.minutes += 60;
    }
 
    diff->minutes = start.minutes - stop.minutes;
    diff->hours = start.hours - stop.hours;
}
```

## 取整数位数

### 题目

取一个整数 a 从右端开始的 4～7 位。

### 程序分析

1. 先使 a 右移 4 位。
2. 设置一个低 4 位全为 1，其余全为 0 的数，可用~(~0<<4)
3. 将上面二者进行 & 运算。

### 源码

```c
#include "header.h"

int main(int argc, char const *argv[])
{
    unsigned a,b,c,d;
    printf("请输入整数：\n");
    scanf("%o",&a);
    b=a>>4;
    c=~(~0<<4);
    d=b&c;
    printf("%o\n%o\n",a,d);
    return 0;
}
```
