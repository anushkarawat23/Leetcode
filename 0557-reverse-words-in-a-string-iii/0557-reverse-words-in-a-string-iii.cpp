/* MY APPROACH USING STACK        TC = O(N)   SC = O(N)
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
*/

   //SOLTUION     TC = O(N)   SC = O(1)
class Solution {
public:
    string reverseWords(string s) {
        int i=0;
        for(int j=0;j<s.length();j++)
        {
            if(s[j]==' ')
            {
                reverse(s.begin()+i,s.begin()+j);
                i=j+1;
            }
        }
        reverse(s.begin()+i,s.end());
        return s;
    }
};