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
//if pos == arr.size()-1 && currnode == leaf node; success case. Else fail
class Solution {
    bool isValidSequence(TreeNode* root,int pos,vector<int>& arr)
    {
        if(!root)
            return false;
        else if(pos==arr.size())
            return false;
        else if(root->val!=arr[pos])
            return false;
        else if(!root->left && !root->right && pos== arr.size()-1)
            return true;     
        return (isValidSequence(root->left,pos+1,arr) || isValidSequence(root->right,pos+1,arr));
    }
public:
    bool isValidSequence(TreeNode* root, vector<int>& arr) {
        int pos = 0;
        return isValidSequence(root,pos,arr);
    }
};
