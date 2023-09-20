class Solution {
public:

    bool checkPal(string a)
    {
        stack<char> st;
        for(int j = 0; j < a.size() ; j++)
        {
            st.push(a[j]);
        }
        string temp = "";
        while( !st.empty() )
        {
            temp.push_back( st.top() );
            st.pop();
        }

        if( a == temp)
            return true;
        return false;
    }

    string firstPalindrome(vector<string>& words) 
    {
        for(int i = 0 ; i < words.size() ; i++)
        {
            if( checkPal(words[i]) )
                return words[i];
        }
        return "";
    }
};