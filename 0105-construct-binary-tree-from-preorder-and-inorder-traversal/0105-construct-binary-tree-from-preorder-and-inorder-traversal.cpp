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
    map<int, int>map;
    int preindex = 0;
    TreeNode* solve(vector<int>& preorder, int lo, int hi) {
        if(lo>hi) return NULL;
        int val = preorder[preindex++];
        TreeNode *root = new TreeNode(val);
        int mid = map[val];
        root->left = solve(preorder, lo, mid - 1);
        root->right = solve(preorder, mid + 1, hi);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        for(int i = 0; i < inorder.size(); i++){
            map[inorder[i]] = i;
        }
        return solve(preorder, 0, inorder.size() - 1);
    }
};