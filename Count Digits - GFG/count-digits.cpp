//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int evenlyDivides(int N){
        //code here
             int x=N;
        int dig;
        int count=0;
        while(x>0)
        {
            dig=x%10;
            x=x/10;
            if(dig!=0)
            {
            if(N%dig==0 )
            {
                count++;
            }
            }
        }

        return count;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.evenlyDivides(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends