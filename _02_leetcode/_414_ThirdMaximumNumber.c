/**
	leetcode 2017.01.12 ThirdMaximumNumber
	I make two arrays for solution.  
	maximum number index array and repetitive number index array
	two kinds of finite loop( size : 4 ) are used for finding except case.
	
	i think that it is difficult to solve. because of except case, such as INT_MIN and duplicated numbers.
	i spend time more than i thought.
*/

#include <stdio.h>
#include <limits.h>

int thirdMax(int* nums, int numsSize){
	int thirdMax(int* nums, int numsSize) {
    int i,j,k, idx=0, temp =0, flag = 0;
    int ans[4] = {0,INT_MIN,INT_MIN, INT_MIN};
    int buff[4] = {nums[0],nums[0],nums[0], nums[0]};
   
    
    for(i=0 ; i<numsSize ; i++){
    	ans[0] = nums[i];
    	
		for(j=0;j<=3;j++){
			if(nums[i] == buff[j]){
				flag = 1;
				break;
			} else {
				flag = 0;
			}
		}
		
		if(idx<3 && flag == 0) {
			buff[++idx] = ans[0];
			flag = 1;	
		}
		
    	//bubble sort once
        for(j=0;j<3;j++){
            if(ans[j] > ans[j+1]){
            	temp = ans[j];
            	ans[j] = ans[j+1];
            	ans[j+1] = temp;
			}else if(ans[j] == ans[j+1]){
				for(k=j;k>0;k--){
					temp = ans[k];
					ans[k] = ans[k-1];
					ans[k-1] = temp;
				}
			}
        }
    }
    
    if(idx >= 2) return ans[1];
    else return ans[3];
    
}
}

void Print(int* nums, int numsSize){
	int i;
	for(i=0;i<numsSize;i++){
		printf("%d ", nums[i]);
	}
	printf("\n");
}

int main(){
	int arr[3] = {5,2,2};
	
	Print(arr, sizeof(arr)/sizeof(int));
	printf("%d", thirdMax(arr, sizeof(arr)/sizeof(int)));
}
