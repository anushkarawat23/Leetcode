class Solution {
public:
    void sortColors(vector<int>& nums) 
    {
        
        // COUNTING SORT
        int n = nums.size();
        int m = -1;
        for(int i = 0 ; i < n ; i++)
            m = max(m,nums[i]);
        vector<int> count(m+1,0);  
        for(int i = 0 ; i < n ; i++)
        {                       
            count[nums[i]]++;   
        }
        for(int i = 1 ; i <= m ; i++)
        {
            count[i] += count[i-1];
        }

        vector<int> ans(n);

        for(int i = n-1 ; i >= 0 ; i--)
        {
            ans[ --count[nums[i]] ] = nums[i];
        }
        
        for(int i = 0 ; i < n ; i++)
            nums[i] = ans[i];


    }
};