/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* productExceptSelf(int* nums, int numsSize, int* returnSize) {
    int* output = malloc(numsSize * sizeof(int));
    *returnSize = numsSize;
    output[0] = 1;
    for(int i=1; i<numsSize; i++) {
        output[i] = output[i-1] * nums[i-1];
    }
    
    int temp = nums[numsSize-1];
    for(int i=numsSize-2; i>=0; i--) {
        output[i] *= temp;
        temp *= nums[i]; 
    }
    return output;
}
