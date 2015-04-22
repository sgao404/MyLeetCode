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
        // result.insert(result.end(), left.begin(), left.end());  
        for (int i = 0; i < left.size(); i++) {
            result.push_back(left[i]);
        }
        // result.insert(result.end(), right.begin(), right.end());  
        for (int j = 0; j < right.size(); j++) {
            result.push_back(right[j]);
        }

        }
        return result;
    }
};

class Solution { // iteratively
public:
    vector<int> preorderTraversal(TreeNode *root) {
    	vector<int> result;

    	if(root == NULL)
    	{
    		return result;
    	}

    	std::stack<TreeNode*> nodeStack;
    	nodeStack.push(root);

    	while(!nodeStack.empty())
    	{
    		TreeNode *node = nodeStack.top();
    		result.push_back(node->val);
    		nodeStack.pop();

    		if(node->right)
    		{
    			nodeStack.push(node->right);
    		}
    		if(node->left)
    		{
    			nodeStack.push(node->left);
    		}
    	}

    	return result;
    }
};