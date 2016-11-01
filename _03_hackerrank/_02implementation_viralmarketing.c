/**
	hackerrank  Nov.01.2016
	
	viral marketing 
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n, sum=0, f=5;
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        f /= 2;
        sum += f;
        f *= 3;
    }
    printf("%d\n", sum);
    return 0;
}
