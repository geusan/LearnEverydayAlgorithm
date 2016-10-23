/**
	22th,Oct,2016
	
	JumpGame	
	
	Given an array of non-negative integers, you are initially positioned at the first index of the array.

	Each element in the array represents your maximum jump length at that position.

	Determine if you are able to reach the last index.

	For example:
	A = [2,3,1,1,4], return true.
	A = [3,2,1,0,4], return false.
	
*/
bool canJump(int* nums, int numsSize) {
    int i = 0, j, max = 0, pos;
    while(i < numsSize-1){
        if(nums[i] != 0){
            for(j = 1;j<=nums[i];j++)
                if(max <= i+j + nums[i+j]) {
                    max = i+j + nums[i+j];
                    pos = i+j;
                }
            i = pos;
        } else return false;
    }
    return true;
}