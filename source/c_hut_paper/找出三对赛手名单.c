#include <stdio.h>
/*两个乒乓球队，甲队a,b,c三人，乙队x,y,z三人。a不和x比，c不和x，z比，求三对赛手名单*/
int main(int argc, char const *argv[])
{
	char a,b,c;
	for(a = 'x'; a <= 'z'; a++) {
		for(b = 'x'; b <= 'z'; b++) {
			for(c = 'x'; c <= 'z'; c++) {
				if(a != 'x' && c != 'x' && c != 'z' && a != b && a != c && b != c)  {
					printf("三对赛手为：\na-%c\nb-%c\nc-%c",a,b,c);
				}
			}
		}
	}
	return 0;
}