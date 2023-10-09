class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) 
    {
        if (nums.size() == 0)
            return {-1, -1};
        if (nums.size() == 1)
        {
            if (nums[0] == target)
                return {0, 0};
            else
                return {-1, -1};
        }
        int low = 0, high = nums.size() - 1;
        vector<int> ans = {-1, -1}; // Initialize ans with invalid values
        while (low <= high)
        {
            int mid = (low + high) / 2;
            if (nums[mid] == target)
            {
                ans[0] = mid;
                ans[1] = mid;
                int start = mid, end = mid;
                while (start > 0 && nums[start - 1] == target)
                    start--;
                while (end < nums.size() - 1 && nums[end + 1] == target)
                    end++;
                ans[0] = start;
                ans[1] = end;
                return ans;
            }
            else if (target < nums[mid])
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        return ans;
    }
};
