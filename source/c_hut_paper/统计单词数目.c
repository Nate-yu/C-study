#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	char ch;
	char str[100];
	int i = 0;
	ch = getchar();
	while(ch != '\n') {
		str[i] = ch;
		ch = getchar();
		i++;
	}

	int len = strlen(str);
	int count = 1;
	for(i = 0; i < len; ++i) {
		if(str[i] == ' ') {
			count++;
		} else {
			continue;
		}
	}

	printf("字符串中单词总数为: %d\n",count);
	return 0;
}