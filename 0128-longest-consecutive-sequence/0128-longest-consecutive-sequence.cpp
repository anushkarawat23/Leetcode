class Solution {
public:
    int longestConsecutive(vector<int>& nums) 
    {
        unordered_set<int> s (nums.begin() , nums.end());
        int longest = 0;
        for( int i = 0; i < nums.size() ; i++)
        {
            int count = 0;
            //we check if the number just before nums[i] is present in set then continue
            if( s.find( nums[i] - 1 ) != s.end() )
            {
                continue;
            }
            else
            {
                count++;
                int curr_element = nums[i];
                while( s.find( ++curr_element) != s.end() ) 
                {
                    count++;
                }
                longest = max(longest, count);
            }
        }
        return longest;
        
        
    }
};