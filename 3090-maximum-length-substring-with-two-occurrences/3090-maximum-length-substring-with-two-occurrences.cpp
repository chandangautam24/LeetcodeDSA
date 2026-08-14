class Solution {
public:
    int maximumLengthSubstring(string s) {
        int n=s.size();
        int l=0,r=0;
        int len=0;
        unordered_map<int,int>mpp;
        while(r<n){
            mpp[s[r]]++;
            while(mpp[s[r]]>2){
                mpp[s[l]]--;
                l++;
            }
            len=max(len,r-l+1);
            r++;
        }
        return len;
    }
};