/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution { // Iteratively
public:
    vector<int> inorderTraversal(TreeNode *root) {
        vector<int> result;
        
        if (!root) {
            return result;
        }
        
        std::stack<TreeNode*> nodeStack;
        TreeNode *p = root;
        
        while (!nodeStack.empty() || p) {
            if (p) {
                nodeStack.push(p);
                p = p->left;
            } else {
                p = nodeStack.top();
                nodeStack.pop();
                result.push_back(p->val);
                p = p->right;
                
            }
        }
        return result;
           
    }
};

class Solution { // Recursively
public:
    vector<int> inorderTraversal(TreeNode *root) {
        vector<int> result;    
        helper(root,result);
        return result;
    }
    void helper(TreeNode *root, vector<int> &result){
        if (root!=NULL){
            helper(root->left,result);
            result.push_back(root->val);
            helper(root->right,result);
        }
    }
};