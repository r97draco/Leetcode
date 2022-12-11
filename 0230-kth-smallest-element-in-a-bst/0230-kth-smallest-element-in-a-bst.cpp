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
    priority_queue<int>pq;
    int K;
    void insert(int i){
        pq.push(i);
        if(pq.size()>K){
            pq.pop();
        }
        
    }
    int ret(){
        return pq.top() ;
    }
    int kthSmallest(TreeNode* root, int k) {
        K=k;
        stack<TreeNode*> st;
        if(root)st.push(root);
        while(st.size()){
            TreeNode* rt= st.top();
            st.pop();
            
            if(rt){
            insert(rt->val);
            st.push(rt->left);
            st.push(rt->right);
            }
        }
        int ans= ret();
        return ans;
    }
};