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
    TreeNode* searchBST(TreeNode* root, int val) {
        if(root==NULL){
            return root;
        }
        if(root->val==val){
            return  root;
        }
        if(root->val>val){
            return searchBST(root->left,val);
        }
        else{
            return searchBST(root->right,val);
        }
        // TreeNode* left=searchBST(root->left,val);
        // TreeNode* right=searchBST(root->right,val);
        // if(left){
        //     return left;
        // }
        // else if(right){
        //     return right;
        // }
        // else{
        //     return NULL;
        // }
    }
};