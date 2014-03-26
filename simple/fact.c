/* 此程序为n的阶乘的线性递归实现 */

#include <stdio.h>
#include <stdlib.h>
int fact(int n)
{
	if (n < 0){
		exit(1);
	}else if (n == 1 || n == 0){
		return 1;
	}else{
		return n * fact(n - 1);
	}
}

int main(void)
{
	int n = 10; //要求的n的阶乘
	printf("%d! = %d\n", n, fact(n));
	
	return 0;
}
