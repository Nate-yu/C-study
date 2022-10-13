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

## 单选题

1. C语言可执行程序的开始执行点是程序中的main函数

2. `'\o'`不是合法的字符常量

3. 能正确将c的值（c!=0）赋值给变量a、b的语句：`(a = c) && (b = c)`

4. 逻辑运算符两侧运算对象的数据类型可以是任何类型的数据

5. 对于`for(表达式1; ; 表达式3)`可以理解为：`for(表达式1; 1; 表达式3)`

6. 判断字符串s1是否大于字符串s2，应当使用`if(strcmp(s1, s2))`

7. C语言规定：实参可以是常量、变量或表达式，即可以为任何类型；形参应该与其对应的实参类型一致

8. 定义函数时，形参的类型说明可以放在函数体内

9. return后面的值可以为表达式

10. 如果函数值的类型与返回值类型不一致，以函数值类型为准

11. 实参与形参在类型上不一致时，若可以强制转换类型，则以形参为基准进行强转。否则实参和形参在数量上、类型上、顺序上应严格一致，

12. 以下程序：

    ```c
    void fun(int *a, int *b) {
        int *k;
        k = a;
        a = b;
        b = k;
    }
    
    int main()
    {
        int a = 3, b = 6, *x = &a, *y = &b;
        fun(x,y);
        printf("%d %d ",a,b);
    }
    ```

    输出结果：

    ```markdown
    3 6
    
    解释：
    	由于传入的实参是x和y的地址，所以实际上并没有改变变量a和变量b的值
    	只有直接将a和b的地址传入fun()函数中才能达到交换数值的效果
    ```

13. C语言结构体类型变量在程序执行期间所有成员一直驻留在内存中

14. 以下说明语句：

    ```c
    struct ex {
        int x;
        float y;
        char z;
    }example;
    ```

    其中，`struct`是结构体类型的关键字，`example`是结构体变量名，`x,y,z`都是结构体成员名，`struct ex`是结构体类型

15. fseek()函数正确调用形式：`fseek(文件类型指针, 位移量, 起始点)`

## 多选题

1. C语言中逻辑值“真”不能用`TRUE`表示
2. 在一个C源程序文件中，若要定义一个只允许本源文件中所用的函数的全局变量，变量只能使用`static`作为存储类别（注意：`auto`、`register`、`extern`均不行）

## 填空题

1. `pow(2.8, sqrt(double(x)))`值的数据类型为：double

2. 用$\frac{pai}{4}$ =  $(-1)^n\sum_{i=0}^n \frac{1}{2*i+1}$ 求pai的近似值

   ```c
   #include<stdio.h>
   #include<math.h>
   int main() 
   {
       int s = 1;;
       float n = 1.0,t = 1,pai = 0;
       while(fabs(t) >= 1e-6) {
           pai = pai + t;
           n = n + 2.0;
           s = -s;
           t = s/n;
       }
       pai = pai / 4;
       printf("%f",pai);
       return 0;
   }    
   ```

3. 求阶乘的累加和 S = $\sum_{i=0}^{n} i!$

   ```c
   #include<stdio.h>
   long f(int n) {
       long s = 1;
       for(int i = 1; i <= n; i++) {
           s = s*i;
       }
       return s;
   }
   
   int main()
   {
       long s;
       int n;
       scanf("%d",&n);
       s = 0;
       for(int i = 0; i <= n; i++) {
           s = s + f(i);
       }
       printf("s=%ld\n",s);
       return 0;
   }
   ```

## 程序分析

不开辟第三方变量而交换数据

```c
int main()
{
    int a = 3,b = 4;
    a = a^b;
    b = a^b;
    a = a^b;
    printf("%d %d",a,b);
    return 0;
}
```

# 2020 A



# 第二章 数据类型及其运算

1. 自增自减运算符不能作用于常量和表达式

2. 运算符优先级：算术 > 关系 > 逻辑

3. 实数（double、float）不能进行`++`运算

4. `*` > `+` > `+=`；`<<` > `^`

5. `short int i`表示65536：0；`short int i`表示65535：-1；`unsigned short int i`表示65535：65535

6. 判断是否是$2^n$(n>0)的表达式：`!(x&(x-1))`

   解释：因为2、4、8、...，这样的数转化为二进制后为：10、100、1000、...，如果x减1后与x做与运算，则结果为0，即x是$2^n$

7. 

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

# 第六章 数据类型、表达式、变量常量习题

      1. **实数型常量**：必须含有小数点，但看到`float f=1.;`是对的，系统会默认小数点后的值为0，即输出时为1.00000
   2. **八进制常量**：开头必定是**0**，且后面的数只能在0~7之间。如091就是错误的。
   3. **十六进制常量**：以**0x**或**0X**开头，在16进制中**不区分大小写**，即0x6与0X6等价。可包含字母ABCDEF或abcdef（11,12,13,14,15,16）。
   4. **指数型常量**：（底数为10），e与E等价，且e与E后面必须接**数字**，且必须为**整数**。如1.85e2。就是185。
   5. **字符常量**：只能是单引号（''），且如果里面是数字必须复合上面四条的规定。
   6. `j++`是赋值语句。
   7. C程序中的#include和#define行均不是C语句
   8. 除逗号运算符外，赋值运算符优先级最低

# 第七章 数组

1. 以下程序

   ```c
   #include <stdio.h>
   
   void fun(int a[][4],int b[4]) {
   	for(int i = 0; i < 4; ++i) {
   		b[i] = a[i][i];
   	}
   }
   
   int main(int argc, char const *argv[])
   {
   	int x[][4] = {{1,2,3},{4},{5,6,7,8},{9,10}},y[4];
   	fun(x,y);
   	for(int i = 0; i < 4; ++i) {
   		printf("%d,",y[i]);
   	}
   	printf("\n");
   	return 0; 
   }
   ```

   x二维数组中初始化之后的值如下：

   ```markdown
   1 2 3 0
   4 0 0 0
   5 6 7 8 
   9 10 0 0
   ```

   故将x数组对角线的元素赋值给y数组后的输出结果为：

   ```markdown
   1,0,7,0,
   ```

# 第八章 指针

   1. 将字符串形式的八进制数转换成十进制数

   ```c
   #include "header.h" // 自定义头文件
   /*将字符串形式的八进制数转换成十进制数*/
   int main(int argc, char const *argv[])
   {
   	int n;
   	char s[6],*p=s;
   	gets(p);
   	n = *p-'0';
   	while(*++p != '\0') {
   		n = n*8+*p-'0';
   	}
   	cout<<n<<endl;	
   	return 0; 
   }
   ```

   



