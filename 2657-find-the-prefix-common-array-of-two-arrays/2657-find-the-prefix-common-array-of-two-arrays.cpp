class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
       vector<int> C(A.size(),0);
        for(int i=0;i<A.size();i++){
            bool f=false;
            for(int j=0;j<B.size();j++){
             if(A[i]==B[j]){
                 f=true;
            } 
                if(f&&j>=i){
                    C[j]++;
                }
            }
            
            
       } return C;
    }
};