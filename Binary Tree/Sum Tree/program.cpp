// if root==NULL or r->l && r->r==NULL return true;
// find left sum and right sum of tree
// check if ls +rs =root->data if ! return false;
// recursively check with root->left && root->right 

class Solution
{
    public:
    
    int isSum(Node* root){
        if(root==NULL){
            return 0;
        }
        
        if(root->left==NULL && root->right==NULL){
            return root->data;
        }
        
       int ls=0,rs=0;
       if(root->left){
           ls=isSum(root->left);
           
       }
       if(root->right){
           rs=isSum(root->right);
       }
       
       return root->data+ls+rs;
        
    }
    
    bool isSumTree(Node* root)
    {
         // Your code here
         if(root==NULL ||(root->left==NULL&& root->right==NULL)){
             return true;
         }
         int ls=isSum(root->left);
         int rs=isSum(root->right);
        //  cout<<ls+rs<<endl;
         
         
         if(ls+rs!=root->data){
             return false;
         }
         else{
           return  isSumTree(root->right) && isSumTree(root->left); // recursively check with root->left && root->right 
         }
    }
};
