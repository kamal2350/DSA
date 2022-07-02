class Solution {
public:
    
    TreeNode* buildTree(vector<int>inorder,int inStart,int inEnd,vector<int>postorder,int postStart,int postEnd,map<int,int>&mp){
//         3 check for condition ** we are traversing post order from end so see condition carefully
        if(inStart>inEnd||postStart<postEnd){
            return NULL;
        }
        
//       4. build new node with value of postOrder postStart
        TreeNode* node = new TreeNode(postorder[postStart]);
        int nodeIndex=mp[node->val];   // index of node created inorder array
        int numsRight=inEnd - nodeIndex; // num of elements at right of inorder array
        
//       5 recursively call for creating left and right node;
        node->right=buildTree(inorder,nodeIndex+1,inEnd,postorder,postStart-1,postStart-numsRight,mp);
        node->left=buildTree(inorder,inStart,nodeIndex-1,postorder,postStart-numsRight-1,postEnd,mp);
        return node;
        
    }
    
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
     
//     1  put all  values of inorder in map with value of index as key of map and indexof array is value of map
        map<int,int>mp;
        for(int i=0;i<inorder.size();i++){
            mp[inorder[i]]=i;
            
        }
//        2     create a helper function and mention starting and end points of in order and postorder and pass reference of mp
            TreeNode* node= buildTree(inorder,0,inorder.size()-1,postorder,postorder.size()-1,0,mp);
            return node;
        
    }
};
