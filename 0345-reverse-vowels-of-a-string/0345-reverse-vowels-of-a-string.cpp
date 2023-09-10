class Solution {
public:
    string reverseVowels(string s) 
    {
        stack<char> stack;
        for(int i = 0 ; i < s.size() ; i++)
        {
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' ||s[i] == 'U')
            {
                stack.push( s[i] );
                s[i] = '$';
            }
        }
        for(int i = 0 ; i < s.size() ; i++)
        {
            if( s[i] == '$' )
            {
                s[i] = stack.top();
                stack.pop();
            }
        }

        return s;

        
    }
};