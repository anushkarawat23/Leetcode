class Solution {
public:
    int arraySign(vector<int>& nums) 
    {
        int pos = 0, neg = 0;
        for(int i = 0 ; i < nums.size() ; i++)
        {
            if( nums[i] == 0 )
                return 0;
            if( nums[i] > 0 )
                pos++;
            else
                neg++;
        }
        if( neg % 2 == 0 )
            return 1;
        return -1;
        
    }
};