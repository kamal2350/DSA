class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        if(n==1){
            return nums[0];
        }
        int currSum=0;
        int currMax=INT_MIN;   // important
        for(int i=0;i<n;i++){
            currSum=currSum+nums[i];
          
            currMax= max(currMax,currSum);
              if(currSum<0){
                currSum=0;
            }
        }
        return currMax;
    }
};
