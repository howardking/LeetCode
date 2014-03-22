/* 判断一个给定的字符串中有没有重复的字符，时间复杂度为O（n），
 * 空间复杂度为O（1）
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	int i = 0;
	char arr[20] = "abcdefghijklmnx";
	unsigned int check = 0;
	unsigned int shift = 0;
	int n = strlen(arr);
	
	for (i = 0; i < n; i++){
		shift = arr[i] - 'a';
		if (check & (1 << shift)){
			printf("有重复\n");
			exit(1);
		} else {
			check |= (1 << shift);
		}
	}

	printf("没有重复\n");
	return 0;
	
}
