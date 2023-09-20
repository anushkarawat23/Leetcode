class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) 
    {
        set<char> set1;
        for(int i = 0 ; i < allowed.size() ; i++)
        {
            set1.insert( allowed[i] );
        }
        int count = words.size();
        for(int i = 0 ; i < words.size() ; i++)
        {
            for(int j = 0 ; j < words[i].size() ; j++)
            {
                if( set1.find( words[i][j] ) == set1.end() )
                {
                    count--;
                    break;
                }
            }
            
        }
        return count;

    }
};