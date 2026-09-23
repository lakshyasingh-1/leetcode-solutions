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
    TreeNode* build(vector<int>& arr,int left,int right){
        if(right<left)return nullptr;
        int mid=(left+right)/2;
        TreeNode* temp=new TreeNode(arr[mid]);
        temp->left=build(arr,left,mid-1);
        temp->right=build(arr,mid+1,right);
        return temp;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums){
        int n=nums.size();
        TreeNode* root=build(nums,0,n-1);
        return root;
    }
};