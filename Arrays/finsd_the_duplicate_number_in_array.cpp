class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_set<int> s;  // take set
        int n= nums.size();
        for(int i=0;i<n;i++){
            if(s.find(nums[i])!=s.end()){   // check if element is already present in set if yes ? that means arr[i] is the duplicate number : put-
                return nums[i];             // -the current element in set
            }else{
                s.insert(nums[i]);
            }
        }
        return  -1;  // if no element is repeated then return -1
    }
};
