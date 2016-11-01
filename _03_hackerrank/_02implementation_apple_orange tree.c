/**
	hackerrank  Nov.01.2016
	
	자리수가 등차수열인가
*/

#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int s; 
    int t; 
    scanf("%d %d",&s,&t);
    int a; 
    int b; 
    scanf("%d %d",&a,&b);
    int m; 
    int n; 
    scanf("%d %d",&m,&n);
    int *apple = malloc(sizeof(int) * m);
    for(int apple_i = 0; apple_i < m; apple_i++){
       scanf("%d",&apple[apple_i]);
    }
    int *orange = malloc(sizeof(int) * n);
    for(int orange_i = 0; orange_i < n; orange_i++){
       scanf("%d",&orange[orange_i]);
    }
    int cntApple=0, cntOrange=0, max;
    max = m >n ? m : n;
    for(int i=0;i<max;i++){
        if(i<m && apple[i] + a  <= t && apple[i] + a  >= s ){
            cntApple++;
        }
        if(i<n && orange[i] + b <= t && orange[i] + b >= s){
            cntOrange++;
        }
    }
    printf("%d\n%d\n", cntApple, cntOrange);
    return 0;
}
