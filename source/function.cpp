/*函数声明*/
int isPrime(int n); // 判断质数
int isPalindromic(int n); // 判断回文数
int isPalindromString(char str[]); // 判断回文字符串
int binaryToDecimal(int number); // 二进制转十进制
char * decimalToHexadecimal(int number); // 十进制转十六进制
double factorial(int n); // 求n的阶乘
int isNarcissisticNumber(int n); // 判断水仙花数
long productOfDigit(long n); // 求正整数各位上的数字之积

/*函数定义*/
int isPrime(int n) {
	int k;
	for(k=2;k<n-1;k++){
		if(n%k==0){
			return 0;
		}
	}
	return 1;
}

int isPalindromic(int n) {
	int i,j=0;
	i=n;
	while(i) {
		j=j*10+i%10;
		i/=10;
	}
	if(j==n) {
		return 1;
	} else {
		return 0;
	}
}

int isPalindromString(char str[]) {
	int len = strlen(str);
	// i和j分别指向首尾两个字符
	int i,j;

	for(i = 0, j = len-1; i < j; i++,j--) {
		if(str[i] != str[j]) {
			break;
		}
	}
	if(i >= j) {
		return 1;
	} else {
		return 0;
	}
}

int binaryToDecimal(int number) {
	/*数据初始化*/
	int decimalNum = 0;
	int temp; // 存储传入的二进制数的每一位
	int flag = 0; // 用于进行参数的合法性判断，默认为false

	/*进行转换*/
	for (int i = 1; number != 0; i *= 2) { // i = 1,2,4,...，权重每次乘2
		temp = number % 10; // 从低位开始取值
		if(temp > 1) { // 判断参数的合法性
			flag = 1; // 二进制，由1和0组成
			break;
		} else {
			decimalNum += temp * i;
			number /= 10;
		}
	}

	/*返回结果*/
	if(flag) {
		return 0;
	} else {
		return decimalNum;
	}
}

char * decimalToHexadecimal(int number) {
	static char hex[10];
	for(int i = 0; number != 0; i++) {
		hex[i] = number % 16;
		number /= 16;
		if(hex[i] > 10) {
			switch(hex[i]) {
				case 10: hex[i] = 'A'; break;
				case 11: hex[i] = 'B'; break;
				case 12: hex[i] = 'C'; break;
				case 13: hex[i] = 'D'; break;
				case 14: hex[i] = 'E'; break;
				case 15: hex[i] = 'F'; break;
			}
		} else {
			hex[i] += 48; // '0'的ASSIC码为48
		}
	}
	int len = strlen(hex);
	// 反转字符数组
	for(int i = 0, j = len - 1; i < len - 1; i++,j--) {
		char temp;
		temp = hex[i];
		hex[i] = hex[j];
		hex[j] = temp;
	}
	return hex;
}

// 求n的阶乘
double factorial(int n) {
	double fac = 1.0;
	for(int i = 1; i <= n; ++i) {
		fac *= i;
	}
	return fac;
}

// 判断水仙花数
int isNarcissisticNumber(int n) {
	int a,b,c; // 分别表示参数n的个位十位百位
	a = n%10;
	b = n/10%10;
	c = n/100;
	if(a*a*a + b*b*b + c*c*c == n) {
		return 1;
	} else {
		return 0;
	}
}

long productOfDigit(long n) {
	long product = 1; // 初始化乘积
	while(n) {
		product *= n%10;
		n /= 10;
	}
	return product;
}