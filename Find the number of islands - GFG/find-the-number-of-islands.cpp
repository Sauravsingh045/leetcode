//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  void bfs(int i,int j,vector<vector<int>> &vis,vector<vector<char>>& grid){
      vis[i][j]=1;
        queue<pair<int,int>> q;
        q.push({i,j});
        int n=grid.size();
        int m=grid[0].size();
        while(!q.empty()){
            int r=q.front().first;
            int c=q.front().second;
            q.pop();
        for(int delr=-1;delr<=1;delr++){
            for( int delc=-1;delc<=1;delc++){
                int row=r+delr;
                int col=c+delc;
                if(row>=0 && row<n && col>=  0 &&col<m && grid[row][col]=='1'&& !vis[row][col])                 {
                    vis[row][col]=1;
                    q.push({row,col});
                }
            }
        }  
        }
    }
public:
    int numIslands(vector<vector<char>>& grid) {
       int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>> vis(n,vector<int> (m,0));
        int c=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!vis[i][j] && grid[i][j]=='1'){
                    c++;
                    bfs(i,j,vis,grid);
                }
            }
        }
  return c; }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> grid(n, vector<char>(m, '#'));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        int ans = obj.numIslands(grid);
        cout << ans << '\n';
    }
    return 0;
}
// } Driver Code Ends