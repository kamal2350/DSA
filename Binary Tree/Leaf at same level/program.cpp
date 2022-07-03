// find leaf nodes 
// push value of each leaf node to a vector and check if all values in vector are same or not
// if every value at vector is same then true but if not then false


class Solution{
  public:
    /*You are required to complete this method*/
    void check(Node* root, vector<int>&vec,int level){
        if(root==NULL) return ;
        if(root->left==NULL and root->right==NULL){
            vec.push_back(level);
            return;
        }
        check(root->left,vec,level+1);
        check(root->right,vec,level+1);
    }
    bool check(Node *root)
    {
        if(root==NULL || root->left==NULL && root->right==NULL) return true;
        vector<int>vec;
        //Your code here
     check(root,vec,0);
     int val=vec[0];
     for(int i=0;i<vec.size();i++){
         if(val!=vec[i]){
             return false;
         }
     }
     return true;
    }
};
