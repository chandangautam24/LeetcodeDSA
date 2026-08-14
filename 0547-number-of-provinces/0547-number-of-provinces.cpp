class Solution {
public:
void dfs(int curr,vector<vector<int>>& isConnected,vector<int>&vis){
    vis[curr]=1;
    for(int i=0; i<isConnected.size(); i++){
        if(!vis[i] && isConnected[i][curr]==1){
            dfs(i,isConnected,vis);
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