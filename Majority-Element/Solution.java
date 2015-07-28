public class Solution {
    public int majorityElement(int[] nums) {
        Arrays.sort(nums);
        return nums[(int)Math.floor(nums.length / 2.0)];
    }
}
