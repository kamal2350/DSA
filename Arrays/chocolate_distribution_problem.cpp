class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
    if(n<m){         //corner case 
        return -1;
    }
   
    sort(a.begin(),a.end());
    
    int i=0;
    int j=m-1;
    long long res=100000;
    while(j<n){
        res=min(res,a[j++]-a[i++]);    // minimum difference between a[m-1] and a[i] over array
      
    }
    return res;
    
    }   
};
