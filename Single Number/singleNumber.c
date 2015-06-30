int singleNumber(int* nums, int numsSize) {
	while(--numsSize) {
		nums[0] = nums[0] ^ nums[numsSize];
	}
	
	return nums[0];
}
