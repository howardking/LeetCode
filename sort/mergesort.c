/* 归并排序的实现 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_N 20

void merge(int *arr_in, int first, int mid, int last, int *arr_out)
{
	int i = first, j = mid + 1;
	int m = mid, n = last;
	int k = 0;

	while(i <= m && j <=n){
		if (arr_in[i] <= arr_in[j]){
			arr_out[k++] = arr_in[i++];
		}else{
			arr_out[k++] = arr_in[j++];
		}
	}

	while (i <= m){
		arr_out[k++] = arr_in[i++];
	}

	while (j <= n){
		arr_out[k++] = arr_in[j++];
	}

	for (i = 0; i < k; i++){
		arr_in[first + i] = arr_out[i];
	}
}

void mergesort(int *arr_in, int first, int last, int *arr_out)
{
	if (first < last){
		int mid = (first + last) / 2;
		mergesort(arr_in, first, mid, arr_out);
		mergesort(arr_in, mid + 1, last, arr_out);
		merge(arr_in, first, mid, last, arr_out);
	}
}

int main(void)
{
	int i = 0;
	int arr_in[MAX_N];
	int arr_out[MAX_N];

	srand((unsigned)time(NULL));

	printf("---------------排序之前----------------\n");
	for (i = 0; i < MAX_N; i++){
		arr_in[i] = random() % 100;
		printf("%d ", arr_in[i]);
	}
	mergesort(arr_in, 0, MAX_N - 1, arr_out);
	printf("\n---------------排序之后---------------------\n");
	for (i = 0; i < MAX_N; i++){
		printf("%d ", arr_in[i]);
	}
	printf("\n");
}
