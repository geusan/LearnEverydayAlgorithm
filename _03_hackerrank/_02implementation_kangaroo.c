/**
	hackerrank  Oct.26.2016
	
	kangaroo
	
	같은시간에 같은 지점에서 만나는지 확인하는 문제
	
	
*/

#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int x1; 
    int v1; 
    int x2; 
    int v2; 
    int i=0;
    int flag = 0;
    scanf("%d %d %d %d",&x1,&v1,&x2,&v2);
    if(v1>v2){
        do{
            i++;
        }while(x1+v1*i < x2+v2*i);
        if(x1+v1*i == x2+v2*i) printf("YES\n");
        else printf("NO\n");
    }else printf("NO\n");
    
    return 0;
}