// 1. use map to store node with particular diagonal value;
// 2. create helper function and pass the reference of map;
// 3. *** use diogonal value same for right node and diagonal+1 value for left nodes.


void helper(Node *root, int diagonal,unordered_map<int,vector<int>> &map){
    if(root==NULL) return ;
    
    map[diagonal].push_back(root->data);
    helper(root->left,diagonal+1,map);
    helper(root->right,diagonal,map);
    return;
}
vector<int> diagonal(Node *root)
{
   // your code here
   unordered_map<int,vector<int>> map;
   vector<int> vec;
   if(root==NULL){
       return vec;
   }
   if(root->left==NULL && root->right==NULL){
       vec.push_back(root->data);
       return vec;
   }
    helper(root,0,map);
   
   for(int i=0;i<map.size();i++){
       for(auto m:map[i]){
           vec.push_back(m);
       }
   }
   return vec;
   
   
 
