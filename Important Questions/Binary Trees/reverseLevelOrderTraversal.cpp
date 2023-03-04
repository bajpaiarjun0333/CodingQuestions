

/*   
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */
vector<int> reverseLevelOrder(Node *root)
{
    //We will need a queue and a stack as well
    queue<Node*> q;
    stack<int> s;
    vector<int> ans;
    q.push(root);
    while(!q.empty()){
        Node* temp=q.front();
        q.pop();
        s.push(temp->data);
        if(temp->right){
            q.push(temp->right);
        }
        if(temp->left){
            q.push(temp->left);    
        }
    }
    while(!s.empty()){
        int data= s.top();
        s.pop();
        ans.push_back(data);
    }
    return ans;
}