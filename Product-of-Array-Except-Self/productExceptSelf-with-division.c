/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* productExceptSelf(int* nums, int numsSize, int* returnSize) {
    int * output = (int *)malloc(numsSize * sizeof(int));
    *returnSize = numsSize;
    
    int tmp = 1;
    for(int i=0; i<numsSize; i++) {
        tmp *= nums[i];
    }
    for(int i=0; i<numsSize; i++) {
        if(nums[i] != 0) {
            output[i] = tmp / nums[i];
        } else {
            output[i] = 1;
            for(int j=0; j<numsSize; j++) {
                if(j == i) {
                    continue;
                }
                output[i] *= nums[j];
                if(output[i] == 0) {
                    break;
                }
            }
        }
        
    }
    
    return output;
}
