class Solution {
public:
    string removeDuplicates(string s, int k) 
    {
        stack<pair<char, int>> st; // Pair of character and its frequency
        for (char c : s) {
            if (st.empty() || st.top().first != c) {
                st.push({c, 1});
            } else {
                if (++st.top().second == k) {
                    st.pop();
                }
            }
        }
        
        string ans;
        while (!st.empty()) {
            int count = st.top().second;
            char c = st.top().first;
            st.pop();
            while (count--) {
                ans += c;
            }
        }
        
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
