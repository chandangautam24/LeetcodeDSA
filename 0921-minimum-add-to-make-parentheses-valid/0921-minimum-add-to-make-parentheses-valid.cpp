class Solution {
public:
    int minAddToMakeValid(string s) {
        int n=s.size();
        int cnt=0,ans=0;
        for(int i=0; i<n;i++){
            if(s[i]=='('){
                cnt++;
            }
            else if(s[i]==')' && cnt>0){
                cnt--;
            }
            else if(s[i]==')' && cnt<=0){
              ans++;
            } 
        }
        return cnt+ans;
    }
};