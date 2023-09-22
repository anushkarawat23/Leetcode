class Solution {
public:
    bool findSubarrays(vector<int>& nums) 
    {
        set<int> sets;
        int sum = 0;
        for(int i = 0; i < nums.size()-1 ; i++)
        {
            sum = 0;
            sum = nums[i] + nums[i+1];
            if( sets.find( sum ) != sets.end() )
                return true;
            else
                sets.insert(sum);
        }
        return false;
    }
};