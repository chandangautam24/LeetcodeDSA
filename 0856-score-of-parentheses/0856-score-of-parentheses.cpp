class Solution {
public:
    int scoreOfParentheses(string s) {
        int n = s.size();
        int score = 0;
        stack<int> st;
        st.push(0);
        for (auto c : s) {
            if (c == '(') {
                st.push(0);
            } 
            else {
                int top = st.top();
                st.pop();
                int ans = st.top();
                st.pop();
                st.push(ans + max(2*top, 1));
            }
        }
        return st.top();
    }
};