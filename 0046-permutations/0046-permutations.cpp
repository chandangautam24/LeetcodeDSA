class Solution {
public:
using vvi=vector<vector<int>>;
using vi=vector<int>;
void permutations(int n,vi&res,vvi&ans,vi&nums,vi&picked){
    if(res.size()==n){
        ans.push_back(res);
        return;
    }
    for(int i=0; i<n; i++){
        if(!picked[i]){
            res.push_back(nums[i]);
            picked[i]=1;
            permutations(n,res,ans,nums,picked);
            picked[i]=0;
            res.pop_back();
        }
    }
}
    vector<vector<int>> permute(vector<int>& nums) {
        vvi ans;
        int n=nums.size();
        vi picked(n,0);
        vi res;
        permutations(n,res,ans,nums,picked);
        return ans;
    }
};