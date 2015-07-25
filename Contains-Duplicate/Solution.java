public class Solution {
    public boolean containsDuplicate(int[] nums) {
        HashSet<Integer> bucket = new HashSet();
        for(int num : nums) {
            if(bucket.contains(num)) {
                return true;
            }
            bucket.add(num);
        }
        return false;
    }
}
