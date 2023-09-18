class Solution {
public:
    int longestConsecutive(vector<int>& nums) 
    {
        set<int> s;
        for(int i = 0; i < nums.size() ; i++)
        {
            s.insert(nums[i]);
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