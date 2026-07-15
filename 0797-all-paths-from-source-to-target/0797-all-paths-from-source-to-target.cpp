class Solution {
public:
void dfs(int node,int dest,vector<vector<int>>&graph,vector<int>path,
vector<vector<int>>&ans){
    path.push_back(node);
    if(node==dest){
        ans.push_back(path);
        return;
    }
    for(int i:graph[node]){
        dfs(i,dest,graph,path,ans);
    }

}
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
         vector<vector<int>>ans;
         vector<int>path;
         int src=0;
         int dest=graph.size()-1;
         dfs(src,dest,graph,path,ans);
         return ans;
    }
};