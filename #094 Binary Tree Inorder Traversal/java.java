/**
 * Definition for binary tree
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode(int x) { val = x; }
 * }
 */
public class Solution { // Iteratively
    public List<Integer> inorderTraversal(TreeNode root) {
        List<Integer> result = new ArrayList<Integer>();
        
        if (root == null) {return result;}
        
        Stack<TreeNode> nodeStack = new Stack<TreeNode>();
        TreeNode p = root;
        
        while (!nodeStack.empty() || p != null) {
            if (p!=null) {
                nodeStack.push(p);
                p = p.left;
            } else {
                p = nodeStack.pop();
                result.add(p.val);
                p = p.right;
                
            }
        }
        return result;
    }
}
