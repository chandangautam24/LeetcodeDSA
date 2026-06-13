class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string res;
        for(string &w: words){
            int sum=0;
            for(char ch: w){
                sum+=weights[ch-'a'];
            }
            int num=sum%26;
            res.push_back(char('z'-num));
        }
        return res;

    }
};