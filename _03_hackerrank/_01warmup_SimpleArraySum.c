/**
	hackerrank  Oct.26.2016
	
	Simple Array Sum
	
	배열 덧셈
	
*/

#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n, sum=0; 
    scanf("%d",&n);
    int arr[n];
    for(int arr_i = 0; arr_i < n; arr_i++){
       scanf("%d",&arr[arr_i]);
        sum += arr[arr_i];
    }
    printf("%d\n", sum);
    return 0;
}