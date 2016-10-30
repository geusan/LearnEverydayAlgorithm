/**
	baekjoon  Oct.29.2016
	
	자리수가 등차수열인가
*/

#include <stdio.h>
int cnt=0;

int hanNumber(int number, int max){
	int i =1, common = -1, temp = -1;
	if(number > max){
		printf("%d\n", max - cnt);
		return 0;
	}
	else{
		if(number >= 100) {
			common = number%10 - (number/10)%10;
			while(number/i >= 10){
			temp = (number/i)%10 - (number/(i*10))%10;	
			if(common != temp){
					cnt++;
					break;
			}
			i *= 10;
			}
		}
		
		return hanNumber(number+1, max);
	}
}

int main() {
	int n;
	scanf("%d", &n);
	hanNumber(1,n);

    return 0;
}