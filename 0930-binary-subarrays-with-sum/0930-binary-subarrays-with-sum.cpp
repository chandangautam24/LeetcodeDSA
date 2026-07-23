class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return almost(nums,goal)-almost(nums,goal-1);
    }
    int almost(vector<int>&nums,int k){
        if(k<0)return 0;
        int n=nums.size();
        int l=0,r=0;
        int sum=0,cnt=0;
        while(r<n){
            sum+=nums[r];
            while(sum>k){
                sum-=nums[l];
                l++;
            }
            cnt=cnt+(r-l+1);
            r++;
        }
        return cnt;
    }
};