class Solution {
public:
int cnt=0;
void solve(int i,int op,int cl,int n,string&s,string&ans,vector<string>&res,
int lremove,int Rremove){
  if(i==n){
    if(lremove==0 && Rremove==0 && op==cl){
        res.push_back(ans);
    }
    return;
  }
  char c=s[i];
  if(c=='(' && lremove>0){
    solve(i+1,op,cl,n,s,ans,res,lremove-1,Rremove);
  }
  else if(c==')' && Rremove>0){
    solve(i+1,op,cl,n,s,ans,res,lremove,Rremove-1);
  }
  if(c!='(' && c!=')'){
    ans.push_back(c);
    solve(i+1,op,cl,n,s,ans,res,lremove,Rremove);
    ans.pop_back();
  }
  else if(c=='('){
    ans.push_back(c);
    solve(i+1,op+1,cl,n,s,ans,res,lremove,Rremove);
    ans.pop_back();
  }
  else{
    if(op>cl){
        ans.push_back(c);
        solve(i+1,op,cl+1,n,s,ans,res,lremove,Rremove);
        ans.pop_back();
    }
  }
}
    vector<string> removeInvalidParentheses(string s) {
        int n=s.size();
        string ans="";
        vector<string>res;
        int lremove=0,Rremove=0;
        for(char ch:s){
            if(ch=='('){
                lremove++;
            }
           else if(ch == ')') {
                if(lremove > 0) {
                   lremove--;
                }
                else {
                  Rremove++;
            }
        }
    }
        solve(0,0,0,n,s,ans,res,lremove,Rremove);
        sort(res.begin(), res.end());
        res.erase(unique(res.begin(),res.end()),res.end());
        return res;
    }
};