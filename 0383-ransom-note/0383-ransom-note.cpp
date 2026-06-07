class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int>mapr;
        for(auto i: magazine){
            mapr[i]++;
        }
        for(auto i: ransomNote){
            if(mapr[i]==0){
                return false;
            }
            mapr[i]--;
        }
        return true;
    }
};