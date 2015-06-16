/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode(int x) { val = x; }
 * }
 */
public class Solution { // recursively
    public TreeNode invertTree(TreeNode root) {
        if (root != null) {
        invertTree(root.left);
        invertTree(root.right);
        swap(root);
        }
        return root;

    }
    
    public void swap(TreeNode root) {
        TreeNode temp = new TreeNode(1);
        temp = root.left;
        root.left = root.right;
        root.right = temp;
    }
}