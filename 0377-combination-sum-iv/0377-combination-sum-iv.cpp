class Solution {
public:
    int combinationSum4(vector<int>& nums, int target) 
    {
        //  dp[i] will store the number of combinations that sum upto i
        vector<unsigned int> dp(target+1,0);
        dp[0] = 1;  // only 1 combi possible for target 0 i.e. {0}

        for(int i = 1; i <= target ; i++)
        {
            for(int numIndex = 0 ; numIndex < nums.size() ; numIndex++)
            {
                int current = nums[numIndex];
                if( i - current >= 0)
                {
                    dp[i] = dp[i] + dp[i - current];
                }
            }
        }
        return dp[target];

    }
};