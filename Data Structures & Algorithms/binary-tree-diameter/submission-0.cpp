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
    int diameterOfBinaryTree(TreeNode* root) {
       if(root == nullptr){
            return 0;
       }
       int leftHeight = getHeight(root->left);
       int rightHeight = getHeight(root->right);
       int diameter = leftHeight + rightHeight;
       int subTree = max(diameterOfBinaryTree(root->left), diameterOfBinaryTree(root->right));
       return max(diameter, subTree);
    }
    int getHeight(TreeNode* root){
        if(root == nullptr){
            return 0;
        } else {
            return 1 + max(getHeight(root->left), getHeight(root->right));
        }
    }
};
