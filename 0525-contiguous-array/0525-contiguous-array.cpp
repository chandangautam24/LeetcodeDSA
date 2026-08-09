class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n=nums.size();
        int sum=0,mxlen=0;
        unordered_map<int,int>mpp;
        for(int i=0; i<n; i++){
         sum+=nums[i]==0?-1:1;
         if(sum==0){
            mxlen=i+1;
         }
         if(mpp.find(sum)!=mpp.end()){
            mxlen=max(mxlen,i-mpp[sum]);
         }
         else{
            mpp[sum]=i;
         }
        }
        return mxlen;
    }
};