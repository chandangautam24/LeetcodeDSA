class Solution {
public:
using vvi=vector<vector<int>>;
using vi=vector<int>;
void solve(int i,int k,int n,vi&res,vvi&ans){
    if(n==0 && k==0){
        ans.push_back(res);
        return;
    }
    for(int j=i; j<10; j++){
        if(j>n || k<=0)break;
        res.push_back(j);
        solve(j+1,k-1,n-j,res,ans);
        res.pop_back();
    }
}
    vector<vector<int>> combinationSum3(int k, int n) {
        vvi ans;
        vi res;
        solve(1,k,n,res,ans);
        return ans;
    }
};