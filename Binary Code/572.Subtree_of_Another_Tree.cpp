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
    bool isSametree(TreeNode *root, TreeNode *subRoot){
        if(subRoot==NULL && root==NULL)
            return true;
        if(subRoot==NULL || root==NULL)
            return false;
        if(root->val==subRoot->val)
            return isSametree(root->left, subRoot->left) && isSametree(root->right, subRoot->right);
    
        return false;
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(!root)
            return false;
        if(!subRoot)
            return true;
        
        if(root->val==subRoot->val){
            if(isSametree(root, subRoot))
                return true;
        }   
    
        return isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);
        
    }
};