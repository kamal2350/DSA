class Solution{
    public:
    //Function to find if there exists a triplet in the 
    //array A[] which sums up to X.
    bool find3Numbers(int A[], int n, int X)
    {
        //Your Code Here
        set<int>s;  // take a set 
        int count=0;
        
        for(int i=0;i<n;i++){
            s.insert(A[i]);
        }
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
               int val1=A[i];
               int val2=A[j];
               int val3=X-val1-val2;
               if(s.find(val3)!=s.end() && val3!=val1 && val3!=val2){   /// third value should not equals to first and second
                   count++;
               }
            }
        }
        return count;
    }

};
