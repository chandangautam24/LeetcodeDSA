class Solution {
public:
    int minInsertions(string s) {
        int n=s.size();
        int op=0;
        int ans=0;
        for(int i=0; i<n; i++){
            if(s[i]=='('){
                op++;
            }
            else{
                if(i+1<n && s[i+1]==')'){
                    i++;
                }
                else{
                    ans++;
                }
                if(op>0){
                    op--;
                }
                else{
                    ans++;
                }
            }
        }
        ans+=2*op;
        return ans;
    }
};