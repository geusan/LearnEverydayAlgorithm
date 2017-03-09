#include <stdio.h>

int main(){
	
	int n, i, sum=0;
	int max[2];
	max[0] = max[1] = 0;
	
	scanf("%d", &n);
	
	for(i=0;i<n;i++){
		int t;
		scanf("%d", &t);
		sum += t;
		if(max[0] < t ){
			max[0] = t;
			max[1] = 0;
		} else if(max[0] == t){
			max[1] = 1; 
		}
	}
	
	if(max[1] == 1 || sum != (n*n-n)/2 ) printf("-1\n");
	else printf("1\n");
	return 0;
}
