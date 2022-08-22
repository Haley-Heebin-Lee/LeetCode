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
//recursion

class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root == NULL)
            return 0;
        
        int left = maxDepth(root->left);
        int right = maxDepth(root->right);
        
        if(left > right){
            return left+1; // including this cycle
        }else{
            return right+1;
        }
    }
};


//iterator
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root == NULL)
            return 0;
        
        queue<TreeNode*> depthQ;
        depthQ.push(root);
        int depth = 0;
        
        while(!depthQ.empty()){
            
            int level = depthQ.size();
            
            while(level > 0){
                TreeNode* curr = depthQ.front();
                depthQ.pop(); // the top level pop
                
                if(curr->left != NULL)
                    depthQ.push(curr->left);
                if(curr->right !=NULL)
                    depthQ.push(curr->right);
                
                level--;
            }
            depth++;
        }
        return depth;
    }
}; //BFS level order