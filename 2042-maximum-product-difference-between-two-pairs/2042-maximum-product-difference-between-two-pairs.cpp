class Solution {
public:
    int maxProductDifference(vector<int>& nums)
    {
        sort(nums.begin() , nums.end());
        int temp1 = nums[0] * nums[1];
        int temp2 = nums[nums.size()-1] * nums[nums.size()-2];
        return temp2 - temp1;
    }
};