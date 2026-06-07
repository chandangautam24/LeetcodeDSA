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
 vector<vector<int>>ans;
void path(TreeNode* root, int target, vector<int>&route){
    if(!root)return;
    // vector<vector<int>>ans;
    route.push_back(root->val);
    if(!root->left && !root->right && target==root->val){
        ans.push_back(route);
    }
    path(root->left,target-root->val,route);
    path(root->right,target-root->val,route);
    route.pop_back();
}
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int>route;
        path(root,targetSum,route);
        return ans;
    }
};