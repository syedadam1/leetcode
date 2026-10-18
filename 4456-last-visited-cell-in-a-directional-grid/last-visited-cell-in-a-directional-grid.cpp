class Solution {
public:
    
    void lvc(vector<int>&ans,vector<vector<char>>&a,int i,int j,vector<vector<int>>&visited,int n,int m){
        visited[i][j]=1;
        if(a[i][j]=='R'){
            if(j==m-1){
                ans={i,j};
                return;
            }
            if(visited[i][j+1]==1){
                ans={i,j};
                return;
            }
            lvc(ans,a,i,j+1,visited,n,m);
        }
        if(a[i][j]=='L'){
            if(j==0){
                ans={i,j};
                return;
            }
            if(visited[i][j-1]==1){
                ans={i,j};
                return;
            }
            lvc(ans,a,i,j-1,visited,n,m);
        }
        if(a[i][j]=='U'){
            if(i==0){
                ans={i,j};
                return;
            }
            if(visited[i-1][j]==1){
                ans={i,j};
                return;
            }
            lvc(ans,a,i-1,j,visited,n,m);
        }
        if(a[i][j]=='D'){
            if(i==n-1){
                ans={i,j};
                return;
            }
            if(visited[i+1][j]==1){
                ans={i,j};
                return;
            }
            lvc(ans,a,i+1,j,visited,n,m);
        }
    }
    vector<int> lastVisitedCell(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>> visited(n,vector<int>(m,0));
        vector<int> ans;
        lvc(ans,grid,0,0,visited,n,m);
        return ans;
    }
};