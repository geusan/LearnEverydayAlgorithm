/**
	baekjoon  Oct.29.2016
	
	셀프넘버 SelfNumber
*/

#include <stdio.h>
#define MAX 10001
#define FIELD 2

int selfNumber(int arr[][FIELD], int n){
	int temp = n, i=1;
	if(n < MAX){
		while(i*10 < MAX){
			temp += ((n/i)%10);
			i*=10;
		}
		if(temp <=10000){
			if(arr[temp][1] == 0) arr[temp][1] = 1;
		}
		return selfNumber(arr, n+1);
	}
	else return 0;
}

int main() {
	int arrNumber[MAX][FIELD], i, n;
	for(i=0;i<MAX;i++){
		arrNumber[i][0] = i;
		arrNumber[i][1] = 0;
	}
	selfNumber(arrNumber, 1);
	
	for(i=1;i<MAX;i++) if(arrNumber[i][1] == 0) printf("%d\n", arrNumber[i][0]);

    return 0;
}