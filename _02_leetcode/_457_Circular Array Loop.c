/**

	14, Jan, 2017 LeetCode Circular Array Loop
	
	start 0 index in array, it is like jump game
	we move n steps 
	if the element is positive, direction is right(forward)
	if the element is negative, direction is left(backward)
	
	Note : Time complexity O(n), Space complexity O(1)
*/


bool circularArrayLoop(int* nums, int numsSize) {
    int i=0, cnt=0;
    
    while(i<numsSize && i >= 0 && numsSize != 0){
        i += nums[i];
        if(cnt > numsSize || nums[i] == 0) break;
        cnt++;
    }
    
    if(i >= numsSize && numsSize != 0) return true;
    else return false;
}
