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
//preorder = root,left,right

//recursive
class Solution {
public:
     void recur(TreeNode* root, vector<int> &v) {
        if(root != NULL){
            v.push_back(root->val);
            recur(root->left, v);
            recur(root->right, v);
        }
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> v;    
        recur(root, v);
        return v;
    }
};


//iteration
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        stack<TreeNode*> s;
        vector<int> v;
        
        while(!s.empty() || root != NULL){ //if both stack and root is null/empty, finish it
            while(root != NULL)
            {
                s.push(root);
                v.push_back(root->val);
                root = root->left;
            }// keep stacking left val
            
            if(!s.empty()) {
                root = s.top(); //root is the current left val
                s.pop(); 
                root = root->right; // check right val now
            }
        }
        return v;
    }
};
