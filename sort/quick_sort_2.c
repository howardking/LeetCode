/* 此程序依旧为快速排序的递归版，但是该程序将interval的值改为
 * 最右边的元素
 * 作者：王帅华（HowardKing）<tianlangroot@gmail.com>
 * 时间：2014-3-21
 */


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#ifndef MAX_N
#define MAX_N 10
#endif

void random_init(int *arr)
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
		int i = left;
		int j = right;
		int key = arr[right];
		
		while (i < j){
		
			while ((i < j) && (arr[i] < key)){
				i ++;
			}

			if (i < j){
				arr[j] = arr[i];
				j--;
			}
		
			while ((i < j) && (arr[j] > key)){
				j--;
			}
		
			if (i < j){
				arr[i] = arr[j];
				i ++;
			}
			
			arr[j] = key;
			quicksort(arr, left, j-1);
			quicksort(arr, j+1, right);
			
		}
	}

}

int main(void)
{
	int arr[MAX_N];
	int i = 0;

	random_init(arr);
	quicksort(arr, 0, MAX_N-1);

	printf("After sorted:\n");
	for(i = 0; i < MAX_N; i ++){
		printf("%d ", arr[i]);
	}

	printf("\n");
}
