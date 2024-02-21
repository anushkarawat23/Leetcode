class Solution {
public:
    int subarraySum(vector<int>& nums, int k) 
    {
        unordered_map<int,int> mp;
        int currsum = 0;
        int count = 0;
        for(int i = 0 ; i < nums.size() ; i++)
        {
            currsum += nums[i];
            if(mp.find(currsum - k) != mp.end())
            {
                count += mp[currsum-k];
            }
            if(currsum == k)
                count++;
            mp[currsum]++;
        }
        return count;

        
    }
};