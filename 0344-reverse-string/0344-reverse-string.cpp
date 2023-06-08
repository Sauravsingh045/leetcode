class Solution {
public:
     void reverseString(vector<char>& s) {
        recursion(s, 0, s.size()-1);
    }

    void recursion(vector<char>& str, int s, int e) {
        if(s >= e) return;
        swap(str[s], str[e]);
        recursion(str, ++s, --e);
    }
   
};