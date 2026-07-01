class Solution {
public:
    bool detectCapitalUse(string word) {
        int s=word.size();
        int uppercnt=0;
        for(int i=0; i<s; i++){
           if(isupper(word[i]))uppercnt++;
        }
        return (uppercnt==s||uppercnt==0||(uppercnt==1 && isupper(word[0])));
    }
};