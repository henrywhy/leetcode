int searchInsert(int* nums, int numsSize, int target) {
    int min = 0, max = numsSize-1, middle;
    while(true) {
        middle = (int)(max + min)/2;
        if(target == nums[middle]) {
            return middle;
        }
        
        if(target < nums[middle]) {
            max = middle - 1;
        } else {
            min = middle + 1;
        }
        
        if(max < 0) {
            return 0;
        }
        if(min > numsSize-1) {
            return numsSize;
        }
        if(max < min) {
            if(target < nums[middle]) {
                return middle;
            } else {
                return middle + 1;
            }
        }
    }
}
