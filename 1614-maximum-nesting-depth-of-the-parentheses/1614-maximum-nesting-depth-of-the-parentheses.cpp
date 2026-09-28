class Solution {
public:
    int maxDepth(string s) {
        int cnt=0;
        int ans=0;
        for(auto &i: s){
            if(i==')'){
                cnt--;
            }
            if(i!='(')continue;
            cnt++;
            ans=max(ans,cnt);
        }
        return ans;
    }
};