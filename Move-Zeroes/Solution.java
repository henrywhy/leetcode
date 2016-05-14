public class Solution {
    public void moveZeroes(int[] nums) {
        for(int i=0; i<nums.length-1; i++) {
            if(nums[i] == 0) {
                
                int j;
                for(j=i+1; j<nums.length; j++) {
                    if(nums[j] != 0) {
                        nums[i] = nums[j];
                        nums[j] = 0;
                        break;
                    }
                }
                if(j == nums.length) {
                    break;
                }
                
            } 
        }
    }
}
