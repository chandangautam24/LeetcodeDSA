class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n=gain.size();
        int curr=0,mx=0;
        for(auto &i : gain){
            curr+=i;
            mx=max(curr,mx);
        }
      return mx;
    }
};