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

public class Solution { // iteratively
    public ArrayList<Integer> preorderTraversal(TreeNode root) {
		ArrayList<Integer> result = new ArrayList<Integer>();

		if (root == null) {
			return result;
		}

		Stack<TreeNode> nodeStack = new Stack<TreeNode>();
		nodeStack.push(root);

		while (!nodeStack.empty()) { 
			TreeNode node = nodeStack.pop();
			result.add(node.val);

			if (node.right != null) {
				nodeStack.push(node.right);
			}

			if (node.left != null) {
				nodeStack.push(node.left);
			}
		}

		return result;
    }
}
