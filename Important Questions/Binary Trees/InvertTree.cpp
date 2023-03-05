TreeNode* invertTree(TreeNode* root) {
        //bahut hi simple si game hai yeh waali to left ko kar lao 
        //right ko kar lao aur root ko mai lr dunga
        if(root==NULL){
            //iska invert to yehi hoga
            return NULL;
        }
        //left ko invert and right ko invert
        TreeNode* left=invertTree(root->left);
        TreeNode* right=invertTree(root->right);
        //finally root ki baari
        //post order traversal ka use kiya hua hai yaha pr
        root->left=right;
        root->right=left;
        return root;
    }