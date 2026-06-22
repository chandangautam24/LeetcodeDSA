class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char,int>mpp1,mpp2;
        string s="balloon";
        for(auto &i: s){
            mpp1[i]++;
        }
        for(auto &j: text){
            mpp2[j]++;
        }
        int cnt=INT_MAX;
        for(auto &k:mpp1){
          cnt=min(cnt,mpp2[k.first]/k.second);
        }
       return cnt;
    }
};