class Solution {
  public:
    // Function to return a list containing the inorder traversal of the tree.
    void inorderRecursive(Node* root,vector<int>& ans){
        if(root==NULL){
            return;
        }
        inorderRecursive(root->left,ans);
        ans.push_back(root->data);
        inorderRecursive(root->right,ans);
    }
    vector<int> inOrder(Node* root) {
        // dono karenge recursive bhi aur iterative bhi
        //pehle recursive
        vector<int> ans;
        inorderRecursive(root,ans);
        return ans;
    }
};