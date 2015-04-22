/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution { // recursive version
public:
    vector<int> preorderTraversal(TreeNode *root) {
        vector<int> result;
        if (root) {
        result.push_back(root->val);
        vector<int> left = preorderTraversal(root->left);
        vector<int> right = preorderTraversal(root->right);
        
        for (int i = 0; i < left.size(); i++) {
            result.push_back(left[i]);
        }
        for (int j = 0; j < right.size(); j++) {
            result.push_back(right[j]);
        }

        }
        return result;
    }
};