class Solution {
public:
    int search(vector<int>& nums, int target) 
    {
        int low = 0, high = nums.size()-1;
        while(low <=high )
        {
            int mid = (low + high)/2;
            if(nums[mid] == target)
                return mid;
            //check if left subarray (to mid) is sorted
            if(nums[low] <= nums[mid])
            {
                //check if target is present in this subarray
                if(nums[low] <= target && nums[mid] >= target)
                {
                    high = mid-1;
                }
                else
                {
                    low = mid + 1;
                }
            }
            //left is not then right subarrray is sorted
            else
            {
                if(nums[mid] <= target && target <= nums[high] )
                {
                    low = mid+1;
                }
                else
                {
                    high = mid - 1;
                }
            }
        }
        return -1;
    }
};