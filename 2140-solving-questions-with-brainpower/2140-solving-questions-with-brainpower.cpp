class Solution {
public:
using ll=long long;
using vi=vector<ll>;
using vvi=vector<vi>;
using vvvi=vector<vvi>;
ll f(vector<vector<int>>& questions,int i,vi&memo){
    if(i>=questions.size())
    return 0;
    if(memo[i]!=-1){
        return memo[i];
    }
    ll skip=f(questions,i+1,memo);
    ll pick=questions[i][0]+f(questions,i+questions[i][1]+1,memo);
    return memo[i]=max(skip,pick);
}
    long long mostPoints(vector<vector<int>>& questions) {
        vi memo(questions.size(),-1);
        return f(questions,0,memo);
    }
};