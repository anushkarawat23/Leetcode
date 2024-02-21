class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    {
        set<char> sets;
        int ans = 0, length = 0;
        int temp = 0; //temp index
        int i = 0;
        while(i < s.size())
        {
            if(sets.find(s[i]) != sets.end())
            {
                sets.erase(s[temp]);
                temp++;
                length--;
            }
            else
            {
                sets.insert(s[i]);
                length++;
                ans = max(ans, length);
                i++;
            }
        }
        return ans;
    }
};