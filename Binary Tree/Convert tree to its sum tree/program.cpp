// helper function
//if(!root) return 0;
// find left sum
// find right sum
// int x= root->data;
// root->data= leftsum+rightSum;
// return x+root->data;





class Solution {
  public:
  
    // Convert a given tree to a tree where every node contains sum of values of
    // nodes in left and right subtrees in the original tree
    int helper(Node *node){
        int x =0;
        if(!node){
            return 0;
        }
         if(node->left==nullptr and node->right==nullptr)
        {
             
             x=node->data;
             node->data=0;
             return node->data+x;
        }
        int ls=helper(node->left);
        int rs=helper(node->right);
        x=node->data;
        node->data=ls+rs;
        return x+node->data;
        
        
    }
    void toSumTree(Node *node)
    {
        // Your code here
       node->data=0;
         if(node==NULL) return;
        if(node->left==nullptr and node->right==nullptr)
        {
            node->data=0;
        }
            
        int n= helper(node);
        
    }
};
