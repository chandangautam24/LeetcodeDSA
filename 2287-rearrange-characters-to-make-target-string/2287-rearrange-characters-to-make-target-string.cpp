class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        int n=s.size();
        int t=target.size();
        int ans=INT_MAX;
        unordered_map<char,int>mppS,mapt;
        for(auto &i: s){
            mppS[i]++;
        }
        for(auto &j:target){
            mapt[j]++;
        }
        for(auto &k: mapt){
            ans=min(ans,mppS[k.first]/k.second);
        }
       return ans;
    }
};