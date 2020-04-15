// LC 938. Range Sum of BST

class Solution {
public:
     int ans;
    int rangeSumBST(TreeNode* root, int L, int R) {
        ans=0;
        depthfirst(root,L,R);
        return ans;
    }
    
    void depthfirst(TreeNode* node, int L, int R){
        if(node  != NULL)
        {
            if(L<= node->val && node->val<=R)
                ans+=node->val;   
             if(L< node->val )
                depthfirst(node->left,L,R);
             if(node->val<R)
                depthfirst(node->right,L,R);
        }
    }
};