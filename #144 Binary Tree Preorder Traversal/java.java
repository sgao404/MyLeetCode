/**
 * Definition for binary tree
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode(int x) { val = x; }
 * }
 */
public class Solution {  // recursive version
    public List<Integer> preorderTraversal(TreeNode root) {
        List<Integer> result = new ArrayList<Integer>();
        
        if (root != null) {
            result.add(root.val);
            List<Integer> left = preorderTraversal(root.left);
            List<Integer> right = preorderTraversal(root.right);

            result.addAll(left);
            result.addAll(right);

        }
        return result;
    }
}

