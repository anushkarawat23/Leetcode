class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        /* BRUTE FORCE   O(N^2)
        vector<int> ans;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums[i]+nums[j]==target)
                {
                    ans.push_back(i);
                    ans.push_back(j);
                }
            }
        }
        return ans;
        */


        //OPTIMIZED APPROACH

        unordered_map<int,int> map;
        vector<int> ans;
        int i ;
        for(i = 0 ; i < nums.size() ; i++)
        {
            if( map.find( (target - nums[i]) ) != map.end())
            {
                ans.push_back(i);
                ans.push_back(map[ target - nums[i] ]);
                return ans;
            }
            map[nums[i]] = i;
        }
        return ans;
    }
};