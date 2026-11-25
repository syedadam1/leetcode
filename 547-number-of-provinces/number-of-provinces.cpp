class Solution {
public:
    void dfs(int node,vector<int>&visited,vector<vector<int>>&adj){
         visited[node]=1;
         for(auto child:adj[node]){
              if(visited[child]){
                continue;
              }
              
              dfs(child,visited,adj);
         }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        vector<vector<int>> adjList(n);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(isConnected[i][j]==1){
                    adjList[i].push_back(j);
                }
            }
        }
        int cnt=0;
        vector<int> visited(n);
        for(int i=0;i<n;i++){
            if(visited[i]==0){
                cnt++;
                dfs(i,visited,adjList);
            }
        }
        return cnt;
    }
};