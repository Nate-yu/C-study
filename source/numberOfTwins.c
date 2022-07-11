#include <stdio.h> 
int isPrime(int n) {
	int k;
	for(k=2;k<n-1;k++){
		if(n%k==0){
			return 0;
		}
	}
	return 1;
}
/*求1~2000之间的双胞胎数的对数。两素数差为2称为双胞胎数。*/
int main(int argc, char const *argv[])
{
	int a, b, n=0; // 两个相差为二的素数及其对数
	for(a = 2; a < 1998; a++) {
		if(isPrime(a)) {
			b = a + 2;
			if(isPrime(b)) {
				n++;
			}
		}
	}
	printf("%d\n", n);
	return 0;
}