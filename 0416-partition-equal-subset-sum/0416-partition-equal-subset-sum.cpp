class Solution {
public:

    bool subsetSum(vector<int> &nums, int sum)
    {
        vector<vector<bool>> dp(nums.size()+1, vector<bool>(sum+1));
        //initialization
        for(int j = 0 ; j < sum + 1 ; j++)
            dp[0][j] = false;
        for(int i = 0 ; i < nums.size()+1 ; i++)
            dp[i][0] = true;

        for(int i = 1 ; i < nums.size()+1 ; i++)
        {
            for(int j = 1 ; j < sum+1 ; j++)
            {
                  //choice diagram
                if(nums[i-1] <= j)
                {
                    dp[i][j] = (dp[i-1][j - nums[i-1]]) || (dp[i-1][j]);
                } 
                else
                    dp[i][j] = dp[i-1][j];
            }
        }
        return dp[nums.size()][sum];   
    }

    bool canPartition(vector<int>& nums) 
    {
        int sum = 0;
        for(int i = 0 ; i < nums.size() ; i++)
        {
            sum += nums[i];
        }
        if(sum % 2 != 0)     //since question is to partition the array into two 
            return false;    //subsets with equal sum i.e 2S = sum of nums
    
        return subsetSum(nums,sum/2);
    }
};