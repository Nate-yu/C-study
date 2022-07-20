#include "header.h" // 自定义头文件

/*函数声明*/
int hexadecimalToDecimal(char hex[]) {
	// 求存储十六进制数数组hex的长度
	int len = strlen(hex);
	// 返回的十进制数与暂存数据的数组arr
	int num = 0,arr[30];

	for(int i = 0; i < len; ++i) {
		if(hex[i] >= '0' && hex[i] <= '9') { // 若数组元素为数字，则将其转换为int型数据传给arr
			arr[i] = hex[i] - 48; // '0'(ASSIC) = 48;
		} else { // 数组元素为字母，则将其转换为大写后进行数据类型的转化
			switch(toupper(hex[i])) {
				case 'A': arr[i] = 10; break;
				case 'B': arr[i] = 11; break;
				case 'C': arr[i] = 12; break;
				case 'D': arr[i] = 13; break;
				case 'E': arr[i] = 14; break;
				case 'F': arr[i] = 15; break;
				default: break;
			}
		}
	}
	// 开始进行十进制数的计算
	for(int i = 1, j = len - 1; j >= 0; j--,i*=16) {
		num += arr[j]*i;
	}
	// 返回结果
	return num;
}
int main(int argc, char const *argv[])
{
	char hex[4] = "23E";
	cout<<hexadecimalToDecimal(hex);
	return 0;
}

/*函数定义*/


