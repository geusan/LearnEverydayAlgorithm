/**
	24, Oct, 2016 
	
	1007 VectorMatching
	
	n개의 점으로 만든 
	
*/

#include <stdio.h>
#include <math.h>
#define POINTS 20
#define XYC 3
#define VECTOR 10
#define MAX 99999999

int points[POINTS][XYC];
double vectorSum1, vectorSum2;

int main() {
	int cntTest, cntPoints;
	int i, j, k, l;
	int temp1, temp2;
	double distMin, distTemp;
	scanf("%d",&cntTest);
	
	for(i=0;i<cntTest;i++){
		scanf("%d", &cntPoints);
		for(j=0;j<cntPoints;j++){
			scanf("%d %d", &points[j][0], &points[j][1]);
			points[j][2] = 0;
		}
		for(l=0;l<VECTOR;l++){
			distMin = MAX;
			for(j=0;j<cntPoints;j++){
				temp1 = -1;
				temp2 = -1;
				for(k=0;k<cntPoints;k++){
					if(j != k && points[j][2] == 0 && points[k][2] == 0){
						if(points[j][0] > 70000) points[j][0] = 
						distTemp = sqrt(
						(points[j][0] - points[k][0]) *	(points[j][0] - points[k][0]) +
						(points[j][1] - points[k][1]) *	(points[j][1] - points[k][1]));
						printf("(%d, %d) ~ (%d, %d) => %6lf\n", points[j][0], points[j][1], points[k][0], points[k][1], distTemp);
						if(distMin > distTemp) {
							distMin = distTemp;
							temp1 = j;
							temp2 = k;
							printf("distMin = %6lf\n",distMin);
						}
					}
				}
				if(temp1 != -1 && temp2 != -1){
					points[temp1][2] = 1;
					points[temp2][2] = 1;
					printf("check (%d, %d) ~ (%d, %d)\n", points[temp1][0], points[temp1][1], points[temp2][0], points[temp2][1]);
				}
			}
			if(distMin != MAX) {
				if(l%2 == 0) {
					vectorSum1 += distMin;
					vectorSum2 -= distMin;
				}
				else {
					vectorSum1 -= distMin;
					vectorSum2 += distMin;
				}
			}
		}
		if(vectorSum1 < 0) vectorSum1 = vectorSum1 * (-1);
		if(vectorSum2 < 0) vectorSum2 = vectorSum2 * (-1);
		
		printf("%.6lf\n",(vectorSum1 > vectorSum2) ? vectorSum1 : vectorSum2);
		
	}
printf("%6lf",sqrt(73271*73271 + 73271*73271));

	return 1;
}