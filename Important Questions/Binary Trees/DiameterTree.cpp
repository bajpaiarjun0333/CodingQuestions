pair<int, int> diameterFast(Node* root){
        if(root==NULL){
            return make_pair(0,0);
        }
        pair<int,int> leftAns=diameterFast(root->left);
        pair<int,int> rightAns=diameterFast(root->right);
        int cross=1+leftAns.second+rightAns.second;
        pair<int, int> ans;
        ans.first=max(cross,max(leftAns.first,rightAns.first));
        ans.second=max(leftAns.second,rightAns.second)+1;
        return ans;
    }
    
    int diameter(Node* root){
        return diameterFast(root).first;
        //In will try to compute height and diameter simultaneously
        
    }