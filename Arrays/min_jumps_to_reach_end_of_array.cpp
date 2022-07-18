

class Solution{
  public:
    int minJumps(int arr[], int n){
        // Your code here
        int jump=0,i=0,currReach=0;
        int currMax=0;
        for(int i=0;i<n-1;i++){
            if(arr[i]+i>currMax){
                currMax=arr[i]+i; // find the curr maximum in the current reach
            }
            if(i==currReach){
                jump++;
                currReach=currMax;  // when i reaches to curr reach jump from there and define the new curr reach 
            }
            if(arr[i]==0 and i==currReach){  //speacial case
                return -1;
            }
        }
        return jump;
       
    }
};
