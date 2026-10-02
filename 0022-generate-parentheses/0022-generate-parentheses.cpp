class Solution {
public:
void solve(int op,int cl,int n, string ans,vector<string>&res){
    if(cl==n){
        res.push_back(ans);
        return;
    }
    if(op<n){
        solve(op+1,cl,n,ans+'(',res);
    }
    if(cl<op){
        solve(op,cl+1,n,ans+')',res);
    }
}
    vector<string> generateParenthesis(int n) {
        string ans="";
        vector<string>res;
        solve(0,0,n,ans,res);
        return res;
    }
};