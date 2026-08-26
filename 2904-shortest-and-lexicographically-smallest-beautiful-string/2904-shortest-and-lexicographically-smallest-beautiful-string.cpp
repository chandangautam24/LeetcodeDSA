class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int n=s.size();
        string ans="";
        int l=0,r=0;int cnt=0;
        int len=INT_MAX;
        while(r<n){
            if(s[r]=='1'){
                cnt++;
            }
            while(cnt>=k){
                int currlen=r-l+1;
                string curr=s.substr(l,currlen);
                if(currlen<len ||(currlen==len && curr<ans)){
                    len=currlen;
                    ans=curr;
                }
            if(s[l]=='1'){
                cnt--;
            }
            l++;
            }
            r++;
        }
        return ans;
    }
};