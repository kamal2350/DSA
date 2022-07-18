// profit = sp-cp
// for max profit sp is highest and cp is lowest 
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int cp=INT_MAX;
        int sp=INT_MIN;
        
        for(int i=0;i<prices.size();i++){
           cp= min(cp,prices[i]); // chose low cp
            sp= max(prices[i]-cp,sp); // chose high sp
        }
        return sp;
        
    }
};
