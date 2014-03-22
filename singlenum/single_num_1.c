/*该程序找出给出一组数据中只有一个为单独不成对的数字，
 * 程序使用了异或算法，理由是A^A==0
 */

#include <stdlib.h>
#include <stdio.h>

#define MAX_N 11

int main(void)
{
	int arr[MAX_N];
	int i = 0;
	int n = 0;
	int result = 0;

	scanf("%d", &n);
	if (n % 2 == 0 || n > MAX_N){
		/*符合题目重要求的数的个数肯定为奇数*/
		exit(1);
	}

	for (i = 0; i < n; i++){
		scanf("%d", &arr[i]);
		result ^= arr[i];
	}

	printf("这个单独的数是：%d\n", result);

	return 0;
}
