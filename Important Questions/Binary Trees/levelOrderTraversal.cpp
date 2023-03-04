/* A binary tree Node

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


class Solution
{
    public:
    //Function to return the level order traversal of a tree.
    vector<int> levelOrder(Node* node)
    {
      //Store the level order traversal or breadth first traversal
      //We will need a queue and a solution vector
      queue<Node*> helper;
      vector<int> ans;
      //Root cannot  be null dont worry about that
      helper.push(node);
      while(!helper.empty()){
          Node* temp=helper.front();
          helper.pop();
          ans.push_back(temp->data);
          if(temp->left){
              helper.push(temp->left);
          }
          if(temp->right){
              helper.push(temp->right);
          }
      }
      return ans;
    }
};