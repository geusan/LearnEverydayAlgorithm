/**
	22, Oct, 2016 
	
	1016 제곱ㄴㄴ 수
	
*/

#include <stdio.h>
#include <time.h>
#include <math.h>

int p[1000000];

int main() {
	long long min, max, temp;
	int cnt=0, res;
	int n;
	long long i=0, j=0, c=0;
	int flag = 0;
	int start, end;
	
	double time;
	scanf("%lld %lld", &min, &max);
	res = max - min +1;
	start = clock();
	p[0] = 2;
	int primeCnt = 0;
	//소수구하기 
	for(i=2;i*i<max;i++){
		flag=0;
		for(j=0;j<=primeCnt;j++){
			if(i % p[j] == 0){
				flag = 1;
				break;
			}
		}
		if(flag == 0) {
			p[j] = i;
//			printf("p[%d] = %d\n", j, p[j]);
			primeCnt++;
		}
	}
	
	int tempCnt;
	
	for(i = 0; i<primeCnt;i++){
		tempCnt = 0;
		for(temp = p[i]*p[i]; temp <=max; temp += p[i]*p[i]) {
			if(temp> min) {
				tempCnt++;
				printf("%lld 제거\n", temp*temp);
			}
		}
		cnt+= tempCnt;
//		printf("%d^2=%d 에서 %d개 제거 \n\n", p[i], p[i]*p[i], tempCnt);
	}
//	printf("전체에서 %d개 제거함\n\n", cnt);
	
	end = clock();
	time = (double)(end-start)/CLOCKS_PER_SEC;
	printf("%d\n",max-min-cnt);
	printf("%lf\n", time);
	return 0;
}