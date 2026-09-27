class Solution {
public:
using vvs=vector<vector<string>>;
using vs=vector<string>;
void solve(int ind,string s,vs&res,vvs&ans){
    if(ind==s.size()){
        ans.push_back(res);
        return;
    }
    for(int i=ind; i<s.size(); i++){
        if(ispalindrome(s,ind,i)){
            res.push_back(s.substr(ind,i-ind+1));
            solve(i+1,s,res,ans);
            res.pop_back();
        }
    }
}
bool ispalindrome(string s,int start,int end){
    while(start<=end){
        if(s[start++]!=s[end--]){
            return false;
        }
    }
    return true;
}
    vector<vector<string>> partition(string s) {
        vvs ans;
        vs res;
        solve(0,s,res,ans);
        return ans;
    }
};