class Solution {
public:
    int findLucky(vector<int>& arr) 
    {
        unordered_map<int,int> freq;
        for(int i = 0; i < arr.size() ; i++)
        {
            freq[arr[i]]++;
        }
        vector<int> ans;
        for(auto it : freq)
        {
            if( it.second == it.first)
                ans.push_back(it.first);
        }
        if( ans.size() == 0)
            return -1;
        else
            return *max_element(ans.begin(),ans.end());
    }
};