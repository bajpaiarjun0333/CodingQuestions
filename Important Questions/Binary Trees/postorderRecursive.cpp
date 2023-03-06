void postHelper(Node* root, vector<int>& ans){
    if(root==NULL){
        return;
    }
    postHelper(root->left,ans);
    postHelper(root->right,ans);
    ans.push_back(root->data);
}


vector <int> postOrder(Node* root)
{
  vector<int> ans;
  postHelper(root,ans);
  return ans;
}