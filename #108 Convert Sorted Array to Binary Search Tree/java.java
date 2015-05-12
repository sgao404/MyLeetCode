/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode(int x) { val = x; }
 * }
 */
public class Solution {
    public TreeNode sortedArrayToBST(int[] nums) {
        if(nums.length==0)  return null;  
        return helper(nums,0,nums.length-1);
    }
    public TreeNode helper(int[] num, int start, int end) {  
        if(start == end) return new TreeNode(num[start]);  
        int mid = (start+end)/2;  
        TreeNode node = new TreeNode(num[mid]);  
        node.left = helper(num, start, mid-1);  
        node.right = helper(num, mid+1, end);  
        return node;  
    }
}