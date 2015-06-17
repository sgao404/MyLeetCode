/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution { // recursive
public:
    TreeNode* invertTree(TreeNode* root) {
        if (root) {
        invertTree(root->left);
        invertTree(root->right);
        std::swap(root->left, root->right);
        }
        return root;
        
    }
};

class Solution {  // non-recursive
public:
    TreeNode* invertTree(TreeNode* root) {
        std::stack<TreeNode*> stack;
        stack.push(root);
        
        while(!stack.empty()) {
            TreeNode* temp = stack.top();
            stack.pop();
            if (temp) {
                stack.push(temp->left);
                stack.push(temp->right);
                std:swap(temp->left,temp->right);
            }
        }
        return root;
    }
};