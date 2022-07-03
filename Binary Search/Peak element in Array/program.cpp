mountain array is firstly in increasing order then in decreasing order so we can apply binary search over here
only three cases to be considered
find mid
if(arr[mid]<arr[mid+1]) that means we have not reached the peak element yet so make s=mid+1;
else the element is either in decreasing slope or itself is a peak element so we make e=mid;
***only compare for (s<e) and return s;


class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        
        int max=0;
        int s=0;
        int mid=0;
        int e=nums.size()-1;
        
        while(s<e){
             mid=s+(e-s)/2;
            
            if(nums[mid]<nums[mid+1]){
                s=mid+1;
            }
            else{
                e=mid;
            }
        }
        return s;
        
        
    }
};
