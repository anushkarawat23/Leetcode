class Solution {
public:
    int longestSubarray(vector<int>& nums) 
    {
        //SLIDING WINDOW
        int left = 0;   //left ptr of sliding window
        int zeros = 0;  //number of zeros encountered
        int ans = 0 ;  // the longest subarray

        for (int right = 0 ; right < nums.size() ; right++)
        {
            if(nums[right] == 0)
            {
                zeros++;
            }

            //adjusting the window by maintaining max only 1 zero in the it
            while(zeros > 1)
            {
                if(nums[left] == 0)
                {
                    zeros--;
                }
                left++;
            }

            ans = max(ans, right - left);
        }

        // if the whole array is the subarray that is no zero, 
        // just return ans as right will run until n - 1.
        return ans;  

    }
};