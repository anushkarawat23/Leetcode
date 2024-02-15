class Solution {
public:
    int distinctAverages(vector<int>& nums) 
    {
        //  TC = O(NLOGN)   SC = O(N)
        set<float> s;
        sort(nums.begin(),nums.end());
        int end = nums.size()-1;
        int start = 0;
        while(start < end)
        {
            float mini = nums[start];
            float maxi = nums[end];
            float avg = (mini + maxi) / 2;
            s.insert(avg);
            end--;
            start++;
        }
        return s.size();
        
    }
};