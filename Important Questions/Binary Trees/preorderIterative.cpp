

/* A binary tree node has data, pointer to left child
   and a pointer to right child  

/*
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
*/

void preorderHelper(Node* root, vector<int>& ans){
    if(root==NULL){
        return ;
    }
    ans.push_back(root->data);
    preorderHelper(root->left, ans);
    preorderHelper(root->right,ans);
    
}

//trying to implement the preorder code using iteration 
vector<int> preorderIter(Node* root){
    vector<int> ans;
    stack<Node*> s;
    Node* curr=root;
    while(curr!=NULL || s.empty()==false){
        while(curr!=NULL){
            ans.push_back(curr->data);
            s.push(curr);
            curr=curr->left;
        }
        curr=s.top();
        s.pop();
        curr=curr->right;
    }
    return ans;
}



//Function to return a list containing the preorder traversal of the tree.
vector <int> preorder(Node* root)
{
  vector<int> ans=preorderIter(root);
  //preorderHelper(root, ans);
  return ans;
}