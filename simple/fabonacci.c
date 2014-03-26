/* fabonacci数列的线性递归实现  */

#include <stdio.h>
#include <stdlib.h>

int fabonacci(int n)
{
	if (n < 0){
		exit(1);
	} else if (n == 1 || n == 0){
		return 1;
	} else {
		return fabonacci(n-1) + fabonacci(n-2);
	}
}

int main(void)
{
	int n = 10; //最终的fabonacci数

	printf("fabonacci(%d) = %d\n", n, fabonacci(n));

	return 0;
}
