#include <stdio.h>
#include <string.h>
/*有已按升序排序的字符串s，将字符串s1的每个字符按升序插入到数组s中*/
int main(int argc, char const *argv[])
{
	char s[30] = "cehijknqrtuw";
	char s1[] = "fobgvlapdms";
	// 将s1的每个字符与s的字符逐一比较
	for(int k = 0; s1[k] != '\0'; k++) {
		int j = 0;
		// s1的字符大于s的字符时，j指针向后移动，当s[k]小于s[j]时，即为要插入的位置
		while(s1[k] >= s[j] && s[j] != '\0') {
			j++;
		}
		// 从s的尾部+1处开始，从后向前便利，逐个移动s中的字符，知道遇到j的位置时停止移动
		for(int i = strlen(s); i>=j; i--) {
			s[i+1] = s[i];
		}
		s[j] = s1[k];
	}
	puts(s);
	return 0;
}