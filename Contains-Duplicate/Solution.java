public class Solution {
    public boolean containsDuplicate(int[] nums) {
        if(nums.length == 0) {
            return false;
        }
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
