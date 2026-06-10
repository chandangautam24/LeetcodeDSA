class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        int m=trust.size();
        vector<int>indegree(n+1,0),outdegree(n+1,0); 
        for(auto p:trust){
            outdegree[p[0]]++;
            indegree[p[1]]++;
        }
        for(int i=1; i<=n; i++){
            if(outdegree[i]==0 && indegree[i]==n-1){
                return i;
            }
        }
        return -1;
    }
};