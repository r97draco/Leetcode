/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> visited;
      
    int height(TreeNode* root){
        if(!root) return 0;
        int lf= height(root->left);
        int rf= height(root->right);
        return max(lf, rf)+1;
    }
    int rh(TreeNode* root){
        if(!root)return 0;
        int lf= height(root->left);
        int rf= height(root->right);
        return lf+rf;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(!root) return 0;
        int cur= rh(root);
        int lfr= diameterOfBinaryTree(root->left);
        int rfr= diameterOfBinaryTree(root->right);
        return max(lfr, max(rfr, cur)); 
        
    }
};