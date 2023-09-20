class Solution {
public:
    int arrayPairSum(vector<int>& nums) 
    {
        sort(nums.begin(), nums.end());
        int sum = nums[0];
        for(int i = 2 ; i < nums.size() ; i++)
        {
            if( i % 2 == 0 )
                sum += nums[i];
        }
        return sum;
    }
};