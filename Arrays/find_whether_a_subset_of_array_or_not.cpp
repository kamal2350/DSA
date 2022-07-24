string isSubset(int a1[], int a2[], int n, int m) {
    
    if(n<m){
        return "No";
    }
    set<int> s;  //take a set 
    for(int i=0;i<n;i++){
        s.insert(a1[i]);
    }
    
    for(int i=0;i<m;i++){
        if(s.find(a2[i])==s.end()){   // find if set contains all values or not
            return "No";
        }
    }
    return "Yes";
}
