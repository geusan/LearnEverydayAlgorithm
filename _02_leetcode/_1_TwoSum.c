/**
	leetcode  Nov.06.2016
	
	two sum
	
*/

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target) {
   
    int pos1=-1, pos2=-1;
    
    for(int i=0;i<numsSize;i++){
        for(int j=0;j<numsSize;j++){
            if(nums[i]+nums[j] == target && i != j){
                pos1 = i;
                pos2 = j;
                break;
            }
        }
        if(pos1 != -1 && pos2 != -1) break;
    }
    int *sol = (int) malloc(sizeof(int) * 2);
    sol[0] = pos1;
    sol[1] = pos2;
    return sol;
}