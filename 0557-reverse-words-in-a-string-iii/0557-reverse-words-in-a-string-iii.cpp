class Solution {
public:
    string reverseWords(string s) 
    {
        stack<char> st;
        string ans = "";
        for(int i = 0 ; i < s.size() ; i++)
        {
            if( s[i] != ' ')
            {
                st.push(s[i]);
            }
            else
            {
                while( !st.empty() )
                {
                    ans.push_back( st.top() );
                    st.pop();
                }
                ans.push_back(' ');
            }
            continue;
        }
        while( !st.empty() )
        {
            ans.push_back( st.top() );
            st.pop();
        }
        return ans;
    }
};