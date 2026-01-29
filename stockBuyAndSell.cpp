class Solution {
  public:
    int maximumProfit(vector<int> &prices) {
        // code here
        int sz=prices.size();
        int minval=prices[0];
        int maxpro=0;
        
        for(int i=0;i<sz;i++){
            minval=min(minval,prices[i]);
            int localpro=prices[i]-minval;
            
            maxpro=max(maxpro,localpro);
        }
        return maxpro;
    }
};
