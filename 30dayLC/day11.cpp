//day 11 Diameter of Binary Tree
/*We can solve this problem with two different cases:

    If the longest path will include the root node, then the longest path must be the depth(root->right) + depth (root->left)
    If the longest path does not include the root node, this problem is divided into 2 sub-problem: set left child and right child as the new root separately, and repeat step1.

We could get the solution by returning the max path of 1 and 2.*/
class Solution {
public:
    
    int dfs(TreeNode* root, int& longest_diameter) {
        if (!root) {return 0;}
        int left_depth = dfs(root->left, longest_diameter);
        int right_depth = dfs(root->right, longest_diameter);
        longest_diameter = max(longest_diameter, left_depth+right_depth);
        return 1 + max(left_depth, right_depth);
    }
    
    int diameterOfBinaryTree(TreeNode* root) {
        if (!root) {return 0;}
        int longest_diameter = 0;
        int diamter_of_root = dfs(root, longest_diameter);
        return longest_diameter;
    }
};
