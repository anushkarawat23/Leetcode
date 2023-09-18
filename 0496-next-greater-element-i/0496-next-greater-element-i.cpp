class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) 
    {
        // Time Complexity: O(m * n)
        // Space Complexity: O(m)
        
        vector<int> ans;
        for(int i = 0 ; i < nums1.size() ; i++)
        {
            int number = nums1[i];
            for(int j = 0 ; j < nums2.size() ; j++)
            {
                if( nums2[j] == number )
                {
                    int index = j;
                    index++;
                    while(index < nums2.size() && nums2[index] < number )
                    {
                        index++;
                    }
                    if(index < nums2.size())
                    {
                        ans.push_back(nums2[index]);
                        break;
                    }
                    else
                    {
                        ans.push_back(-1);
                        break;
                    }
                }
            }
        }
        return ans;
    }
};