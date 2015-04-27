/**
 * Definition for binary tree with next pointer.
 * struct TreeLinkNode {
 *  int val;
 *  TreeLinkNode *left, *right, *next;
 *  TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
 * };
 */
class Solution {
public:
    void connect(TreeLinkNode *root) {
        std::queue<TreeLinkNode*> que;
        if (!root) {return;}
        
        que.push(root);
        int i = 1;
        int j = 1;
        while (!que.empty()) {
            TreeLinkNode* p =que.front();
            que.pop();
            if ((p->right!=NULL)&&(p->left!=NULL)){
                que.push(p->left);
                que.push(p->right);
                
            }
            if (i==(pow(2,j)-1)){
                p->next = NULL;
                i++;
                j++;
            }else{
                p->next = que.front();
                i++;
            }
        }
        
    }
};