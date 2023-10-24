/* MY NORMAL APPROACH
class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        vector<int> ans;
        set<int> s;
        for(int i=0;i<nums.size();i++)
        {
            s.insert(nums[i]);
        }
        auto it = s.begin();
        while(it != s.end())
        {
            ans.push_back(*it);
            it++;
        }
        nums=ans;
        return nums.size();
    }
};
*/


//  OPTIMIZED SOLUTION (TWO POINTERS)

class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        int index = 0;
        for(int i = 1; i < nums.size() ; i++)
        {
            if(nums[index] != nums[i])
            {
                index++;
                nums[index] = nums[i];
            }
        }

        return index + 1;
    }

        
};
