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
//Symmetric Tree
//recursive
class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        return recurr(root->left, root->right);
    }
    bool recurr(TreeNode *left, TreeNode *right){
        //both side are null - true
        if(left == NULL && right == NULL)
            return true;
        
        //only one side is null - false
        if((left == NULL && right != NULL) || (left != NULL && right == NULL))
            return false;
        
        //if left and right is not same - false
        if(left->val != right->val)
            return false;
        
        //check the same for left->left, right->right
        if(recurr(left->left, right->right) == false)
            return false;
        
        //check the same for left->right, right->left
        if(recurr(left->right, right->left) == false)
            return false;
        
        //return true if not any case above
        return true;
    }
};

//Symmetric Tree
//iteration
class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        if(root == NULL)
            return true;
        
        stack<TreeNode *> s;
        s.push(root->left);
        s.push(root->right);

        while (!s.empty())  {
            //could be null
            auto right = s.top();
            s.pop();
            auto left = s.top();
            s.pop();
            
            //letf and right is null then escape while loop and return true
            if (!left && !right) {
                continue;
            }
            
            //one of them is null - false
            if (!left || !right)
                return false;
            
            //the value of left and right not same - false
            if(left->val != right->val)
                return false;
            
            //check the same for left->left, right->right 
            //iterate for those 2 and check more children
            s.push(left->left);
            s.push(right->right);
            
            //check the same for left->right, right->left
            //after all branches from above done, check this side
            s.push(left->right);
            s.push(right->left);

        }
        return true;
    }
};
