#include "header.h"

int accountStr(char *str, char *s) {
	int account = 0;
	int lenStr = strlen(str);
	int lenS = strlen(s);
	int i,j,k;

	for(i = 0; i <= lenStr - lenS; ++i) {
		for(j = 0, k = i; j < lenS; j++,k++) {
			if(str[k] != s[j]) break;
		}
		if(j == lenS) account++;	
	}
	return account;
}	

int main(int argc, char const *argv[])
{
	char str[20];
	char s[20];
	printf("str: \n");
	scanf("%s",str);
	printf("s: \n");
	scanf("%s",s);

	printf("account: %d\n",accountStr(str,s));
	return 0;
}