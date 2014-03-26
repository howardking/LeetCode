/* 汉诺塔的递归实现 */

#include <stdio.h>
#include <stdlib.h>

void hannuota(int n, char x, char y, char z)
{
	if (1 == n){
		printf("%d move %c to %c\n", n, x, z);
	}else{
		hannuota(n-1, x, z, y);
		printf("%d move %c to %c\n", n-1, x, z);
		hannuota(n-1, y, x, z);
	}
}

int main(void)
{
	int n = 5; /* 五阶汉诺塔 */
	char x = 'A';
	char y = 'B';
	char z = 'C';

	hannuota(n, x, y, z);

	return 0;
}
