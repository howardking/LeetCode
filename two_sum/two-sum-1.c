/*我们假定数的个数为固定值10个，要是在程序运行时同时给出
 *所需数据也可。但需要重新书写程序，这里为了简单，故做此
 *假设,词方法的空间复杂度为O（1）,时间复杂度为O（n^2）。
 */

#include <stdio.h>
#include <stdlib.h>

#define MAX_N  10

int main(void)
{
	int arr[MAX_N];
	int i = 0;
	int j = 0;
	int sum = 0;
	int flag = 0;
	int temp = 0;

	scanf("%d", &sum);
	
	for (i = 0; i < MAX_N; i++){
		scanf("%d", &arr[i]);
	}

	for (i = 0; i < MAX_N; i++){
		temp = sum - arr[i];
		flag = 0;
		for (j = 0; j < MAX_N; j++){
			if (temp == arr[j])
				flag = 1;
				break;
		}
		if (1 == flag){
			break;
		}
	}

	printf("index1 = %d, index2 = %d\n", i>j?j+1:i, i>j?i+1:j);
}
