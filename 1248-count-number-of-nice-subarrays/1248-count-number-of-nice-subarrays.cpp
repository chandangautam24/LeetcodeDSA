class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
       return func(nums,k)-func(nums,k-1);
    }
    int func(vector<int>&nums,int k){
        int n=nums.size();
        int l=0,r=0;
        int sum=0,cnt=0;
        while(r<n){
            sum+=nums[r]%2;
            while(sum>k){
                sum-=nums[l]%2;
                l++;
            }
            cnt=cnt+(r-l+1);
            r++;
        }
        return cnt;
    }
};