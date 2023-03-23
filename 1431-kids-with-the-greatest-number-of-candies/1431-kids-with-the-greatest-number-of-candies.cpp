class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> ans;
        int sum=0;
        int cs=*max_element(candies.begin(),candies.end());
        for(int i=0;i<candies.size();i++){
        sum=candies[i]+extraCandies;
            if(sum>=cs){
                ans.push_back(true);
                
            }else{ans.push_back(false);

            }
        }
        return ans;
    }
};