class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int n=nums.size();
        int currMax=0,currMin=0;
        int Maxsum=0,Minsum=0;
        for(int i=0; i<n; i++){
            currMax=max(nums[i],currMax+nums[i]);
            Maxsum=max(Maxsum,currMax);
            currMin=min(nums[i],currMin+nums[i]);
            Minsum=min(Minsum,currMin);
        }
        cout<<Maxsum<<" "<<Minsum;
        return max(Maxsum,abs(Minsum));
    }
};