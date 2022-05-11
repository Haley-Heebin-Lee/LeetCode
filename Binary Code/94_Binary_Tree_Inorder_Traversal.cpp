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
//recursive
//check left first(and push), if it's null then check right

class Solution {
public:
    void recur(TreeNode* root, vector<int> &v) {
        if(root != NULL){
            recur(root->left, v);
            v.push_back(root->val);
            recur(root->right, v);
        }
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> v;    
        recur(root, v);
        return v;
    }
};

//iteration
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        stack<TreeNode*> s;
        vector<int> v;
        
        while(!s.empty() || root != NULL){ //if both stack and root is null/empty, finish it
            while(root != NULL)
            {
                s.push(root);
                root = root->left;
            }// keep stacking left val
            
            if(!s.empty()) {
                root = s.top(); //root is the current left val
                s.pop(); 
                v.push_back(root->val); //remove from stack and push to vector
                root = root->right; // check right val now
            }
        }
        return v;
    }
};
