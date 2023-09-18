/*
class Solution {
public:
    int longestConsecutive(vector<int>& nums) 
    {
        // TC = O( nlogn )   // SC = O(n)

        set<int> s;     // insertion in ordered set takes O(logn) time
        for(int i = 0; i < nums.size() ; i++)        // n times
        {
            s.insert(nums[i]);           // O(logn)
        }
       
        int maxi = 0;
        auto it = s.begin();
        //auto end = s.end();
        while( it != s.end() )
        {
           
            int current = *it;
            int count = 1;
            it++;
            while( it != s.end() && *it - current == 1)
            {
                count++;
                current = *it;
                it++;
            }
            maxi = max( maxi , count);
        }
        
        return maxi;  
        
    }
};

*/

class Solution {
public:
    int longestConsecutive(vector<int>& nums) 
    {
        // TC = O(N)   SC = O(N)

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