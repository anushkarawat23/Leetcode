class Solution {
public:
    int findMaxK(vector<int>& nums) 
    {
        //TC = O(NLOGN)   SC = O(1)
        sort(nums.begin(),nums.end());
        int left = 0, right = nums.size()-1;
        while(left < right)
        {
            if(nums[left] < 0)
            {
                if( abs(nums[left]) == nums[right])
                    return nums[right];
                else if( abs(nums[left]) < nums[right] )
                    right--;
                else
                    left++; 
            }
            else
                return -1;
        }
        return -1;

       

        
    }
};