/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    bool ans;
    int hight(TreeNode* root){
        if(root == NULL) return 0;
        int left = hight(root -> left);
        int right = hight(root-> right);
        if(abs(left-right)>1) ans = false;
        return max(left,right)+1;
    }

    bool isBalanced(TreeNode* root) {
        ans = true; // Tree is Balanced
        hight(root);
        return ans;
    }
};