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
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode *> que;
        vector<vector<int>> res;
        if(!root) return res;
        res.push_back(vector<int>(1,root->val));
        que.push(root);
        vector<int> tmp;
        
        while(!que.empty()){
            
            tmp.assign(0,0);
            
        
            int n= que.size();
            while(n--){
            TreeNode* rt= que.front();
            que.pop();
            if(rt->left != NULL){
                tmp.push_back(rt->left->val);
                que.push(rt->left);
            }
            if(rt->right != NULL){
                tmp.push_back(rt->right->val);
                que.push(rt->right);
            }
            }
            if(tmp.size()){
                res.push_back(tmp );
            }
        }
        if(tmp.size())res.push_back(tmp);
        return res;
    }
};