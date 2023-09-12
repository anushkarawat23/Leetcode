class Solution {
public:
    int minDeletions(string s) 
    {
        map<char,int> mp;
        for(int i = 0; i < s.size() ; i++)
            mp[ s[i] ]++;
        
        int ans = 0;
        unordered_set<int> freq;
        for(auto& it : mp)     //ceabaacb   // a-3, b-2, c-2, e-1
        {
            while( freq.find(it.second) != freq.end() )
            {
                ans++;
                it.second--;
            }
            if( it.second > 0)
                freq.insert( it.second );
        }
        return ans;
        
        //bbcebab   a-1, b-4, c-1, e-1
    }
};