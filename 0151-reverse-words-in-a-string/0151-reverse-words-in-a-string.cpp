class Solution {
public:
    string reverseWords(string s) 
    {
        string temp;
        stack<string> stack;
        for(int i = 0 ; i < s.size() ; i++)
        {
            if( s[i] == ' ')
                continue;
            
            while( i < s.size() && s[i] != ' ')
            {
                temp.push_back(s[i]);
                i++;
            }

            stack.push(temp);
            temp = "";
        }

        string ans = "" ;
        while( !stack.empty() )
        {
            ans = ans + stack.top() ;
            stack.pop();
            if( !stack.empty() )
                ans = ans + " ";
        }

        return ans;
    }
};