public class Solution {
    public int[] countBits(int num) {
        int[] count = new int[num+1];
        
        count[0] = 0;
        for(int i=1; i<=num; i++) {
            int lastOneBitNum = 0;
            for(int j=Integer.SIZE; j>=1; j--) {
                if(((i-1) & (int)Math.pow(2, Integer.SIZE-j)) == 0 ) {
                    break;
                } else {
                    lastOneBitNum++;
                }
            }
            
            count[i] = count[i-1] - lastOneBitNum + 1;
        }
        
        return count;
    }
}
