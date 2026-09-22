class Solution {
public:
void solve(int op,int cl,int n,string res,vector<string>&ans){
    if(cl==n){
        ans.push_back(res);
        return;
    }
    if(op<n){
        solve(op+1,cl,n,res+'(',ans);
    }
    if(cl<op){
        solve(op,cl+1,n,res+')',ans);
    }

}
    vector<string> generateParenthesis(int n) {
        string res="";
        vector<string>ans;
        solve(0,0,n,res,ans);
        return ans;
    }
};