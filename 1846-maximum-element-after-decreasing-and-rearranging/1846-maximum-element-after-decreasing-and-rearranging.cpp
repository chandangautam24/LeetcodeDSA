class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
        int n=arr.size();
        vector<int>ans(n+1,0);
        for(auto &i: arr){
            ans[min(i,n)]++;
        }
        int temp=0;
        for(int i=1; i<=n; i++){
            temp=min(i,temp+ans[i]);
        }
        return temp;
    }
};