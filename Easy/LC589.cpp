//LC 589. N-ary Tree Preorder Traversal
//used postorder as base for preorder
/*

// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/
class Solution {
public:
    vector<int> preorder(Node* root) {
        if(root==NULL) return {};
         vector<int> res;
         stack<Node*> stk;
         stk.push(root);
         while(!stk.empty())
          {
            Node* temp=stk.top();
            stk.pop();
             res.push_back(temp->val);
                 for(int i=temp->children.size()-1;i>=0;i--) 
                    if(temp->children[i]!=NULL)
                        stk.push(temp->children[i]);
    }
    return res;
    }
};

/*
class Solution {
public:
    vector<int> postorder(Node* root) {
    if(root==NULL) return {};
    vector<int> res;
    stack<Node*> stk;
    stk.push(root);
    while(!stk.empty())
    {
        Node* temp=stk.top();
        stk.pop();
        for(int i=0;i<temp->children.size();i++) 
        stk.push(temp->children[i]);
        res.push_back(temp->val);
    }
    reverse(res.begin(), res.end());
    return res;
}


};*/