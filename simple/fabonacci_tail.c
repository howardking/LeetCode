/* fabonacci数列的尾递归实现 */

#include <stdio.h>
#include <stdlib.h>

int fabonacci_tail(int n, int acc1, int acc2)
{
	if(n == 0){
		return acc1;
	}else {
		return fabonacci_tail(n-1, acc2, acc1 + acc2);
	}
}

int main(void)
{
	int n = 10; /* 要求的fabonacci数 */

	printf("fabonacci(%d) = %d\n", n, fabonacci_tail(n, 1, 1));

	return 0;
}
