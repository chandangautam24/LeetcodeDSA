class Solution {
public:
 void dfs(int node,vector<vector<int>>& isConnected,vector<int>&vis){
    vis[node]=1;
    for(int padosi=0; padosi<isConnected.size(); padosi++){
        if(!vis[padosi] &&  isConnected[node][padosi]==1){
            dfs(padosi,isConnected,vis);
        }
    }
 }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        vector<int>vis(n,0);
        int provinces=0;
        for(int i=0; i<n; i++){
            if(!vis[i]){
                provinces++;
                dfs(i,isConnected,vis);
            }
        }
        return provinces;
    }
};