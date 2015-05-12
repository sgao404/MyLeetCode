/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        if(nums.size()==0)  return NULL;  
        return helper(nums,0,nums.size()-1);
    }
    TreeNode* helper(vector<int>& num, int start, int end) {  
        if(start == end) return new TreeNode(num[start]);  
        int mid = (start+end)/2;  
        TreeNode *node = new TreeNode(num[mid]);  
        node->left = helper(num, start, mid-1);  
        node->right = helper(num, mid+1, end);  
        return node;  
    }  
};