class Solution {
public:
/*
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
    */


    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) 
    {
        stack<int> st;
        unordered_map<int,int> mp;
        for(int i = 0 ; i < nums2.size() ; i++)
        {
            while( !st.empty() && nums2[i] > st.top() )
            {
                mp[st.top()] = nums2[i];
                st.pop();
            }
            st.push(nums2[i]);
        }

        vector<int> ans;

        for(int i = 0 ; i < nums1.size() ; i++)
        {
            if( mp.count(nums1[i]) != 0 )
                ans.push_back( mp[nums1[i]]);
            else
                ans.push_back(-1);
        }
        return ans;

    }
};