class Solution {
public:
    void solve(string digit,int index,vector<string> &ans,string output , string mp[]){
        if(index>=digit.length()){
            ans.push_back(output);
            return;
        }
        int l=digit[index]-'0';
        string s=mp[l];
        for(int i=0;i<s.length();i++){
            output.push_back(s[i]);
            solve(digit,index+1,ans,output,mp);
            output.pop_back();
        }
    }
   
    vector<string> letterCombinations(string digits) {
      vector<string> ans;
        string output="";
        int index=0;
        if(digits.length()==0){
            return ans;
        }
        string mp[]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        solve(digits,index,ans,output,mp);
        return ans;
    }
};