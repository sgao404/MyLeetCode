/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode(int x) { val = x; }
 * }
 */
public class Solution { // recursive
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

public class Solution { // non-recursive
    public TreeNode invertTree(TreeNode root) {
        stack<TreeNode> stack = new stack<TreeNode>();
        stack.push(root);
        
        while(!stack.empty()) {
            TreeNode temp = stack.front();
            stack.pop();
            if (temp) {
                stack.push(temp.left);
                stack.push(temp.right);
                swap(temp.left,temp.right);
            }
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