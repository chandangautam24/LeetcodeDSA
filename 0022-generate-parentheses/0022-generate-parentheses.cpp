class Solution {
public:
void solve(int n, int op, int cl,string temp,vector<string>&ans){
  if(cl==n){
    ans.push_back(temp);
    return;
  }
  if(op<n){
    solve(n,op+1,cl,temp+"(",ans);
  }
  if(cl<op){
    solve(n,op,cl+1,temp+")",ans);
  }

}
    vector<string> generateParenthesis(int n) {
        string temp="";
        vector<string>ans;
        solve(n, 0, 0, temp, ans);
        return ans;
    }
};