/**
	09, Jan, 2017
	Baekjoon online judge 2750 sorting numbers
*/

#include <stdio.h>

void selection(int arrMax, int* arr){
	int i, j, min,tmp;
	for(i=0;i<arrMax-1;i++){
		for(j=i+1;j<arrMax;j++){
			if(arr[i] > arr[j]){
				tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
		}
	}
}

void Print(int arrMax, int* arr){
	int i;
	for(i=0;i<arrMax; i++){
		printf("%d\n", arr[i]);
	}
}

int main(){
	
	int max, i;
	
	scanf("%d", &max);
	int arr[max];
	
	for(i=0;i<max;i++){
		scanf("%d", &arr[i]);
	}
	
	selection(max, arr);
	Print(max, arr);
	
	return 0;
}
