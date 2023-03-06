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
        //abhi recursive wala version bhi code kar dete hain
        stack<Node*> s;
        while(root!=NULL){
            while(root!=NULL){
                //go left;
                s.push(root);
                root=root->left;
            }
            while(!s.empty() && root==NULL){
                root=s.top();
                s.pop();
                ans.push_back(root->data);
                root=root->right;
            }
        }
        return ans;
    }
};
