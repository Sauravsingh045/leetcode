class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
         vector<int> ans;
        int n=nums.size();
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        int k=n/3;
        for(auto it:m){
            if(it.second>k){
                ans.push_back(it.first);
            }
        }return ans;
    }
};