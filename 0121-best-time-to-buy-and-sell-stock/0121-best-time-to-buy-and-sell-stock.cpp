class Solution {
public:
    int maxProfit(vector<int>& prices) {
      int maxpro=0;
      int mn=INT_MAX;
      int n=prices.size();
      for(int i=0;i<n;i++){
            mn=min(mn,prices[i]);
                  maxpro=max(maxpro,prices[i]-mn);
              
          
      }return maxpro;
    }
};