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

   

