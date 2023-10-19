class Solution {
public:
    bool backspaceCompare(string s, string t) 
    {
        string new1, new2;
        for(int i = 0 ; i < s.size() ; i++)
        {
            if(s[i] != '#')
                new1.push_back(s[i]);
            else
            {
                if(new1.size() != 0)
                    new1.pop_back();
            }
        }
        for(int i = 0 ; i < t.size() ; i++)
        {
            if(t[i] != '#')
                new2.push_back(t[i]);
           else
            {
                if(new2.size() != 0)
                    new2.pop_back();
            }
        }
        return new1 == new2;
    }
};