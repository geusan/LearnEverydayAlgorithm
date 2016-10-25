/**
	22, Oct, 2016 
	
	1004 어린왕자
	
	어린왕자의 네비게이션을 하는 것
	
*/

#include <stdio.h>
#include <math.h>

int main() {
	int cntCase, cntStar, i, j;
	int x1,y1,x2,y2;
	int cx, cy, cr;
	int course1 = 0, course2=0;
	double dist1, dist2;
	scanf("%d", &cntCase);
	for(i=0;i<cntCase;i++){
		scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
		scanf("%d", &cntStar);
		for(j=0;j<cntStar;j++){
			scanf("%d %d %d", &cx, &cy, &cr);
			dist1 = sqrt((cx -x1)*(cx-x1) + (cy-y1)*(cy-y1));
			dist2 = sqrt((cx -x2)*(cx-x2) + (cy-y2)*(cy-y2));
			if(dist1 < cr) course1++;
			if(dist2 < cr) course2++;
			if(dist1 < cr && dist2 < cr){
				course1--;
				course2--;
			}
		}
		printf("%d\n", course1+course2);
		course1 = course2 = 0;
	}
}