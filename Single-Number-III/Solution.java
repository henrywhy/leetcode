public class Solution {
    public int[] singleNumber(int[] nums) {
        
        int xorResult = nums[0];
        for(int i=1; i<nums.length; i++) {
            xorResult ^= nums[i];
        }
        
        int differentBitNum = 0;
        for(int i=0; i<Integer.SIZE; i++) {
            if((xorResult & (int)Math.pow(2,i)) != 0) {
                
                differentBitNum = i;
                break;
            }
        }
        
        
        int[] singleNums = new int[2];
        singleNums[0] = 0;
        for(int i=0; i<nums.length; i++) {
            if((nums[i] & (int)Math.pow(2, differentBitNum)) !=0) {
                singleNums[0] ^= nums[i];
            }
          
        }
        
        singleNums[1] = xorResult ^ singleNums[0];
        
        return singleNums;
    
    }
}
