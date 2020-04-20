//LC 1008. Construct Binary Search Tree from Preorder Traversal'
class Solution {
public:
    int idx = 0;
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int parent_value = INT_MAX;
        return bstFromPreorder_helper(preorder, parent_value);
    }
   
    TreeNode* bstFromPreorder_helper(vector<int>& preorder, int parent_value){
        if(idx== preorder.size()||preorder[idx]> parent_value)
            return NULL;
        int current_value = preorder[idx++];
        TreeNode*  temp = new TreeNode(current_value);
        temp ->left = bstFromPreorder_helper(preorder, current_value);
        temp->right = bstFromPreorder_helper(preorder, parent_value);
        return temp;
    }
    
};
