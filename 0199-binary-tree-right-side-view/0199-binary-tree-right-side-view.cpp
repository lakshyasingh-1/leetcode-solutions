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
    int hight(TreeNode* root){
        if(root == NULL) return 0;
        int left = hight(root -> left);
        int right = hight(root-> right);
        return max(left,right)+1;
    }
    void preorder(TreeNode* root, int lvl, vector<int>& ans){
        if(root == NULL) return;
        ans[lvl] = root->val;
        preorder(root->left, lvl+1, ans);
        preorder(root->right, lvl+1, ans);
    }
    vector<int> rightSideView(TreeNode* root) {
        int n = hight(root);
        vector<int> ans(n);
        preorder(root, 0, ans);
        return ans;
    }
};