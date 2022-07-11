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
/*求1000以内最大的10个素数的和*/
int main(int argc, char const *argv[])
{
	int t, total = 0, num = 0;
	for(t = 1000; t >= 2; t--) {
		if(isPrime(t)) {
			total += t;
			num++; 
		}
		if (num == 10) {
			break;
		}
	}
	printf("%d\n", total);
	return 0;
}