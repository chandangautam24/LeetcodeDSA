class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int mxlen = 0;
        for (int i = 0; i < n; i++) {
              vector<int> hash(256, 0);
            for (int j = i; j < n; j++) {
                if (hash[(unsigned char)s[j]] == 1) {
                    break;
                }
                hash[(unsigned char)s[j]] = 1;
                mxlen = max(mxlen, j-i+1);
            }
        }
        return mxlen;
    }
};