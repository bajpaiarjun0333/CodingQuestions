//User function template for C++

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
class Solution{
    public:
    //Function to find the height of a binary tree.
    int height(struct Node* node)
{
    //Base Case: if root is null or leaf
    if(node==NULL){
        return 0;
    }
    if((node->left==NULL) && (node->right==NULL)){
        return 1;
    }
    int left=0;
    int right=0;
    if(node->left){
        left=1+height(node->left);
    }
    if(node->right){
        right=1+height(node->right);
    }
    return max(left,right);
}
};