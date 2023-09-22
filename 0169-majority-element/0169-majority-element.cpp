class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        unordered_map<int,int> freq;
        int times = nums.size()/2;
        for(int i = 0 ; i < nums.size() ; i++)
        {
            freq[nums[i]]++;
        }
        for(auto it : freq)
        {
            if(it.second > times)
                return it.first;
        }
        return 0;
    }
};