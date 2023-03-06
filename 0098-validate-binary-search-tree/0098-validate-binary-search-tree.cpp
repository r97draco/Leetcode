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
    bool isValidBST(TreeNode* root) {
    return isvalidBST(root, NULL, NULL);
}
    bool isvalidBST(TreeNode* root, TreeNode* min, TreeNode* max){
        if(!root)return true;
        if(min && min->val >= root->val || max && max->val <= root->val){
            return false;
        }
        return isvalidBST(root->left, min, root) && isvalidBST(root->right, root, max);
    }

    
    
    
    
    
    
    
    
    
bool isValidBST(TreeNode* root, TreeNode* minNode, TreeNode* maxNode) {
    if(!root) return true;
    if(minNode && root->val <= minNode->val || maxNode && root->val >= maxNode->val)
        return false;
    return isValidBST(root->left, minNode, root) && isValidBST(root->right, root, maxNode);
}
};