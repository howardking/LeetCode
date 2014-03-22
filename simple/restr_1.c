/*将给定的字符串倒置*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_N 27

int main(void)
{
	int i = 0;
	char arr[MAX_N] = "abcdefghijklmnopqrstuvwxyz";
	char *first = &arr[0];
	char *end = &arr[25];
	
	while (end > first){
		*end ^= *first;
		*first ^= *end;
		*end ^= *first;
		end--;
		first++;
	}

	printf("%s\n", arr);
}
