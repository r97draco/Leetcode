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
    void dfs(TreeNode *k, vector<int>& kq){
      if(!k)return;
      kq.push_back(k->val);
      dfs(k->left, kq);
      dfs(k->right, kq);
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
      if(!p && !q) return true;
      if(!p|| !q) return false;
 
      bool l= isSameTree(p->left,q->left);
      bool r= isSameTree(p->right,q->right);
      return (p->val==q->val) && l && r;
    }
};