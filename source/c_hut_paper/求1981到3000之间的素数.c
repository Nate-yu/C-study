#include<stdio.h>
/*求出1981到3000之间的素数及其个数*/
int isPrime(int n) {
	for(int i = 2; i < n; ++i) {
		if(n % i == 0) {
			return 0;
		}

	}
	return 1;
}

int main() {
	int count = 0;
	for(int i = 1981; i <= 3000; ++i) {
		if(isPrime(i)) {
			count++;
			printf("%d ",i);
		}
	}
	printf("\nThere are %d prime numbers", count);
	return 0;
}