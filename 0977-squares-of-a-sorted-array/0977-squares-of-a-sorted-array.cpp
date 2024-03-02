class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) 
    {
        int p1 = 0, p2 = nums.size()-1;
        vector<int> ans(nums.size());
        int ans_ptr = nums.size()-1;
        while(p1 <= p2 && ans_ptr >= 0 )
        {
            if(abs(nums[p1]) >= abs(nums[p2]))
            {
                ans[ans_ptr] = nums[p1]*nums[p1];
                ans_ptr--;
                p1++;
            }
            else
            {
                ans[ans_ptr] = nums[p2]*nums[p2];
                ans_ptr--;
                p2--;
            }
        }
        return ans;
    }
};