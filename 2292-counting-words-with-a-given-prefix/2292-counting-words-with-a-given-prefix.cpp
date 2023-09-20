class Solution {
public:
    int prefixCount(vector<string>& words, string pref)
    {
        int count = words.size();
        for(int i = 0 ; i < words.size() ; i++)
        {
            // was not getting accepted when words[i] = i and pref = ikw___ hence the condition
            for(int j = 0; j < pref.size() && j < words[i].size() ; j++)
            {
                if( pref[j] != words[i][j] || words[i].size() < pref.size() )
                {
                    count--;
                    break;
                }
            }
        }
        return count;
    }
};