class Solution {
public:
    int nthUglyNumber(int n) {
        priority_queue<long long,vector<long long>,greater<long long>>pq;
        set<long long>seen;
        pq.push(1);
        seen.insert(1);
        long long uglynum=1;
        for(int i=0; i<n; i++){
            uglynum=pq.top();
            pq.pop();
            if(seen.find(uglynum*2)==seen.end()){
                pq.push(uglynum*2);
                seen.insert(uglynum*2);
            }
            if(seen.find(uglynum*3)==seen.end()){
                pq.push(uglynum*3);
                seen.insert(uglynum*3);
            }
            if(seen.find(uglynum*5)==seen.end()){
                pq.push(uglynum*5);
                seen.insert(uglynum*5);
            }
        }
        return uglynum;
    }
};