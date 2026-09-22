class Solution {
public:
    void bfs(int jdx,int idx,vector<vector<int>> &visited,vector<vector<char>>&grid){
        queue<pair<int,int>> q;
        int row=grid.size();
        int col=grid[0].size();
        q.push({idx,jdx});
        while(!q.empty()){
            int x=q.front().first;
            int y=q.front().second;
            q.pop();
            visited[x][y]=1;
            vector<pair<int,int>> p={{x,y+1},{x,y-1},{x+1,y},{x-1,y}};
            for(int i=0;i<4;i++){
                int xx=p[i].first;
                int yy=p[i].second;
                if(xx>=0  && xx<row && yy>=0 && yy<col && visited[xx][yy]==0 && grid[xx][yy]=='1'){
                    visited[xx][yy]=1;
                    q.push({xx,yy});
                }
            }
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int count=0;
        vector<vector<int>> visited(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(visited[i][j]==0 && grid[i][j]=='1'){
                    count++;
                    bfs(j,i,visited,grid);
                }
            }
        }
        return count;
    }
};