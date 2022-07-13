class Solution
{
    public:
    //Function to return the lowest common ancestor in a Binary Tree.
    Node* lca(Node* root ,int n1 ,int n2 )
    {
       //Your code here 
       if(root==NULL){ // base case 1
           return NULL;
       }
       if(root->data==n1 ||root->data==n2){  // base case data found
           return root;
       }
       Node* left= lca(root->left,n1,n2);
       Node* right= lca(root->right,n1,n2);
       
       if(left&& right){   //if there is any lca so it will firstly returned from here
           return root;
       }
       else if(left){     // later while backing the recursive calls if lca is  found somwhere in left so return that node 
           return left;
       }
       else if(right){
           return right;
       }
       
    }
};
