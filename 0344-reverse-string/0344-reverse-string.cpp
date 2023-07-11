class Solution {
public:
    void reverseString(vector<char>& s) {
        stack<char> st;
        vector<char> ss;
        for(int i=0;i<s.size();i++){
            char ch=s[i];
            st.push(ch);
        }
        s.clear();
        while(!st.empty()){
           char ch= st.top();
            s.push_back(ch);
            st.pop();
        }
        // for(int i=0;i<s.size();i++){
        //   s[i] =ss[i];
        // }
        
    }
};