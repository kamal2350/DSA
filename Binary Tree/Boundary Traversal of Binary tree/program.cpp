// left nodes excluding leaf nodes
// leaf nodes 
// right nodes in reverse order excluding leaf nodes take help of stack and push them all in vector
// push all in vector
// 3 functions




class Solution {
public:
    
    void leftNodes(Node *root,vector<int>&vec){
        if(root==NULL) return;
        
        if(root->left==NULL && root->right==NULL ){
            return ;
            
        }
        if(root->left){
            vec.push_back(root->data);
            leftNodes(root->left,vec);
        }
        else{
            vec.push_back(root->data);
            leftNodes(root->right,vec);
        }
        
    }
     void leafNodes(Node *root, vector<int>&vec)
     {
         if(root==NULL) return ;
         if(root->left==NULL and root->right==NULL){
             vec.push_back(root->data);
             return ;
         }
         if(root->left){
             leafNodes(root->left,vec);
         }
         if(root->right){
             leafNodes(root->right,vec);
         }
     }
     
     void rightNodes(Node *root, stack<int>&st){
         if(root==NULL||(root->left==NULL && root->right==NULL)){
             return ;
         }
         if(root->right){
             st.push(root->data);
             rightNodes(root->right,st);
            
         }
         else {
             st.push(root->data);
             rightNodes(root->left,st);
         }
         return ;
     }
     
    vector <int> boundary(Node *root)
    {
        //Your code here
        vector<int> vec;
        if(root==NULL) return vec;
        if(root->left==NULL && root->right==NULL){
            vec.push_back(root->data);
            return vec;
            
        }
        stack<int> st;
        vec.push_back(root->data);
        leftNodes(root->left,vec);
        leafNodes(root,vec);
        rightNodes(root->right,st);
        while(st.empty()==false){
            vec.push_back(st.top());
            st.pop();
        }
        return vec;
        
    }
};
