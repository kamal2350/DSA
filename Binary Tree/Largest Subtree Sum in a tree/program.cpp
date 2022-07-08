//find sum from every node and compare it with maxSum 
// return maxSum 





int findSum(TreeNode<int> *root){
    if(root==NULL){
        return 0;
    }
    else{
        return findSum(root->left)+root->data+findSum(root->right);
    }
}

void solve(TreeNode<int> *root,int sum, int &maxSum){
    if(root==NULL){
        return;
    }
    sum=sum+root->data;
    int ls=findSum(root->left);
    int rs=findSum(root->right);
    if(sum+ls+rs>maxSum){
        maxSum=sum+ls+rs;
    }
    solve(root->left,0,maxSum);
    solve(root->right,0,maxSum);
   
}

int largestSubtreeSum(TreeNode<int> *root) {
	// Write your code here.
    int maxSum=-2147483647;
    solve(root,0,maxSum);
    return maxSum;
}
