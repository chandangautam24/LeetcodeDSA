class Solution {
public:
using vvi=vector<vector<int>>;
using vi=vector<int>;
vvi ans;
void solve(int i, int n, vi& res,vi&nums){
    if(i>=n){
        ans.push_back(res);
        return;
    }
    res.push_back(nums[i]);
    solve(i+1,n,res,nums);
    res.pop_back();
    solve(i+1,n,res,nums);
}
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        vector<int>res;
        solve(0,n,res,nums);
        return ans;
    }
};