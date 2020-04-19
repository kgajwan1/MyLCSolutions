//LC 104 Maximum Depth of Binary Tree

//iterative and recursive

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if (!root) 
        return 0; 
  
    // Create an empty queue for level order tarversal 
    queue<TreeNode *> q; 
  
    // Enqueue Root and initialize height 
    q.push(root); 
    int height = 0; 
  
    while (1) 
    { 
        // nodeCount (queue size) indicates number of nodes 
        // at current lelvel. 
        int nodeCount = q.size(); 
        if (nodeCount == 0) 
            return height; 
  
        height++; 
  
        // Dequeue all nodes of current level and Enqueue all 
        // nodes of next level 
        while (nodeCount > 0) 
        { 
            TreeNode *node = q.front(); 
            q.pop(); 
            if (node->left ) 
                q.push(node->left); 
            if (node->right ) 
                q.push(node->right); 
            nodeCount--; 
        } 
    } 
        
    }
};

/*class Solution {
public:
    int maxDepth(TreeNode* root) {
        
        if(root == NULL) return 0;
    
        int a = maxDepth(root->left);
        
        int b = maxDepth(root->right);
        return std::max (a,b) +1;
        
    }
}; */