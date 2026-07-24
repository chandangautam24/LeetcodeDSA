class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
       return func(nums,k)-func(nums,k-1);
    }
    int func(vector<int>&nums,int k){
        int n=nums.size();
        int l=0,r=0;
        unordered_map<int,int>mpp;
        int cnt=0;
        while(r<n){
            mpp[nums[r]]++;
            while(mpp.size()>k){
             mpp[nums[l]]--;
             if(mpp[nums[l]]==0)mpp.erase(nums[l]);
             l++;
            }
            if(mpp.size()<=k){
                cnt=cnt+(r-l+1);
            }
            r++;
        }
        return cnt;
    }
};