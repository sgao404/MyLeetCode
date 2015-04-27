/**
 * Definition for binary tree with next pointer.
 * public class TreeLinkNode {
 *     int val;
 *     TreeLinkNode left, right, next;
 *     TreeLinkNode(int x) { val = x; }
 * }
 */
public class Solution {
    public void connect(TreeLinkNode root) {
        Queue<TreeLinkNode> que = new LinkedList<TreeLinkNode>();
        
        if (root == null) {return;}
        
        que.add(root);
        int i = 1;
        int j = 1;
        while (que.peek() != null) {
            TreeLinkNode p = root;
            que.remove();
            if (p.right !=null && p.left!=null) {
                que.add(p.left);
                que.add(p.right);
            }
            if (i==(Math.pow(2,j)-1)){
                p.next = null;
                i++;
                j++;
            }else{
                p.next = que.element();
                i++;
            }
        }
    }
}