class Solution {
public:
    
    TreeNode* buildTree(vector<int>preorder,int preStart,int preEnd, vector<int>inorder,int inStart,int inEnd,map<int,int>&mp){
        
        if(inStart>inEnd||preStart>preEnd){
            return NULL;
        }
        
        TreeNode* node= new TreeNode(preorder[preStart]);
        int rootIndex=mp[node->val];
        int leftNums=rootIndex-inStart;
        node->left=buildTree(preorder,preStart+1,preStart+leftNums,inorder,inStart,rootIndex-1,mp);
        node->right=buildTree(preorder,preStart+leftNums+1,preEnd,inorder,rootIndex+1,inEnd,mp);
        return node;
        
    }
    
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        map<int,int>mp;
        
        
        for(int i=0;i<=inorder.size()-1;i++){
            mp[inorder[i]]=i;
            
        }
        
        TreeNode* node=buildTree(preorder,0,preorder.size()-1,inorder,0,inorder.size()-1,mp);
        return node;
    }
};
