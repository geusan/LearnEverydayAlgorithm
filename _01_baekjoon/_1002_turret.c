/**
	22, Oct, 2016 
	
	1002 터렛
	
	두 좌표와 좌표부터 해당 지점까지의 거리가 각각 주어지고 해당 지점이 있을 수 있는 위치의 갯수를 출력한다.
	
	사실 두 원의 위치관계를 분류하는 문제이다.
	
	원방정식을 이해했는지를 묻는 문제였고, sqrt()함수를 쓸 경우에는 double이나 float로 실수 선언을 해야하는데,
	
	이 부분에서 조금 애먹었다.
	
*/

#include <stdio.h>
#include <math.h>

int calPoint(int x1, int y1, int r1, int x2, int y2, int r2){
	double dist = sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
		int min_r = (r1 < r2) ? r1 : r2;
		int max_r = r1 + r2 - min_r;
		//중심이 겹치는 경우 
		if(x1 == x2 && y1 == y2 && r1 == r2) return -1;
		else if(x1 == x2 && y1 == y2 && r1 != r2) return 0;
		//중심이 외부에 존재하는 경우
		else if(dist > max_r){
			if(dist > min_r + max_r) return 0;
			else if(dist == min_r + max_r) return 1;
			else return 2;
		}
		//중심이 내부에 존재하는 경우 
		else if(dist < max_r){
			if(dist+ min_r < max_r) return 0;
			else if(dist + min_r == max_r) return 1;
			else return 2;
		}
		//중심이 다른원의 경계에 존재
		else return 2;
}

int main() {
	int x1, y1, r1, x2, y2, r2;
	int count, i, j;
	scanf("%d", &count);
	for(i=0;i<count;i++){
		scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);
		printf("%d\n", calPoint(x1, y1, r1, x2, y2, r2));
	}	
	return 0;
}