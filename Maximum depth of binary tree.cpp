int maxDepth(Node *root) {
        if(root==NULL)return 0;
        return max(maxDepth(root->right),maxDepth(root->left))+1;
        // Your code here
    }
