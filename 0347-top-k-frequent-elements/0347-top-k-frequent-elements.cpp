class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
     priority_queue<pair<int,int>>pq;
     vector<int>ans;
     unordered_map<int,int>mpp;
     for(auto &c:nums){
        mpp[c]++;
     }
     for(auto &i: mpp){
        pq.push({i.second,i.first});
     }   
    while(k>0){
        ans.push_back(pq.top().second);
        pq.pop();
        k--;
     }
     return ans;
    }
};