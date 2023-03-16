class Solution {
public:
    int reverse(int x) {
        int rem;
        long res=0;
   while(x!=0){
        rem=x%10;
        res=(long)res*10+rem;
        x=x/10;
    }if(res>INT_MAX || res<INT_MIN){
       return 0;
   }
        return res;
    }
};