class Solution {
public:
    int numberOfSubstrings(string s) {
        int n=s.size();
        unordered_map<char,int>smap;
        int l=0; int cnt=0;
        for(int i=0; i<n; i++){
            smap[s[i]-'a']++;
            while(smap[0] && smap[1] && smap[2]){
                cnt+=(n-i);
                smap[s[l]-'a']--;
                l++;
            }
        }
        return cnt;
    }
};