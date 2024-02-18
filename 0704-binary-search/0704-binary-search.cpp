class Solution {
public:
    int search(vector<int>& nums, int target) 
    {
        int l=0,r=nums.size()-1;
        
        return binarySearch(nums,l,r,target);
        
    }

    int binarySearch(vector<int>&nums, int l, int r,int target)
    {
        while(r>=l)
        {
            int mid = l + (r-l) / 2;
            if(target==nums[mid])
                return mid;
            if(target < nums[mid])
                return binarySearch(nums,l,mid-1,target);
            if(target > nums[mid])
                return binarySearch(nums,mid+1,r,target);
        }
        return -1;
    }
};