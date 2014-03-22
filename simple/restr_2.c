#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_N 27

int main(void)
{
	char temp;
	char arr[MAX_N] = "abcdefghijklmnopqrstuvwxyz";
	int n = strlen(arr);
	int middle = n / 2;
	int i = 0;

	for (i = 0; i < middle; i++){
		arr[i] ^= arr[n-i-1];
		arr[n-i-1] ^= arr[i];
		arr[i] ^= arr[n-i-1];
	}	

	printf("%s\n", arr);
	
	return 0;

}
