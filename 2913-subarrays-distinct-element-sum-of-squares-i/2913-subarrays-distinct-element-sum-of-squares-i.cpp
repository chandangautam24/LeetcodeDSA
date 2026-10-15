class Solution {
public: // this gives T.C-> O(n^2)
    int sumCounts(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        for(int j=0; j<n; j++){
            unordered_set<int>st;
           for(int i=j; i<n; i++){ 
              st.insert(nums[i]);
              int x=st.size();
              ans+=x*x;
            }     
        }
        return ans;
    }
};