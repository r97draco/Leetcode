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
    int height_node(TreeNode* root, TreeNode* tf){
        if(!root) return  -1000;
        if(root == tf)return 0;
        int l= height_node(root->left, tf);
        int r= height_node(root->right, tf);
        return max(l,r)+1;
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        TreeNode * cur= root;
        while(1){
            if(p->val < cur->val && q->val < cur->val){
                cur= cur->left;
            }
            else if(p->val > cur->val && q->val > cur->val){
                cur= cur->right;
            }
            else{
                break;
            }
        }
        
        return cur;
    }
};