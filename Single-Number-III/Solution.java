public class Solution {
    
    private boolean isSettedOne(int num, int index) {
        return (num & (1 << index)) != 0;
    }
    
    public int[] singleNumber(int[] nums) {
        
        int xorResult = nums[0];
        for(int i=1; i<nums.length; i++) {
            xorResult ^= nums[i];
        }
        
        int differentBitNum = 0;
        for(int i=0; i<Integer.SIZE; i++) {
            if(isSettedOne(xorResult, i)) {
                
                differentBitNum = i;
                break;
            }
        }
        
        
        int[] singleNums = new int[2];
        singleNums[0] = 0;
        for(int i=0; i<nums.length; i++) {
            if(isSettedOne(nums[i], differentBitNum)) {
                singleNums[0] ^= nums[i];
            }
          
        }
        
        singleNums[1] = xorResult ^ singleNums[0];
        
        return singleNums;
    
    }
}
