class Solution {
public:
int helper(vector<int>&prices,int day,int state,vector<vector<vector<int>>>&memo,int k){   
    if(day==prices.size() || k==0)
    return 0;
    if(memo[day][state][k]!=-1){
        return memo[day][state][k];
    }
    if(state==0){
        int buy=-prices[day]+helper(prices,day+1,1,memo,k);
        int skip=helper(prices,day+1,0,memo,k);
        return memo[day][state][k]=max(buy,skip);
    }
    else{
        int sell=prices[day]+helper(prices,day+1,0,memo,k-1);
        int dontsell=helper(prices,day+1,1,memo,k);
        return memo[day][state][k]=max(sell,dontsell);
    }
}
    int maxProfit(int k, vector<int>& prices) {
    vector<vector<vector<int>>>memo(prices.size()+5,vector<vector<int>>(2,vector<int>(k+1,-1)));
    return helper(prices,0,0,memo,k);
    }
};