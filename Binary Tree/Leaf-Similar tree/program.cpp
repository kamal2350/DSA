// link -https://leetcode.com/problems/leaf-similar-trees/
//  find leaf nodes for each tree and push them in vectors (inorder)
// check if vectors are same then true else false return*** (v1==v2)?true:false;

class Solution {
public:
    
    void findLeaf(TreeNode* root,vector<int>&vec){
        if(root==NULL){
            return ;
        }
        if(root->left==NULL && root->right==NULL){
            vec.push_back(root->val);
            return ;
        }
        findLeaf(root->left,vec);
        findLeaf(root->right,vec);
        
    }
    
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        
        if(root1==NULL and root2==NULL) return true;
         
        if(root1==NULL || root2==NULL) return false;
        
        vector<int>vec1;
        vector<int>vec2;
        
        findLeaf(root1,vec1);
        findLeaf(root2,vec2);
        
       return vec1==vec2?true:false;
    }
};
