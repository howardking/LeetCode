/* n的阶乘的尾递归实现 */

#include <stdio.h>
#include <stdlib.h>

int facttail(int n, int a)
{
	if (n < 0){
		return 0;
	}else if(n == 0){
		return 1;
	}else if (n == 1){
		return a;
	}else {
		return facttail(n-1, n*a);
	}
}


int main(void)
{
	int n = 10; /* 要求n的递归 */
	
	printf("%d! = %d\n", n, facttail(n, 1));

	return 0;
}
