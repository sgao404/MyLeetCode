public class Solution { // use sort
    public int majorityElement(int[] nums) {
	    Arrays.sort(nums);
	    return nums[nums.length / 2];
    }
}

