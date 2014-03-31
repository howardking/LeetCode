/* 此版本为快速排序的递归实现程序
 * 作者：王帅华
 * 日期：2014-3-21
 * 版本：v1.0
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_N  10

void random_num(int *arr)
{
	int i = 0;
	srand((unsigned)time(NULL));
	for (i = 0; i < MAX_N; i++){
		arr[i] = rand() % 100;
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void quicksort(int *arr, int left, int right)
{
	if (left < right){
		int key = arr[left];
		int i = left;
		int j = right;
	
		while (i < j){
			while ((i < j) && arr[j] > key){
				j--;
			}
			if (i < j){
				arr[i] = arr[j];
				i++;
			}

			while ((i < j) && arr[i] < key){
				i++;
			}
			if (i < j){
				arr[j] = arr[i];
				j--;
			}
		}
		arr[i] = key;
		quicksort(arr, left, i-1);
		quicksort(arr, i+1, right);
	}
}

int main(void)
{
	int i = 0;
	int arr[MAX_N];
	random_num(arr);
	quicksort(arr, 0, MAX_N-1);
	printf("After sorted:\n");
	for (i = 0; i < MAX_N; i++){
		printf("%d ", arr[i]);
	}

	printf("\n");

	return 0;
}
