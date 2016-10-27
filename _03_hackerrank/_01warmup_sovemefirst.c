/**
	hackerrank  Oct.26.2016
	
	Sove me first
	
	덧셈, 샘플문제
	
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int solveMeFirst(int a, int b) {
  // Hint: Type return a+b; below
 return a+b;
}
int main() {
  int num1,num2;
  scanf("%d %d",&num1,&num2);
  int sum; 
  sum = solveMeFirst(num1,num2);
  printf("%d",sum);
  return 0;
}