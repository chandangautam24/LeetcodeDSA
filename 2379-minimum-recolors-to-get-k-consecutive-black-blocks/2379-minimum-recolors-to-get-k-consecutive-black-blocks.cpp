class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int n = blocks.size();
        int l = 0, r = 0;
        int ans = INT_MAX;
        int Wcnt = 0;
        while (r < n) {
            if (blocks[r] == 'W') {
                Wcnt++;
            }
            if (r - l + 1 == k) {
                ans = min(ans, Wcnt);
                if (blocks[l] == 'W') {
                    Wcnt--;
                }
                l++;
            }
            r++;
        }
        return ans;
    }
};