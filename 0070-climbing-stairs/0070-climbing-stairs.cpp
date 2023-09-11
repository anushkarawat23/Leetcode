class Solution {
public:

/*
    // BRUTE FORCE BUT TLE
    int climbStairs(int n)
    {
        if( n <= 1 )
            return 1;
        
        int left = climbStairs( n - 1 );
        int right = climbStairs( n - 2 );

        return left + right;
    }

    int climbStairs(int n) 
    {
        vector<int> dp(n+1,-1);
        return memoi(n,dp);
    }
    int memoi(int n,vector<int> &dp)
    {
        if(n<=1)
            return 1;
        if(dp[n]!=-1)
            return dp[n];
        dp[n] = (memoi(n-1,dp) + memoi(n-2,dp));

        return dp[n];
    }

    // TABULATION METHOD

    int climbStairs(int n) 
    {
        vector<int> dp(n+1);
        dp[0] = 1;
        dp[1] = 1;
        for(int i = 2; i <= n ; i++)
        {
            dp[i] = dp[i-1] + dp[i-2];
        }

        return dp[n];
    }
*/
    // TABULATION METHOD with SPACE OPTIMIZATION

    int climbStairs(int n)
    {
        if( n <= 1)
            return 1;
        int prev1 = 1;
        int prev2 = 1;
        int curr;

        for(int i = 2; i <= n ; i++)
        {
            curr = prev2 + prev1;
            prev2 = prev1;
            prev1 = curr;
            
        }

        return curr;

    }
    


};