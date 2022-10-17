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
    bool mirror(TreeNode* a, TreeNode* b){
        if(a == NULL && b == NULL){
            return true;
        }
        if(a == NULL || b == NULL){
            return false;
        }
        if(a->val == b->val && mirror(a->left, b->right) && mirror(a->right, b->left)){
            return true;
        }
        return false;
    }
    bool isSymmetric(TreeNode* root) {
        if(root == NULL){
            return true;
        }
        if(!root->right && !root->left){
            return true;
        }
        if(mirror(root->left, root->right)){
            return true;
        }
        return false;
    }
    

};