class Solution{
    public:
    //Function to check whether a binary tree is balanced or not.
    int height(Node *root){
        if(root==NULL) return 0;
        int lh=height(root->left);
        int rh=height(root->right);
        if(lh>rh){
            return lh+1;
        }else{
            return rh+1;
        }
    }
    bool isBalanced(Node *root)
    {
        //  Your Code here
        if(root==NULL) return true;
        if(root->left==NULL && root->right==NULL){
            return true;
        }
        
        int lh=height(root->left);
        int rh=height(root->right);
        
        if(abs(lh-rh)>1){
            return false;
            
        }
        if(abs(lh-rh)<=1){
            return isBalanced(root->left)&&isBalanced(root->right);
        }
        
    }
};
