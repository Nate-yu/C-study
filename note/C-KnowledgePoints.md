# 2019 A

## 单选题

1. C语言规定，在一个源程序中，main函数的位置可以任意

2. ![image-20220925172313315](https://gitee.com/nate-yu/img-repository/raw/master/img/202209251726086.png)

   `sizeof(w*x+z-y) = 8 -> double. sizeof(int) = 4 or 2`

3. 有以下程序：

   ```c
   #include<stdio.h>
   int main()
   {
       int x = 3, y = 0, z = 0;
       if(x = y + z) printf("****");
       else printf("####");
       return 0;
   }
   ```

   输出结果：
   
   ```markdown
   ####
   解释：表达式“x = y + z”的值为0
   ```
   
4. 有以下程序：

   ```c
   #include<stdio.h>
   int main()
   {
       int x = 5;
       if(x-- < 5) printf("%d",x);
       else printf("%d",x++);
       return 0;
   }
   ```

   输出结果：

   ```markdown
   输出：4
   解释：分支结构执行的是“else”，“x--”与5进行比较时，是用5来跟5比较，比较完后再执行“--”操作，x变成   4。而执行else分支时，先执行输出，x输出为4，后执行“++”操作，最后x的值为5。
   ```

5. **switch** 语句中的 **expression** 是一个常量表达式，必须是一个**整型**或**枚举类型**

6. 二维数组可以不定义行数，但必须定义列数

   如：`char A[3][] = {"111","222"}`是错误的，而`char A[][3] = {"111","222"}`则为正确的

7. 返回值为void的函数，调用函数之后，被调用的函数没有返回值

8. 在以下说明语句中：

   ```c
   typedef struct
   {
       int a;
       char b;
       double c; 
   } Simple2;
   ```

   Simple2为结构体类型名，并未声明变量。但可以用Simple2作为类型声明新的结构体变量

9. 位运算中，操作数每右移一位，相当于操作数除以2；每左移以为，相当于操作数乘以2

10. C语言操作文件时，若执行fopen函数时发生错误，函数返回值为0

## 多选题

1. C程序可以由多个程序文件组成，可以由一个或多个函数组成，一个C函数可以单独作为一个C程序文件存在

2. 说明正确的程序：

   ```c
   char a[10] = "china";
   char a[10], *p = a; p = "china";
   char *a; a = "china";
   char a[10], *p; p = a;
   ```

3. `double a = b = 7;` 是错误的定义语句，报错：`b was not declared in this scoped`

4. 预处理命令可以放在程序中的任何位置，其有效范围从定义开始到文件结束。预处理命令有宏定义、文件包含和条件编译三类

## 填空题

1. 运算符优先级：`()` > `!` > `+` = `-` > `>>` = `<<` > `&&` > `||`

2. 将无符号八进制数字构成的字符串转换为十进制整数

   ```c
   #include<stdio.h>
   int main()
   {
       char *p,s[6];
       int n;
       p = s;
       gets(p);
       n = *p - '0'; // 将输入的八进制数字的第一位存入n
       while(*(++p) != '\0') { // 往后移动指针
           n = n*8 + *p - '\0';
       }
       printf("%d\n",n);
   }
   ```

## 程序分析题

1. 以下程序运行后的输出结果：

   ```c
   #include<stdio.h>
   int main()
   {
       char s[] = "9876", *p;
       for(p = s; p < s+2; p++) {
           printf("%s\n",p);
       }
       return 0;
   }
   ```

   结果：

   ```markdown
   9876
   876
   ```

2. 以下程序运行后的输出结果：

   ```c
   #include<stdio.h>
   int main()
   {
       char b[] = "Hello,you";
       b[5] = 0;
       printf("%s \n",b);
       return 0;
   }
   ```

   结果：

   ```markdown
   Hello
   b[5]=0；等价于b[5]=‘\0';
   ```

3. 以下程序运行后的输出结果：

   ```c
   #include<stdio.h>
   double sub(double x, double y, double z) {
       y -= 1.0;
       z = z + x;
       return z;
   }
   int main()
   {
       double a = 2.5, b = 9.0;
       printf("%f\n",sub(b-a,a,a));
       return 0;
   }
   ```

   结果：

   ```markdown
   9.000000
   类型：float
   ```

# 2019 B



# 第三章 选择结构程序设计习题

1. 有以下程序：

   ```c
   #include<stdio.h>
   int main(int argc, char const *argv[])
   {
   	int i = 1, j = 2, k = 3;
   	if(i++==1 && (++j==3||k++==3))
   		cout<<i<<j<<k;
   	return 0;
   }
   ```

   输出结果：

   ```markdown
   233
   原因：`k++==3`w
   ```

   

