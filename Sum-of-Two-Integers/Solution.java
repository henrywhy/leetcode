public class Solution {
    public int getSum(int a, int b) {
        int temp;
        while(b != 0){
            temp = a ^ b;
            b = ( a & b ) << 1;
            a = temp;
        }
        
        return a;
    }
}
