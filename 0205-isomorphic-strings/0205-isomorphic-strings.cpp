class Solution {
public:
    bool isIsomorphic(string s, string t) 
    {
        unordered_map<char,char> maps;
        unordered_map<char,char> maps2;
        if(s.size() != t.size())
            return false;
        for(int i = 0; i < s.size() ; i++)
        {
            if( maps.find(s[i]) == maps.end() ) 
                maps[s[i]] = t[i];
            else
            {
                if(maps[s[i]] != t[i])
                    return false;
            }
        }
        for(int i = 0; i < t.size() ; i++)
        {
            if( maps2.find(t[i]) == maps2.end() ) 
                maps2[t[i]] = s[i];
            else
            {
                if(maps2[t[i]] != s[i])
                    return false;
            }
        }
        return true;
    }
};