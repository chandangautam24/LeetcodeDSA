class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        vector<string>ans;
        string res;
        while(ss >> res){
            ans.push_back(res);
        }
        string word;
        for(int i=ans.size()-1; i>=0; i--){
            word+=ans[i];
            if(i>0){
                word+=' ';
            }
        }
       return word;
    }
};