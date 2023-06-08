class Solution {
public:
    vector<vector<int>> ans;
    void dfs(vector<int>& nums, vector<int> s, int ind)
    {
       if(ind==nums.size())
       {
           ans.push_back(s);
           return;
       }
        s.push_back(nums[ind]);
        dfs(nums, s, ind+1);
        s.pop_back();
        while(ind+1<nums.size() && nums[ind]==nums[ind+1])
            ind++;
        dfs(nums, s, ind+1);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int> s;
        sort(nums.begin(), nums.end());
        dfs(nums, s, 0);
        return ans;
        
            
    }
};