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
    bool isCousins(TreeNode* root, int x, int y) {
     bool cousin= false;
     bool siblings = false;
     queue<TreeNode*> q1,q2;
     q1.push(root);
     while(!q1.empty() && !cousin){
        while(!q1.empty()){
            auto n = q1.front();
            q1.pop();
            if(n== nullptr) siblings = false;
            else{
            if(n->val == x || n->val == y){
               if (!cousin) cousin = siblings= true;
               else return !siblings;
             }
            q2.push(n->left), q2.push(n->right), q2.push(nullptr);
            }     
        } 
         swap (q1,q2);
    }
    return false;   
    }
    
};
