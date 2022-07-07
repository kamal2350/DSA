// Sum of the Longest Bloodline of a Tree (Sum of nodes on the longest path from root to leaf node) 

// take 4 variables mainly maxSum and maxlength and call solve function

class Solution
{
public:
    void solve(Node* root,int sum,int &maxSum,int length,int &maxLength){
//       if root is null then we have to once check if maxlength has increased or not
         if(root==NULL){
            if(length>=maxLength){
                maxLength=length;
                maxSum=sum;
            }
            return;
        }
//       
        sum+=root->data;
//       recursively call for left and right nodes
        solve(root->left,sum,maxSum,length+1,maxLength);
        solve(root->right,sum,maxSum,length+1,maxLength);
        return;
        
        
    }
    
    int sumOfLongRootToLeafPath(Node *root)
    {
       
        //code here
        int sum=0,maxSum=0,length=0,maxLength=INT_MIN;
        solve(root,sum,maxSum,length,maxLength);
        return maxSum;
    }
};
